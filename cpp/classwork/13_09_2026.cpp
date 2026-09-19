#include<iostream>
using namespace std;

class Student {
    public:
    int id;
    double cgpa;

    void input(int a, double b) {
        id = a;
        cgpa = b;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << endl;
    }
};

int main() {
    Student Aidah, Aliya;

    Aidah.input(1035, 3.90);
    Aidah.display();

    Aliya.input(1000, 4.00);
    Aliya.display();

    return 0;
}