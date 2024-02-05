#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest integer is: " << num1 << endl;
        } else {
            cout << "The largest integer is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The largest integer is: " << num2 << endl;
        } else {
            cout << "The largest integer is: " << num3 << endl;
        }
    }

    return 0;
}
