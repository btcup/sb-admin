#include<iostream>
using namespace std;
int main()
{   
    int x,y;
    int i=0;
    int c=0;
    while(x>0)
   { cout<<"Enter employee ID and Salary :";
    cin>>x;cin>>y;
    i++;
    if(y>=15000&&y<=25000)
    c++;
    }
    cout<<"Enter of employers in the company = :"<<i-1<<endl;
    cout<<"Number of between 15,000 - 25,000 bath = "<<c<<endl; 
    
    
    
    
    
    
    system("pause");
    return 0;
} 
