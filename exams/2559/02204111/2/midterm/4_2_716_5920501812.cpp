//5920501812 Udomsak Jaihan
#include <iostream>

using namespace std;
int main()
{
    
    int n,sum,b=1;
    
    cout<<"Enter a positive integer : ";
    cin>>n;
    
    while (n<=0)
    {
      if (n<=0)
      {
       cout<<"Invalid number!!"<<endl;
       break;
       }
    }
    while(n>0)
    {
              if(n/b<10)
              {
                        if(n/b<10)
                        {
                        
                             cout<<"Number of digit is 1"<<endl;              
                             break;
                        }
                        else 
                              b++;
              }
              else if (n/b<100&&n/b>=10)
              {
                   if(n/b<100&&n/b>=10)
                        {
                        
                             cout<<"Number of digit is 2"<<endl;              
                             break;
                        }
                        else 
                              b++;
                              }
             else if (n/b<1000&&n/b>=100)
              {
                   if(n/b<1000&&n/b>=100)
                        {
                        
                             cout<<"Number of digit is 3"<<endl;              
                             break;
                        }
                        else 
                              b++;
                              }
             else if (n/b<10000&&n/b>=1000)
              {
                   if(n/b<10000&&n/b>=1000)
                        {
                        
                             cout<<"Number of digit is 4"<<endl;              
                             break;
                        }
                        else 
                              b++;
                              }
 }
    system("pause");
    return 0;
}
