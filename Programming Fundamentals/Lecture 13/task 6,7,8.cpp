/* File: 2D-Array (5 Student Marks -->)

input.txt
10 20 30 40 50 
20 30 40 50 60 
30 40 50 60 70 
20 30 40 50 60 
10 20 30 40 50
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int numStudents = 5;
    const int numSubjects = 5;
    int marks[numStudents][numSubjects];
    int totalMarks[numStudents] = {0};
    int highestMarks = 0;
    int studentWithHighestMarks = -1;

    // Read marks from file
    ifstream inputFile("marks.txt");
    if (!inputFile) {
        cerr << "Unable to open file!" << endl;
        return 1;
    }

    for (int i = 0; i < numStudents; ++i) {
        for (int j = 0; j < numSubjects; ++j) {
            inputFile >> marks[i][j];
        }
    }

    inputFile.close();

    // Calculate total marks and display by student number
    cout << "Total Marks for each student:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        int total = 0;
        for (int j = 0; j < numSubjects; ++j) {
            total += marks[i][j];
        }
        totalMarks[i] = total;
        cout << "Student " << (i + 1) << ": " << totalMarks[i] << endl;
        
        if (totalMarks[i] > highestMarks) {
            highestMarks = totalMarks[i];
            studentWithHighestMarks = i + 1;
        }
    }

    // Display the student number with highest marks
    cout << "Student with highest marks is Student " << studentWithHighestMarks << " with " << highestMarks << " marks." << endl;

    return 0;
}
