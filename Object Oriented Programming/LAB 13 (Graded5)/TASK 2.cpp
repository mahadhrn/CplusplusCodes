// TASK 2

#include <iostream>
using namespace std;

// USING CLASS <TEMPLATE>
template <typename T>
T Max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a = 3, b = 5;
    cout << "The max of " << a << " and " << b << " is " << Max(a, b) << endl;
    
    double a1 = 5.6;
    double b1 = 7.3;
    cout << "The max of " << a1 << " and " << b1 << " is " << Max(a1, b1) << endl;
    
    string a2 = "donkey";
    string b2 = "apple";
    cout << "The max of " << a2 << " and " << b2 << " is " << Max(a2, b2) << endl;
    
    return 0;
}