/******************************************************************************
Partial Initialization of Array: 
*******************************************************************************/

#include <iostream>
using namespace std;
#define S 3

int main()
{
    int i=0, a[S] = {23,43,55};
    
    while (i < 5){
        cout << a[i] << "\t";
        i++;
    }
    
    return 0;
}
