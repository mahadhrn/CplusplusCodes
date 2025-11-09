#include<iostream>
using namespace std;

class cat {
    private: 
        char name[50];
        double weight;
    
    public:
        cat(char n[50], double w)
        {
            name[50] = n[50];
            weight=w;
        }
        
    void get()
    {
        cout<<"Enter Name : "<<endl;
        cin.getline(name,50);
        cout<<"Enter Weight :"<<endl;
        cin>>weight;
        cout<<endl<<endl;   
    }
    
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Weight: "<<weight<<" kg"<<endl;
    }
};

int main()
{
    char name[50];
    double weight=0;
    
    cat obj1(name,weight);
    obj1.get();
    obj1.display();
    
    return 0;
}