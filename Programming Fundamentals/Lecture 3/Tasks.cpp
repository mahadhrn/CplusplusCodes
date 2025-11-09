#include <iostream>
using namespace std;

// ------- ------- Task 1: Check Palindrome
void checkPalindrome() {
    char arr[20];
    int length = 0;

    cout << "Enter Word: ";
    cin.getline(arr, 20);

    for (int i = 0; arr[i] != '\0'; i++) {
        length++;
    }

    bool isPalindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (arr[i] != arr[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "Palindrome" : "Non-Palindrome") << endl;
}

// ------- ------- Task 2: Plural of Word
void pluralOfWord() {
    char a[50];
    cout << "Enter Word: ";
    cin >> a;

    int length = 0;
    while (a[length] != '\0') length++;
    int x = length - 1;

    if (a[x] == 'y') {
        a[x] = 'i';
        a[x + 1] = 'e';
        a[x + 2] = 's';
        a[x + 3] = '\0';
    }
    else if ((a[x] == 'h' && a[x - 1] == 'c') || (a[x] == 'h' && a[x - 1] == 's')) {
        a[x + 1] = 'e';
        a[x + 2] = 's';
        a[x + 3] = '\0';
    }
    else {
        a[x + 1] = 's';
        a[x + 2] = '\0';
    }

    cout << "Plural Form: " << a << endl;
}

// ------- ------- Task 3: Print 1st of string1 & last of string2
void firstLastChar() {
    char a[10], b[10];
    cout << "Enter First Word: ";
    cin >> a;
    cout << "Enter Second Word: ";
    cin >> b;

    int length = 0;
    while (b[length] != '\0') length++;

    cout << "New Array: " << a[0] << b[length - 1] << endl;
}

// ------- ------- Task 4: Surround word with << >>
void wrapWord() {
    char symbols[4], word[10];
    cout << "Input Out: ";
    cin >> symbols;
    cout << "Input Word: ";
    cin >> word;

    cout << "Output: " << symbols[0] << symbols[1] << word << symbols[2] << symbols[3] << endl;
}

// ------- ------- Task 6a: Eliminate first 2 letters except 'ab'
void eliminateLetters() {
    char a[15];
    cout << "Enter word: ";
    cin.ignore();
    cin.getline(a, 15);

    if (a[0] == 'a' && a[1] == 'b') {
        cout << a << endl;
    } else {
        for (int i = 2; a[i] != '\0'; i++) {
            cout << a[i];
        }
        cout << endl;
    }
}



// Main Menu
int main() {
    int choice;
    do {
        cout << "\n--- String Tasks Menu ---\n";
        cout << "1. Check Palindrome\n";
        cout << "2. Plural of Word\n";
        cout << "3. First & Last Character\n";
        cout << "4. Wrap Word with Symbols\n";
        cout << "5. Eliminate First 2 Letters (Except 'ab')\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // Flush newline from input buffer

        switch (choice) {
            case 1: checkPalindrome(); break;
            case 2: pluralOfWord(); break;
            case 3: firstLastChar(); break;
            case 4: wrapWord(); break;
            case 5: eliminateLetters(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
