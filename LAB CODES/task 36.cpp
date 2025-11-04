// 5-Digit Number, Reverse it, Check if Input is Less than Reverse
#include<iostream>
using namespace std;
int main()
{
    
    int x,inp, rinp = 0;
    int i, temp,b = 10;
    
    cout<<"Enter a 5 digit number: ";
    cin>>inp;
    temp = inp;     // store input for compare.
    if(inp > 9999 && inp < 100000)
    {
        
        cout<<"Reverse of "<<inp<<" is: ";
        for(i=0; i<5; i++)
        {
            rinp = rinp + (inp % b);
            rinp *= 10;
            inp = inp/b;
        }
        rinp /= 10;
        cout<<rinp<<endl;
        
        
        if(rinp > temp)
            cout<<"\nInput is Less than Output.\n";
        else if (rinp == temp)
            cout<<"\nInput is Equal to Output.\n";
        else
            cout<<"\nInput is Greater than Output.\n";
    }
    else
        cout << "\n\nWrong Input!\n\n"<<endl;
    return 0;
}
