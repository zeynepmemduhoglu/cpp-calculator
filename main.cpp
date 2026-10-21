#include <iostream>

using namespace std;

class CalcuClass {
public:
    void Summation(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        cout << " sum = " << sum << endl;
    }

    void Multiply(int arr[], int n) {
        long long mult = 1;
        for (int i = 0; i < n; i++) {
            mult *= arr[i];
        }
        cout << " multiply = " << mult << endl;
    }

    void Division(int arr[], int n) {
        double div = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] != 0) {
                div /= arr[i];
            } else {
                cout << " Error: Cannot divide by zero!" << endl;
                return;
            }
        }
        cout << " division = " << div << endl;
    }

    void Subtract(int arr[], int n) {
        int sub = arr[0];
        for (int i = 1; i < n; i++) {
            sub -= arr[i];
        }
        cout << " subtract = " << sub << endl;
    }
};

int main() {
    CalcuClass calc;
    int arr[100];
    int sizeN, choice;

    cout << "Enter the Array size between 1 to 100 for n: ";
    cin >> sizeN;

    for (int i = 0; i < sizeN; i++) {
        cout << "Enter the element " << i << " of array: ";
        cin >> arr[i];
    }

    cout << "\ndisplay the array members\n[ ";
    for (int i = 0; i < sizeN; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n\n";

    do {
        cout << "===========================================\n";
        cout << "==========By Zeynep Memduhoglu==========\n";
        cout << "Advisor: Dr. Mohammed Al-hubaishi\n";
        cout << " ~~ WELCOME to Data Structure Algorithms program ~~\n\n";
        cout << "Select or Enter Your Choice from the Menu:\n";
        cout << " 1. + Summation and print the results\n";
        cout << " 2. * Multiply and print the results\n";
        cout << " 3. / Division and print the results\n";
        cout << " 4. - Subtract and print the results\n";
        cout << " 5. Exit\n";
        cout << "===========================================\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nThis is the + results\n";
                calc.Summation(arr, sizeN);
                break;
            case 2:
                cout << "\nThis is the * results\n";
                calc.Multiply(arr, sizeN);
                break;
            case 3:
                cout << "\nThis is the / results\n";
                calc.Division(arr, sizeN);
                break;
            case 4:
                cout << "\nThis is the - results\n";
                calc.Subtract(arr, sizeN);
                break;
            case 5:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "\nInvalid choice!\n";
        }
        cout << "\n";
    } while (choice != 5);

    return 0;
}
