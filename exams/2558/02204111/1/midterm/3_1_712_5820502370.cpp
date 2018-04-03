#include<iostream>
using namespace std;
int main ()
{
    int x,y,a,b;
    char mem;
    
    cout<<"Are you member ( Y or N):" ;
    cin>>mem;
    cout<<"How old are you? :";
    cin>>x;
    cout<<"Normal price :";
    cin>>y;

    
    if (mem=='Y')
    {
              if (x<2)
              {
              a=y*0;
              cout<<"You have to play :"<<y-a<<endl;
              }
              
              else if (x<=12)
              {
              a=y*70/100;
              cout<<"You have to play :"<<y-a<<endl;
              }
              else if (x>12)
              {
              a=y*50/100;
              cout<<"You have to play :"<<y-a<<endl;
              } 
    }
     
    if(mem=='N') 
    {
                 
              if (x<2)
              {
              b=y*100/100;
              cout<<"You have to play :"<<y-b<<endl;
              }
              
              else if (x<10)
              {
              b=y*50/100;
              cout<<"You have to play :"<<y-b<<endl;
              }
              else if (x>10)
              {
              b=y*0/100;
              cout<<"You have to play :"<<y-b<<endl;
              }
    }
              
    

    system("pause");
    return 0;
}
    
    
