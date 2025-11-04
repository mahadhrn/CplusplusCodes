// Count Vowels (String)

#include <iostream>
using namespace std;

int main() {
    char str[100]; 
    int count = 0; 

    cout << "Enter a string: ";
    cin.getline(str, 100); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++; 
        }
    }
    cout << "Number of vowels in the given string: " << count << endl;
    return 0;
}