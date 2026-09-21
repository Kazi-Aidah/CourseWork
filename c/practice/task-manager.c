/* 
# PLANS
When user inputs a list, user can choose to add it to a list group or create a new a single checklist.
Also, the separate boxes should be allowed to be colored. Fully colored.

Mundane ---------------------
┌──────────────────────────────┐
│ [✓] Brush Teeth              │
│ [✓] 10:37 – Breakfast        │
│ [✓] 11:22 – Folded Clothes   │
│ [✓] 11:26 – Clean up Space   │
│ [✓] 12:30 – Showered +       │
│     Hung Clothes             │
│ [•]                          │
└──────────────────────────────┘
┌──────────────────────────────┐
│ [•] Sketch out a few         │
│     graphic thumbnails       │
└──────────────────────────────┘
┌──────────────────────────────┐
│ [•] Complete Chemistry       │
│     Lab Report               │
└──────────────────────────────┘
┌──────────────────────────────┐
│ [•] Do C Programs            │
└──────────────────────────────┘
┌──────────────────────────────┐
│ [•] Plan out XPPEN           │
│     thumbnails               │
└──────────────────────────────┘


*/


#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TEXT 200
#define COLOR_COUNT 10

static const char *status_symbol[] = {"[•]", "[✓]", "[-]"};
static const char *color_name[] = {"default", "red", "orange", "yellow", "green", "cyan", "blue", "magenta", "hotpink", "gray"};
static const char *color_code[] = {"\x1b[0m", "\x1b[31m", "\x1b[38;5;208m", "\x1b[93m", "\x1b[32m", "\x1b[36m", "\x1b[34m", "\x1b[35m", "\x1b[38;5;205m", "\x1b[90m"};

char tasks[MAX_TASKS][MAX_TEXT];
int statuses[MAX_TASKS];
int colors[MAX_TASKS];
int task_count = 0;

// load
int load_tasks() {
    FILE *f = fopen("tasks.txt", "r");
    if (f == NULL) {
        return 0;
    }

    task_count = 0;
    char line[300];
    while (task_count < MAX_TASKS && fgets(line, sizeof(line), f) != NULL) {
        int status, color;
        char text[MAX_TEXT];

        if (sscanf(line, "%d %d %199[^\n]", &status, &color, text) == 3) {
            if (status < 0 || status > 2) status = 0;
            if (color < 0 || color >= COLOR_COUNT) color = 0;
            statuses[task_count] = status;
            colors[task_count] = color;
            strncpy(tasks[task_count], text, MAX_TEXT - 1);
            tasks[task_count][MAX_TEXT - 1] = '\0';
            task_count++;
        }
    }

    fclose(f);
    return task_count;
}

// save
void save_tasks() {
    FILE *f = fopen("tasks.txt", "w");
    if (f == NULL) {
        printf("Error saving tasks.\n");
        return;
    }

    for(int i = 0; i < task_count; i++) {
        fprintf(f, "%d %d %s\n", statuses[i], colors[i], tasks[i]);
    }
    fclose(f);
}

// show all tasks
void list_tasks() {
    if (task_count == 0) {
        printf("\nNo tasks saved.\n");
        return;
    }

    printf("\n--- Your Tasks ---\n");
    for(int i = 0; i < task_count; i++) {
        printf("%d. %s%s %s%s\n",
               i + 1,
               color_code[colors[i]],
               status_symbol[statuses[i]],
               tasks[i],
               color_code[0]);
    }
    printf("\n");
}

