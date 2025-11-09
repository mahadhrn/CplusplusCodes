/******************************************************************************
Centigrade to Farenheight (Convert)
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    float tempr;
    
    cout << "Enter Temperature in Centigrade : ";
    cin >> tempr;
    
    cout << "= " << (tempr * 9/5) + 32 << " Farenheight."<<endl;
    system ("pause");
 
    return 0;
}
