#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    long long n,i;
     do
    {
        cout<<"Please input number :";
        cin>>n;
        if(i>0)
        {
               if(n%2==0)
               {
                         
               cout<<"Summation of Even number "<<endl;
              
               }
               else if(n%2==1)
               {
               cout<<"Summation of Odd number "<<endl;
              
               }
               
        }
               
        
      
        
        
        
        
        

       
        } 
    while(n>0);
      cout<<"!! Wrong Input !! " <<endl;  
        
       
          
    system("pause");
    return 0;
}
