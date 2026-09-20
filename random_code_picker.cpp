// random code picker (attempted but not fully coded by me/KAH)

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int MAX_TASKS = 500;

unsigned int mix(unsigned int x) {
    if (x == 0) x = 0x9E3779B9u;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return x;
}

string trimLine(const string &line) {
    size_t start = 0;
    while (start < line.length() &&
           (line[start] == ' ' || line[start] == '\t')) {
        start++;
    }

    size_t end = line.length();
    while (end > start &&
           (line[end - 1] == '\n' || line[end - 1] == '\r' ||
            line[end - 1] == ' '  || line[end - 1] == '\t')) {
        end--;
    }

    return line.substr(start, end - start);
}

bool isTaskLine(const string &line) {
    if (line.empty()) return false;

    size_t i = 0;
    while (i < line.length() && line[i] >= '0' && line[i] <= '9') {
        i++;
    }

    if (i == 0 || i >= line.length() || line[i] != '.') {
        return false;
    }

    i++;
    while (i < line.length() && (line[i] == ' ' || line[i] == '\t')) {
        i++;
    }

    return i < line.length();
}

int main() {
    const char *paths[] = {
        "../../cpp/assignment/full_list.md",
        "../cpp/assignment/full_list.md",
        "cpp/assignment/full_list.md",
        "../assignment/full_list.md",
        "full_list.md"
    };

    ifstream file;
    string line;

    for (const char *path : paths) {
        file.open(path);
        if (file.is_open()) {
            break;
        }
    }

    if (!file.is_open()) {
        cerr << "Could not find full_list.md." << endl;
        return 1;
    }

    string tasks[MAX_TASKS];
    int count = 0;

    while (getline(file, line) && count < MAX_TASKS) {
        string cleaned = trimLine(line);
        if (isTaskLine(cleaned)) {
            tasks[count++] = cleaned;
        }
    }

    file.close();

    if (count == 0) {
        cerr << "No assignment tasks were found in the list." << endl;
        return 1;
    }

    unsigned int seed;
    cout << "Type a number: ";
    if (!(cin >> seed)) {
        cerr << "That wasn't a number." << endl;
        return 1;
    }

    unsigned int rolled = mix(seed);
    int chosen = static_cast<int>(rolled % static_cast<unsigned int>(count));

    cout << "\nRandom code to do:" << endl;
    cout << tasks[chosen] << endl;

    return 0;
}