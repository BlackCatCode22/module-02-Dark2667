#include <iostream>

using namespace std;



int compareTwoInts(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int sumTwoInts(int num3, int num4) {
    return num3 + num4;
}
int main() {
     cout << "Enter an integer: ";
    int num;
    cin >> num;



    int x = 10;
    int y = 3;

    int largernum = compareTwoInts(x, y);

    cout << "The larger of " << x << " and " << y << " is: " << largernum << endl;


    // Example usage of the sumTwoInts function
    int A = 12;
    int B = 8;

    int result = sumTwoInts(A, B);

    cout << "The sum of " << A << " and " << B << " is: " << result << endl;



return num;

return 0;

}
