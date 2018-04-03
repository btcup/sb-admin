//5920503203 Phanupnog chayachet
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int z,x;
    
    cout<<"Enter electricity cost per unit (bath):";
    cin>>a;
    while(a>0)
     {
              cout<<"Enter last unit :";
              cin>>z;
              }
              if(z>=0)
              {  cout<<"Enter last unit:";
                      cin>>x;
                      }
                      if(x>0)
                      {
                          cout<<"Units used = "<<x-z<<endl;
                          cout<<" ="(x-z)*a<<endl;
                          }
                          
                          else
                          cout<<"Invalid currunt unit!"<<endl;
                     
               else
              cout<<"End of Calculation"<<endl;
              }  
                             
                          
                  
              
   
              }
system ("pause");
return 0;
}
    
