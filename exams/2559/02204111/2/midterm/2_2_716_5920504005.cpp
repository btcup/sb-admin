#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    {
    if(N<10)
    cout<<"Number of digit is 1";
    else if(N<100)
    cout<<"Number of digit is 2";
    else if(N<1000)
    cout<<"Number of digit is 3";
    else if(N<10000)
    cout<<"Number of digit is 4";
    else cout<<"Number of digit is 5";
    }
    cout<<N<<" is not target number."
     
   
    
    
    
    
    
    
    
    
    system("pause");
    return 0;
    }
