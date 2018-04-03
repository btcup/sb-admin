#include <iostream>
using namespace std;

int main ()
{
    char mem;
    int old,pri,sa,total;
    cout<<" Are you member (Y or N) :";
    cin>>mem;
    cout<<" How old are you? :" ;
    cin>>old;
    cout<< "Normal price :";
    cin>>pri;
    if(mem=='Y')
    {
              if (old<2)
              {
              sa=pri*1;
              total=pri-sa;
              cout<<"You have to pay"<<""<<total<<endl;
              }
              else if (old<=12)
              {
              cout<<"You have to pay"<<""<<total<<endl;
              sa = pri * 0.7;
              total=pri-sa;
              }
              else if (old>=12)
              {
              cout<<"You have to pay"<<total<<endl;
              sa=pri *0.5;
              total=pri-sa;
              }
              
              
    }
     if(mem=='N')
        {
              if (old<2)
              {
              sa=pri*1;
              total=pri-sa;
              cout<<"You have to pay"<<""<<total<<endl;
              }
              else if (old<=12)
              {
              cout<<"You have to pay"<<""<<total<<endl;
              sa = pri * 0.5;
              total=pri-sa;
              }
              else if (old>=12)
              {
              cout<<"You have to pay"<<total<<endl;
              sa=pri *0;
              total=pri-sa;
              }
        }
                  
                         

              
              
    
    
    
    
    
    system ("paus");
    return 0;
}
