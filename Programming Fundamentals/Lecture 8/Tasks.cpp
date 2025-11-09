#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//                  [FILE HANDLING  ]
// ------- ------- Task 1: Read Integer Array[]
void readIntegersFromFile() {
    ifstream file("Input.txt");
    int arr[100], n = 0;

    while (file >> arr[n]) {
        n++;
    }

    cout << "Values from Input.txt: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    file.close();
}

// ------- ------- Task 2: Read Float Array[]
void readFloatsFromFile() {
    ifstream file("Input2.txt");
    float arr[100];
    int i = 0;
    string temp;

    while (getline(file, temp, ',')) {
        arr[i++] = stof(temp);
    }

    cout << "Values from Input2.txt: ";
    for (int j = 0; j < i; j++) {5

        cout << arr[j] << " ";
    }
    cout << endl;

    file.close();
}

// ------- ------- Task 3: Read Char Array[]
void readCharIntPairs() {
    ifstream file("Input3.txt");
    char ch;
    int val;

    cout << "Values from Input3.txt:\n";
    while (file >> ch >> val) {
        cout << ch << " " << val << endl;
    }

    file.close();
}

// ------- ------- Task 4: Read Strings
void readEqualsSeparatedPairs() {
    ifstream file("Input4.txt");
    string line;

    cout << "Values from Input4.txt:\n";
    while (getline(file, line)) {
        char ch;
        int val;
        sscanf(line.c_str(), "%c=%d", &ch, &val);
        cout << ch << " " << val << endl;
    }

    file.close();
}

// ------- ------- Task 5: Read RollNo, Name, Marks in seperate arrays [] [] [] (Marks greater than 80?)
void readStudentData() {
    ifstream file("Input5.txt");
    string roll[100], name[100];
    int marks[100], count = 0;

    while (file >> roll[count] >> name[count] >> marks[count]) {
        count++;
    }

    cout << "Students with marks > 80:\n";
    for (int i = 0; i < count; i++) {
        if (marks[i] > 80) {
            cout << name[i] << " " << marks[i]<< endl;
        }
    }

    file.close();
}



// ===== Main Menu =====
int main() {
    int choice;
    do {
        cout << "\n===== File Tasks Menu =====\n";
        cout << "1. Read Integers (Input.txt)\n";
        cout << "2. Read Floats (Input2.txt)\n";
        cout << "3. Read Char-Int Pairs (Input3.txt)\n";
        cout << "4. Read '=' Separated Pairs (Input4.txt)\n";
        cout << "5. Read Student Marks (Input5.txt)\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: readIntegersFromFile(); break;
            case 2: readFloatsFromFile(); break;
            case 3: readCharIntPairs(); break;
            case 4: readEqualsSeparatedPairs(); break;
            case 5: readStudentData(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