// add a new task 
void add_task() {
    if (task_count >= MAX_TASKS) {
        printf("Task list is full.\n");
        return;
    }

    int n, color;
    char text[MAX_TEXT];

    printf("\nEnter status,\n0 = default\n1 = done\n2 = cancelled\n");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return;
    }
    getchar();
    if (n < 0 || n > 2) n = 0;

    printf("\nEnter color,\n");
    for(int i = 0; i < COLOR_COUNT / 2; i++) {
        printf("%s%d = %-8s%s   %s%d = %-8s%s\n",
               color_code[i], i, color_name[i], color_code[0],
               color_code[i + 5], i + 5,
               color_name[i + 5], color_code[0]);
    }
    if (scanf("%d", &color) != 1) {
        printf("Invalid input.\n");
        return;
    }
    getchar();
    if (color < 0 || color >= COLOR_COUNT) color = 0;

    printf("\nEnter task text: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("No text entered.\n");
        return;
    }
    text[strcspn(text, "\n")] = '\0';

    // Add to arrays
    statuses[task_count] = n;
    colors[task_count] = color;
    strncpy(tasks[task_count], text, MAX_TEXT - 1);
    tasks[task_count][MAX_TEXT - 1] = '\0';
    task_count++;

    save_tasks();
    printf("Task added.\n");
}

// delete a task by its number
void delete_task() {
    if (task_count == 0) {
        printf("No tasks to delete.\n");
        return;
    }

    list_tasks();
    char line[300];
    printf("Enter the number of the task to delete (1-%d): ", task_count);
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("Invalid input.\n");
        return;
    }

    int delete_mask[MAX_TASKS] = {0};
    int delete_count = 0;

    char *token = strtok(line, " ,\t\n");
    while (token != NULL) {
        char *end;
        long value = strtol(token, &end, 10);
        if (end != token) {
            if (value >= 1 && value <= task_count) {
                int index = (int)value - 1;
                if (!delete_mask[index]) {
                    delete_mask[index] = 1;
                    delete_count++;
                }
            }
        }

        token = strtok(NULL, " ,\t\n");
    }

    if (delete_count == 0) {
        printf("No valid task numbers found.\n");
        return;
    }

    int write = 0;
    for(int read = 0; read < task_count; read++) {
        if (!delete_mask[read]) {
            statuses[write] = statuses[read];
            colors[write] = colors[read];
            strcpy(tasks[write], tasks[read]);
            write++;
        }
    }
    task_count = write;

    save_tasks();
    printf("%d task(s) deleted.\n", delete_count);
}

void edit_task() {
    if (task_count == 0) {
        printf("No tasks to edit.\n");
        return;
    }

    list_tasks();
    char input[100];
    int task_index;

    printf("Enter the task number to edit (1-%d): ", task_count);
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Invalid input.\n");
        return;
    }
    if (sscanf(input, "%d", &task_index) != 1 || task_index < 1 || task_index > task_count) {
        printf("Invalid task number.\n");
        return;
    }

    task_index--;

    printf("Edit status? (y/n): ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return;
    }
    if (input[0] == 'y' || input[0] == 'Y') {
        int new_status;
        printf("Enter new status\n0 = default\n1 = done\n2 = cancelled\n");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            return;
        }
        if (sscanf(input, "%d", &new_status) != 1 || new_status < 0 || new_status > 2) {
            printf("Invalid status.\n");
        } else {
            statuses[task_index] = new_status;
        }
    }

    printf("Edit color? (y/n): ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return;
    }
    if (input[0] == 'y' || input[0] == 'Y') {
        int new_color;
        printf("\nEnter color,\n");
        for(int i = 0; i < COLOR_COUNT / 2; i++) {
            printf("%s%d = %-8s%s   %s%d = %-8s%s\n",
                   color_code[i], i, color_name[i], color_code[0],
                   color_code[i + 5], i + 5,
                   color_name[i + 5], color_code[0]);
        }
        if (fgets(input, sizeof(input), stdin) == NULL) {
            return;
        }
        if (sscanf(input, "%d", &new_color) != 1 || new_color < 0 || new_color >= COLOR_COUNT) {
            printf("Invalid color.\n");
        } else {
            colors[task_index] = new_color;
        }
    }

    save_tasks();
    printf("Task updated.\n");
}

int main() {
    load_tasks();

    int choice;
    do {
        printf("\n--- Menu ---\n");
        printf("1. My tasks\n");
        printf("2. Add task\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Quit\n");
        printf("Choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            getchar();
            continue;
        }
        getchar();

        switch (choice) {
            case 1: list_tasks(); break;
            case 2: add_task(); break;
            case 3: edit_task(); break;
            case 4: delete_task(); break;
            case 5: printf("Goodbye.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}