// Convert String characters (UpperCase to LowerCase and Vice versa)

#include <iostream>
using namespace std;

int main() {
    char str1[100];
    int i;

    cout << "Enter String: ";
    cin.getline(str1, 100);

    for (i = 0; str1[i] != '\0'; i++) {
        // Check uppercase
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32; 
        }
        // Check lowercase
        else if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = str1[i] - 32;
        }
    }

    cout << "Inverted String: " << str1 << endl;
    return 0;
}