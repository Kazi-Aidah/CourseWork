#include<iostream>
using namespace std;

int main() {
    int n, number = 2, count = 0;

    cin >> n;

    while(count < n) {
        int prime = 1;

        for(int i = 2; i < number; i++) {
            if(number % i == 0) {
                prime = 0;
                break;
            }
        }

        if(prime) {
            cout << number << " ";
            count++;
        }

        number++;
    }

    return 0;
}
