/* LECTURE 2:
Data ==|==|==
Index ==|==|==
Boxname ==|==|==

  a) Declare the array and fill it with user input
  b) Count drugs with the start letter 'p'
  c) Convert the first letter of each drug to UPPERCASE
  d) Move the first letter of each drug to the second last position and vice versa (only if they are different letters)
  e) Separate Reverse Array
*/

#include <iostream>d
using namespace std;

int main() {
    
    // a) Declare the array and fill it with user input
    char drugs[4][50]; 
    for(int i = 0; i < 4; i++) {
        cout << "Enter drug name " << i + 1 << ": ";
        cin >> drugs[i]; 
    }

    // b) Count drugs with the start letter 'p'
    int count = 0; 
    for(int i = 0; i < 4; i++) {
        if(drugs[i][0] == 'p'|| drugs[i][0] == 'P') count++;
    }
    cout << "\nb) Number of drugs starting with 'p': " << count << endl;


    // c) Convert the first letter of each drug to UPPERCASE
    for(int i = 0; i < 4; i++) {
        if(drugs[i][0] >= 'a' && drugs[i][0] <= 'z') drugs[i][0] -= 32;
    }
    cout<<"\nc) Capitalized First Chracter of Every Drugs: \n";
    for (int i = 0; i < 4; i++) {
        cout<<drugs[i]<<"\n ";
    }


    // d) Move the first letter of each drug to the second last position and vice versa (only if they are different letters)
    for(int i = 0; i < 4; i++) {
        int len = 0;
        while(drugs[i][len] != '\0') len++; 

        if(drugs[i][0] != drugs[i][len - 2]) { // Checking if the first and second last letters are different.
            char temp = drugs[i][0]; // Storing the first letter in a temporary variable.
            drugs[i][0] = drugs[i][len - 2]; // Moving the second last letter to the first position.
            drugs[i][len - 2] = temp; // Moving the original first letter to the second last position.
        }
    }
    cout<<"\nd) FirstLetter to SecondLast:  \n";
    for (int i = 0; i < 4; i++) {
       cout<<drugs[i]<<"\n ";
    }


    // e) Seperate Reverse Array
    char reversed[200];
    int index = 0;

    cout<<endl;
    for(int i = 0; i < 4; i++) {
        int len = 0;
        
        // cout<<endl;
        while(drugs[i][len] != '\0') len++; 
        for(int j = len - 1; j >= 0; j--) { 
            reversed[index] = drugs[i][j];
            index++;
        }
    }
    reversed[index] = '\0'; 
    cout << "\nd) Reversed array of all drug names: \n" << reversed << endl;

    return 0;
}
