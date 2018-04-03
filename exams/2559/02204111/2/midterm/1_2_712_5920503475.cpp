//5920503475 Panida kranpart
#include<iostream>
using namespace std;
int main()
{
    int N=0,i=0;
    while(N<=0)
    {
           cout<<"Enter N:";
           cin>>N;
    }
    while(i<=N)
    {
               N%i!=0;
               i++;
    }
    cout<<"The greatest factor of "<<N<<"is"<<i<<endl;
               
                
           
    
    
    
    
    
    
    
    
    
 system("pause");
 return 0;   
}
