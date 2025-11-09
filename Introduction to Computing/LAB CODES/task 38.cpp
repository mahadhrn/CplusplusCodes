// Postfix, Prefix VariableLogics
#include <iostream>
using namespace std;

int main()
{
    int x, w;
    char y, v;
    float z;
    
        x = 3.9/4-8+6.2*1.5;
        cout <<"x = "<<x<<endl;
        
        y = 66 + x++ + ++x;
        cout <<"y = "<<y<<endl;
        
        z = y++ * 0.5;
        cout <<"z = "<<z<<endl;
        
        w = (static_cast<int> (z)%11);
        cout<<"w = "<<w<<endl;
        
        v = (static_cast<int> (z)*3-8);
        cout<<"v = "<<v<<endl;
        
    return 0;
}
