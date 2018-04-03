#include<iostream>
using namespace std;
int main ()
{
    float i,u,v,x,y,m,n,sum=0;
    cout<<"Please input usage:";
    cin>>u;
    cout<<"Please input voltage:";
    cin>>v;
    m=(sum*x)+y+(46.38*sum);
    
        if(v<0&&u<0)
           {
                cout<<"Invalid input";
           }
        else if(v<22)
           {
                     
                     y=40.90;
                     if(u<=150)
                     {
                               x=1.8047;
                               for(i=0;i<=150;i++)
                               {
                                sum=sum+i; 
                                }
                               m=m+(0.07*m);
                               n=n+m;
                               cout<<"Electricity Cost 0-150: "<<m<<endl;
                               
                     }
                     if(u<400)
                     {
                         sum=0;
                         x=2.7781;
                            for(i=0;i<250;i++)
                           {
                            sum=sum+i; 
                            }
                            m=m+(0.07*m);
                            cout<<"Electricity Cost 151-400: "<<m<<endl;
                            n=n+m;
                            
                     }
                     if(u>400)
                     {
                              sum=0;
                              x=2.7781;
                              for(i=0;i<400;i++)
                            {
                                sum=sum+i;
                            }
                            m=m+(0.07*m);
                       cout<<"Electricity Cost 401 ->: "<<m<<endl;
                     }
                     cout<<"FT\n";
                     cout<<"vat 7%: "<<n<<endl;
           }
        else if(u>=22&&u<=33)
          {
                             y=228.17;
                             x=2.4649;
                             cout<<"Electricity Cost"<<m<<endl;
                             }
        cout<<"service : "<<y<<endl;
        cout<<"Vat 7% : "<<m
       
        
         
         
         system ("pause");
         return 0;
         }
           
                                
                                
                       
                                
                       
            
                       
                       
                            
                       
