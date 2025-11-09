#include<iostream>
using namespace std;

// ------- ------- Task1:  Read two numbers, calculate sum, and display it
void calculateSum() {
    int num1, num2;
    cout << "Enter first number: "; cin >> num1;
    cout << "Enter second number: "; cin >> num2;
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;
}

// ------- ------- Task2: Read an array of 5 integers, calculate sum, and display it
void calculateArraySum() {
    int arr[5], sum = 0;
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of array values: " << sum << endl;
}

// ------- ------- Task3: Read name and age, and display them
void displayInfo() {
    char name[50];
    int age;
    cout << "Enter your name: "; cin.ignore(); // To clear the newline character left by previous input
    cin.getline(name, 50);

    cout << "Enter your age: ";cin >> age;
    cout << "-> Name: " << name << "\n-> Age: " << age << endl;
}

// ------- ------- Task4: Read an integer value, and display it using another function
int readInteger() {
    int value;
    cout << "Input Value: "; cin >> value;
    return value;
}

void displayInteger(int value) {
    cout << "Output: " << value << endl;
}



// ------- ------- Task5: Read two integers, calculate sum, and display it using different** functions
void readTwoIntegers(int &a, int &b) {
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
}

int calculateSum(int a, int b) {
    return a + b;
}

void displaySum(int sum) {
    cout << "The sum is: " << sum << endl;
}

// ------- -------  Task6: Read an array, calculate sum, and display it using different** functions
void readArray(int arr[], int size) {
    cout << "Enter " << size << " integers: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int calculateArraySum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void displayArraySum(int sum) {
    cout << "The sum of the array is: " << sum << endl;
}

// ------- ------- Task7: Read an integer, calculate its 3rd power, and display it
int calculatePower3(int value) {
    return value * value * value;
}

// ------- ------- Task8: Read a number and its power, calculate the power, and display it
int calculatePower(int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}



// Main function with a menu to select different tasks
int main() {
    int choice;

    do {
        cout << "\n\t[ Menu: ]\n";
        cout << "1. Calculate Sum\n";
        cout << "2. Calculate Sum Array[]\n";
        cout << "3. Display Name, Age\n";
        cout << "4. Display Integer Value\n";
        cout << "5. Read+Calculate Sum (using Diffrent Functions)\n";
        cout << "6. Read+Calculate Sum Array[] (using Diffrent Functions) \n";
        cout << "7. Calculate 3rd Power of Integer\n";
        cout << "8. Calculate Nth power of a Integer\n";
        cout << "9. Exit\n";
        cout << "\n--------------------\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                calculateSum();
                break;
            case 2:
                calculateArraySum();
                break;
            case 3:
                displayInfo();
                break;
            case 4: {
                int value = readInteger();
                displayInteger(value);
                break;
            }
            case 5: {
                int a, b;
                readTwoIntegers(a, b);
                int sum = calculateSum(a, b);
                displaySum(sum);
                break;
            }
            case 6: {
                int arr[5];
                readArray(arr, 5);
                int sum = calculateArraySum(arr, 5);
                displayArraySum(sum);
                break;
            }
            case 7: {
                int value = readInteger();
                int power3 = calculatePower3(value);
                displayInteger(power3);
                break;
            }
            case 8: {
                int base, exponent;
                cout << "Enter the base number: ";
                cin >> base;
                cout << "Enter the exponent: ";
                cin >> exponent;
                int power = calculatePower(base, exponent);
                displayInteger(power);
                break;
            }
            case 9:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 9);

    return 0;
}
