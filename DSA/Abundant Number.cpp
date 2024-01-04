#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int fact = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            fact = fact + i;
        }
    }

    if (fact > num) {
        cout << "It is abundant.";
    } else {
        cout << "It is not abundant.";
    }

    return 0;
}

