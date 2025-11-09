/*
1. Array (Search, Count Occurrences, and Store indexes in Array of size 5.
2. String  (Read, Count Words, and Display Words Separately.
*/

#include <iostream>
#include <cstring>  
using namespace std;

// Array (N Size)
void inputArray(int arr[], int size) {
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Search Value, Count Occurences, Store Index.
void searchValue(const int arr[], int size, int value, int& count, int indexes[]) {
    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            indexes[count++] = i;
        }
    }
}

// Display Array.
void displayArray(const int arr[], int size) {
    // cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << "a[" << arr[i] << "]" << " ";
    }
    cout << endl;
}


// ------- -------  Task 7: Read String
void readSentence(char sentence[], int size) {
    cout << "Enter a sentence: ";
    cin.ignore();  // To clear the input buffer
    cin.getline(sentence, size);
}

// Count Words
int countWords(const char sentence[]) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i])) {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}

// Display Words
void displayWords(const char sentence[]) {
    int i = 0;
    while (sentence[i] != '\0') {
        if (isspace(sentence[i])) {
            cout << endl;
        } else {
            cout << sentence[i];
        }
        i++;
    }
    cout << endl;
}




int main() {
    int choice;
    const int SIZE_5 = 5;
    int array[SIZE_5];
    int indexes[SIZE_5];

    do {
        cout << "\n\t__________________________________________________\n";
        cout << "\n\t\t\t[ Menu: ]\n";
        cout << "1. Array (Search, Count Occurrences, and Store indexes in Array of size 5.\n";
        cout << "2. String  (Read, Count Words, and Display Words Separately.\n";
        cout << "3. Exit\n";
        cout << "\n-----------Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value, count;
                inputArray(array, SIZE_5);
                cout << "Enter value to search: ";
                cin >> value;
                searchValue(array, SIZE_5, value, count, indexes);
                if (count > 0) {
                    cout << "Value found " << count << " times at indexes: ";
                    displayArray(indexes, count);
                } else {
                    cout << "Value not found.\n";
                }
                break;
            }

            case 2: {
                char sentence[100];
                readSentence(sentence, 100);
                cout << "Number of words: " << countWords(sentence) << endl;
                cout << "\nWords in separate lines:\n";
                displayWords(sentence);
                break;
            }

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice, please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
