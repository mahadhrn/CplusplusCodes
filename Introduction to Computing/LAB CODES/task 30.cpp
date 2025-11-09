// Test Scores of 10 Students, Find Avg, Output Scores (less than Avg)

#include<iostream>
using namespace std;
int main()
{
    float a[10],sum = 0,percentage;
    
    cout<<"Enter Marks of 10 Students: ";
    
    for(int i=0; i<10; i++){
        cin>>a[i];
        sum = sum + a[i];
    }
    percentage = sum / 10;
    cout<<"\nClass Average Percentage: "<<percentage<<"%"<<endl;
    
    
    // less than average.
    cout<<"Marks Less than Average: [";
    for(int i=0; i<10; i++){
        if(a[i]<= percentage)
            cout<<a[i]<<", ";
    }
    cout<<"]";
    
    return 0;
}