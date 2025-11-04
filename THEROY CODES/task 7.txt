/******************************************************************************
Partial Initialization of Array: 
*******************************************************************************/
// (Reverse Traversal)

#include <iostream>
using namespace std;
#define S 3

int main()
{
    int i = S-1;
    int a[S] = {23,43,55};
    
    while (i >= 0){
        cout << a[i] << "\t";
        i--;
    }
    
    return 0;
}