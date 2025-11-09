#include <iostream>
using namespace std;

//              [ POINTERS ]
// ------- ------- Task 1: Integer Address
void printAddressOfVariable() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Address of the integer variable: " << &num << endl;
}

// ------- ------- Task 2: Integer Address (using Pointer)
void printAddressUsingPointer() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int* ptr = &num;
    cout << "Address of the integer variable using pointer: " << ptr << endl;
}

// ------- ------- Task 3: Integer Value through address
void printValueFromPointer() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int* ptr = &num;
    cout << "Value of the integer variable using pointer: " << *ptr << endl;
}

// ------- ------- Task 4: Print Integer from keyboard (using pointer)
void printNumberUsingPointer() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int* ptr = &num;
    cout << "Number entered using pointer: " << *ptr << endl;
}

// ------- ------- Task 5: Integer Value (using pointer / function)
void displayNumber(int* ptr) {
    cout << "Number displayed using pointer: " << *ptr << endl;
}

void question5() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    displayNumber(&num);
}

// ------- ------- Task 6: Find Greatest/Smallest 3 integers (using pointer / function)
void findGreatestAndSmallest(int* a, int* b, int* c, int* greatest, int* smallest) {
    *greatest = *smallest = *a;
    
    if (*b > *greatest) *greatest = *b;
    if (*b < *smallest) *smallest = *b;
    
    if (*c > *greatest) *greatest = *c;
    if (*c < *smallest) *smallest = *c;
}

void question6() {
    int a, b, c, greatest, smallest;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    findGreatestAndSmallest(&a, &b, &c, &greatest, &smallest);
    cout << "Greatest: " << greatest << endl;
    cout << "Smallest: " << smallest << endl;
}

// ------- ------- Task 7: Swap 2 Integers (using pointer / function)
void swapNumbers(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void question7() {
    int a, b;
    cout << "Enter two integers to swap: ";
    cin >> a >> b;
    swapNumbers(&a, &b);
    cout << "After swapping: " << a << " " << b << endl;
}

// ------- ------- Task 8: Print Characters (using pointer / function)
void question8() {
    char a, b;
    char* ptrA = &a;
    char* ptrB = &b;
    cout << "Enter two characters: ";
    cin >> a >> b;
    cout << "Value of a using pointer ptrA: " << *ptrA << endl;
    cout << "Value of b using pointer ptrB: " << *ptrB << endl;
}

// ------- ------- Task 9: Print specific letters string (using pointer / function)
void question9() {
    const char str[] = "A string.";
    const char* ptr = str;
    
    cout << "Index 0: " << ptr[0] << ", Pointer position: " << (ptr - str) << ", Letter 't': " << *(ptr + 8) << endl;
    
    ptr += 2;
    cout << "Pointer now: " << ptr << endl;
    cout << "Letters 'r': " << *(ptr + 1) << ", 'g': " << *(ptr + 2) << endl;
}



int main() {
    int choice;

    do {
        cout << "\n      ___________________________________";
        cout << "\n\t\t[ Menu: ]\n";
        cout << "1. Print address of an integer variable\n";
        cout << "2. Print address using pointer\n";
        cout << "3. Print value from pointer\n";
        cout << "4. Print number using pointer\n";
        cout << "5. Display number using pointer function\n";
        cout << "6. Find greatest and smallest among three numbers\n";
        cout << "7. Swap two numbers\n";
        cout << "8. Store and display characters using pointers\n";
        cout << "9. Print specific letters from a C-string using pointer\n";
        cout << "0. Exit\n";
        cout << "\n-------------------\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: printAddressOfVariable(); break;
            case 2: printAddressUsingPointer(); break;
            case 3: printValueFromPointer(); break;
            case 4: printNumberUsingPointer(); break;
            case 5: question5(); break;
            case 6: question6(); break;
            case 7: question7(); break;
            case 8: question8(); break;
            case 9: question9(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
