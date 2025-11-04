// Integer to Binary && ASCII to Integer
#include <iostream>
using namespace std;

int main()
{
        int select;
    	cout << "Press 1 for [ ASCII --> INTEGER ]\n";
        cout << "Press 2 for [ INTEGER --> BINARY ]\n";
        cout << "Exit 0\n";
        cout << "\n Select: "; cin>>select;
               
    while(1)
    {
        if(select == 1)
        {
        	char chr;
        	cout << "[ ASCII --> INTEGER ]\n";
        	cout << "__________________________________\n";
        	cout << "Enter your Character: ";
        	cin >> chr;
        	cout << "Integer value of " << chr << " is: " << (int)chr << endl;
        	cout << endl;
        	break;
        	/***************************************************/
        }	
        else if(select == 2)
        {
        	cout << "\n\n[ INTEGER --> BINARY ]\n";
        	int input,i;
            bool bin[8]={};
         
            cout<<"Enter Number (0 - 255) : ";
            cin>>input;
            
            for(i=0;i<8;i++) {
                bin[i]=input%2;
                input=input/2;}
                
            cout<<"Binary: ";
            for(i=0;i<8;i++){
            cout<<bin[i];  
            }
            break;
        }
        else
            break;
        
    }
    
    return 0;      
}