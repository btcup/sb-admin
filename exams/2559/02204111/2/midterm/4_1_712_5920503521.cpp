//5920503521 puwitch charoensapsri
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float at,lt,s;
    int A,a,At,L,l,Lt,T,h,m,pay,f,x;
    char t;

    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) :";
    cin>>t;
    cout<<"Arrival time :";
    cin>>at;
    cout<<"Leave time:";
    cin>>lt;
    A=int(float(at)*100)%100;
    a=int(at);
    At=(a*60)+A;
    L=int(float(lt)*100)%100;
    l=int(lt);
    Lt=(l*60)+L;
    T=Lt-At;
    h=T/60;
    m=T-(h*60);
  
    if(T!=0)
    {
            if(t=='C')
            {
                      if(T<120&&T>=1)
                      {
                                     pay=0;
                                     cout<<h<<" hours and "<<m<<" minutes";
                                     cout<<"You have to pay "<<pay<<" baht";
                       }
                      if(T<300&&T>=120)
                      {
                                        s=(T-120)/60;
                                        f=int(s*100)%100;
                                          if(f!=0)
                                           {
                                                   pay=(int(s+1)*30) ;
                                                   cout<<h<<" hours and "<<m<<" minutes";
                                                   cout<<"You have to pay "<<pay<<" baht";                
                                           }
                                          else
                                           {
                                                   pay=(int(s)*30);
                                                   cout<<h<<" hours and "<<m<<" minutes";
                                                   cout<<"You have to pay "<<pay<<" baht";
                                           }
                       }
                      if(T>=300&&T<480)
                      {
                                       s=(T-180)/60;
                                       f=int(s*100)%100;
                                       if(f!=0)
                                        {
                                                pay=90+(int(s+1)*50) ;
                                                cout<<h<<" hours and "<<m<<" minutes";
                                                cout<<"You have to pay "<<pay<<" baht";                
                                        }
                                       else
                                        {
                                                 pay=90+(int(s)*50);
                                                 cout<<h<<" hours and "<<m<<" minutes";
                                                 cout<<"You have to pay "<<pay<<" baht";
                                        }
                      } 
                      if(T>=480)
                      {
                       pay=500;
                       cout<<h<<" hours and "<<m<<" minutes";
                       cout<<"You have to pay "<<pay<<" baht"; 
                      } 
                      else
                       cout<<"You can't leave before arrival time";
            }
            if (t=='M')
            {
               if(T<180&&T>=1)
               {
                     pay=0;
                     cout<<h<<" hours and "<<m<<" minutes";
                     cout<<"You have to pay "<<pay<<" baht";
               }    
               if(T>=180&&T<420)
               {
                     s=(T-180)/60;
                     f=int(s*100)%100;
                     if(f!=0)
                     {
                       pay=(int(s+1)*10) ;
                       cout<<h<<" hours and "<<m<<" minutes";
                       cout<<"You have to pay "<<pay<<" baht";                
                      }
                      else
                      {
                       pay=(int(s)*10);
                       cout<<h<<" hours and "<<m<<" minutes";
                       cout<<"You have to pay "<<pay<<" baht";
                      }       
                               
               }
               if(T>=420) 
               {
                       pay=150;
                       cout<<h<<" hours and "<<m<<" minutes";
                       cout<<"You have to pay "<<pay<<" baht";  
               }
               else
                       cout<<"You can't leave before arrival time";   
            }          
    }


 system("pause");
    return 0;   
}
