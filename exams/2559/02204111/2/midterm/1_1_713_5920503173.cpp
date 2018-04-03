#include <iostream>
using namespace std;
int main ()
{
    char a;
    int b,h,l,c;
    float k;
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car modle:";
    cin>>a;
    if(a=='A'||a=='B'||a=='C'||a=='D')
    {
                      
          if(a=='A')
          {
            cout<<"Enter number if years (1-6):";
            cin>>b;
               if(b>=1&&b<=6)
               {
                  if(b<4)
                  { 
                  
                    
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:"<<1385000-(1385000*(c/100)<<endl;
                    cout<<"Amont of interest:"<<endl;
                    cout<<"monthiy payment:" <<endl;
                  }
                  else if(b>=4)
                  { 
                  
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:" << 1385000-(1385000*(c/100)) <<endl;
                    cout<<"Amont of interest:" <<endl;
                    cout<<"monthiy payment:" <<endl;        
                  }
               }
               else
               cout<<"Error!,number of years is not in range"<<endl;
          } 
              else if(a=='B')
          {
            cout<<"Enter number if years (1-6):";
            cin>>b;
               if(b>=1&&b<=6)
               {
                  if(b<4)
                  { 
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:" <<endl;
                    cout<<"Amont of interest:" <<endl;
                    cout<<"monthiy payment:" <<endl;
                  }
                   else if(b>=4)
                  { 
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:"  <<endl;
                    cout<<"Amont of interest:" <<endl;
                    cout<<"monthiy payment:" <<endl;
                  }              
               }
               else
               cout<<"Error!,number of years is not in range"<<endl;
            }
             else if(a=='C')
            {
               cout<<"Enter number if years (1-6):";
               cin>>b;
               if(b>=1&&b<=6)
               {
                  if(b<4)
                  { 
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:" <<endl;
                    cout<<"Amont of interest:" <<endl;
                    cout<<"monthiy payment:" <<endl;
                  }
                   else if(b>=4)
                  { 
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:"  <<endl;
                    cout<<"Amont of interest:"<<endl;
                    cout<<"monthiy payment:" <<endl;
                  }              
               }
               else
               cout<<"Error!,number of years is not in range"<<endl;
             }
             else if(a=='D')
             {
               cout<<"Enter number if years (1-6):";
               cin>>b;
               if(b>=1&&b<=6)
               {
                  if(b<4)
                  { 
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:" <<endl;
                    cout<<"Amont of interest:" <<endl;
                    cout<<"monthiy payment:" <<endl;
                  }
                   else if(b>=4)
                  { 
                    cout<<"Enter permetage of down payment:";
                    cin>>c;
                    cout<<"---------------------------------"<<endl;
                    cout<<"Financing amout:"<<endl;
                    cout<<"Amont of interest:"<<endl;
                    cout<<"monthiy payment:" <<endl;
                    }              
               }
               else
               cout<<"Error!,number of years is not in range"<<endl;
              } 
                                                                                                                                                                        
                                 
    }
    else
    {
    cout<<"Enter permetage of down payment:";
    cin>>b;
    cout<<"Error!,number of years is not in range"<<endl;
    }
    system ("pause");
    return 0;
}
