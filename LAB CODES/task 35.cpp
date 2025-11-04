// Numinator/Denominator (Breakdown)

#include<iostream>
using namespace std;
int main()
{
    
    int Numinator = 1;
    int Denomninator = 2;
    int nthTermNuminator, nthTermDenominator;
    
    cout<<"Enter nth term (Numinator & Denomninator): ";
    cin >> nthTermNuminator >> nthTermDenominator;
    
    int i=1, j=2;
   
    while(i <= nthTermNuminator && j<= nthTermDenominator)
    {
        cout<<i<<"/"<<j<<" + ";
            if( i==nthTermNuminator && j==nthTermDenominator ) cout<<"..."<<endl;
            i++;
            j+=2;
            
    }
    return 0;
}