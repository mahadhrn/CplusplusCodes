/*
1
1 2 
1 2 3 
1 2 3 4
1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,a;
    for (i = 0; i < 5; i++) {
        a=1;
        for(j=0; j<=i; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
