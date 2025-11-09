// String Array vs ChracterArray (Reverse)
#include<iostream>
using namespace std;

int main()
{ 
    char arr1[ ]={"HelloWorld"},arr2[ ]={'H','e','l','l','o','\0'};
    int i,size1=sizeof(arr1),size2=sizeof(arr2);
  
    cout<<"arr1 size is: "<<size1<<"\t";
    cout<<"arr2 size is: "<<size2<<endl;
    
  // Array 1_____________________________  
    cout<<"\nCharacter Array arr1 with loop is:  ";
    for(i=0;i<size1;i++)
    {cout<<arr1[i];}
    
    cout<<"\nCharacter Array arr1 without loop is:  ";
    cout<<arr1;
    
    cout<<"\nCharacter Array arr1 with loop in reverse is:  ";
    for(i=(size1-1);i>=0;--i)
    cout<<arr1[i];
    
    
  // Array 2_____________________________
    cout<<"\n\nCharacter Array arr2 with loop is:  ";
    for(i=0;i<size2;++i)
    cout<<arr2[i];
    
    cout<<"\nCharcter Array arr2 without loop is:  ";
    cout<<arr2;
    
    cout<<"\nThe Character Array arr2 with loop in reverse is:  ";
    for(i=(size2-1);i>=0;--i)
    cout<<arr2[i];
    
    cout<<endl;
    return 0;
}