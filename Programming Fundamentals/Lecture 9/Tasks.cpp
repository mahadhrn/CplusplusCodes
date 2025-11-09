#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ------- ------- Task 1: Read Integers
void readValuesFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file.\n";
        return;
    }

    int value;
    int values[50];
    int count = 0;

    while (file >> value && count < 50) {
        values[count++] = value;
    }
    file.close();

    cout << "Values read from the file: ";
    for (int i = 0; i < count; i++) {
        cout << values[i] << " ";
    }
    cout << endl;
}

// ------- ------- Task 2: Arithmetic Operations
void performOperations(const string& inputFile, const string& outputFile) {
    ifstream infile(inputFile);
    ofstream outfile(outputFile);
    if (!infile || !outfile) {
        cout << "Error opening file.\n";
        return;
    }

    int num1, num2;
    char op;

    while (infile >> num1 >> op >> num2) {
        int result;
        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/': result = num1 / num2; break;
            default:
                cout << "Unknown operator: " << op << endl;
                continue;
        }
        outfile << result << endl;
    }
    infile.close();
    outfile.close();
}

// ------- ------- Task 3: Export Odd Integers
void readAndWriteOddValues(const string& inputFile, const string& outputFile) {
    ifstream infile(inputFile);
    ofstream outfile(outputFile);
    if (!infile || !outfile) {
        cout << "Error opening file.\n";
        return;
    }

    int n;
    infile.ignore();
    infile.ignore();
    infile >> n;
    if (n < 1 || n > 20) {
        cout << "Number of values out of range.\n";
        return;
    }

    int values[20];
    for (int i = 0; i < n; i++) {
        infile >> values[i];
    }

    for (int i = 0; i < n; i++) {
        if (values[i] % 2 != 0) {
            outfile << values[i] << " ";
        }
    }
    infile.close();
    outfile.close();
}

// ------- ------- Task 4: Count Lines
int countLinesInFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file.\n";
        return -1;
    }

    int lines = 0;
    string line;
    while (getline(file, line)) {
        lines++;
    }
    file.close();
    return lines;
}

// ------- ------- Task 5: Count Words
int countWordsInFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file.\n";
        return -1;
    }

    int words = 0;
    string word;
    while (file >> word) {
        words++;
    }
    file.close();
    return words;
}

// ------- ------- Task 6: Remove Blankspaces
void removeBlankSpaces(const string& inputFile, const string& outputFile) {
    ifstream infile(inputFile);
    ofstream outfile(outputFile);
    if (!infile || !outfile) {
        cout << "Error opening file.\n";
        return;
    }

    char ch;
    while (infile.get(ch)) {
        if (ch != ' ' && ch != '\t') {
            outfile.put(ch);
        }
    }
    infile.close();
    outfile.close();
}



int main() {
    int choice;
    do {
        cout << "\n===== Menu =====\n";
        cout << "1. Task 1 - Read Integers\n";
        cout << "2. Task 2 - Arithmetic Operations\n";
        cout << "3. Task 3 - Export Odd Integers\n";
        cout << "4. Task 4 - Count Lines\n";
        cout << "5. Task 5 - Count Words\n";
        cout << "6. Task 6 - Remove Blankspaces\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: readValuesFromFile("Input.txt"); break;
            case 2: performOperations("Input2.txt", "output2.txt"); break;
            case 3: readAndWriteOddValues("Input3.txt", "output3.txt"); break;
            case 4: cout << "Total lines: " << countLinesInFile("Input4.txt") << endl; break;
            case 5: cout << "Total words: " << countWordsInFile("Input5.txt") << endl; break;
            case 6: removeBlankSpaces("Input6.txt", "output6.txt"); break;
            case 0: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
