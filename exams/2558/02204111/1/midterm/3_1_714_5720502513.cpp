#include<iostream>
using namespace std;
int main()
{
    char A;
    int x,y;
    cout<<"Are you member(Y or N):"<<" ";
    cin>>A;
    cout<<"How old are you?:"<<" ";
    cin>>x;
    cout<<"Normal price:"<<" ";
    cin>>y;
    if(A=='Y')
    {
          if(x<2)
          cout<<"You have to pay 0"<<endl;
          else if(x>=2&&x<12)
          cout<<"You have to pay"<<" "<<y*3/10<<endl;
          else
          cout<<"You have to pay"<<" "<<y/2<<endl;  
    }
    else
    {
          if(x<2)
          cout<<"You have to pay 0"<<endl;
          else if(x>=2&&x<=10)
          cout<<"You have to pay"<<" "<<y/2<<endl;
          else
          cout<<"You have to pay"<<" "<<y<<endl;  
    }    
    
    
 system("pause");
 return 0;   
}    
