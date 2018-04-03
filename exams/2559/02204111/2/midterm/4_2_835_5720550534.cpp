//5720550534 Phattadon khathawutcharakun
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,a,b,sum;
    cout<<"Enter a positive integer: ";
    cin>>x;
    if(x>0)
    {
              if(x<10)
              {
                      cout<<"number of digit is 1"<<endl;

                      cout<<"Factor of "<<x<<"are :"<<endl;
                      do{
                      a=1;
                      b=1;
                      sum=a*b;
                      b++;
                                    }
                      while(sum==x);
                      cout<<a<<" * "<<b<<" = "<<x ;                     
                                            
                                        
                      
                      }
                      
              else if(x>=10&&x<100)
              {
                      cout<<"number of digit is 2"<<endl;
                      cout<<"Factor of "<<x<<"are :"<<endl;
                      
                      }
              else if(x>=100&&x<1000)
              {
                      cout<<"number of digit is 3"<<endl;
                      cout<<"Factor of "<<x<<"are :"<<endl;
                      
                      }
              else if(x>=1000&&x<1000)
              {
                      cout<<"number of digit is 4"<<endl;
                      cout<<"Factor of "<<x<<"are :"<<endl;
                      
                      }
                      
                      }
                      
                      
                      
                      
                      
    system("pause");
return 0;
}
