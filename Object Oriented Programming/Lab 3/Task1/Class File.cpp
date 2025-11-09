#include<iostream>
#include"Header.h"
using namespace std;

// Class File
cat::cat(char n[50], double w)
{
    name[50]=n[50];
    weight w;
}

void cat::set()
{
    cout<<"Enter Name : "<<endl;
    cin.getline(name,50);
    cout<<"Enter weight : "<<endl;
    cin>>weight;
}

void cat::get()
{
    cout<<"Name :"<<name<<endl;
    cout<<"Weight : "<<weight<<endl;
}

void cat::display()
{
    get();
}

cat::cat()
{
    cout<<"Program is in Destructor"<<endl;
}