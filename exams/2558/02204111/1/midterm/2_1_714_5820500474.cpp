#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    char name,size,yn;
    int x ,z=0,a=0,b=0;
    cout<<"Wecome to A Cup-with-love Coffee!"<<endl;
    cout<<"Enter your menu (E/A/l/C/M):";
    cin>>name;
    cout<<"Enter size (S/T/G/V):";
    cin>>size;
    cout<<"How many cups? :";
    cin>>x;
    cout<<"Do you want other menu? (Y/N) :";
    cin>>yn;
    if(yn=='Y'||yn=='y')
    { 
    cout<<"Enter your menu (E/A/l/C/M):";
    cin>>name;
    cout<<"Enter size (S/T/G/V):";
    cin>>size;
    cout<<"How many cups? :";
    cin>>x;
    cout<<"Do you want other menu? (Y/N) :";
    cin>>yn;
    }
    else if (yn=='N'||yn=='n')
    { cout<<"Are you a member? (Y/N):";
    cin>>yn;
      if(yn=='Y'||yn=='y')
      {cout<<"total "<<z<<" Baht"<<endl;
      cout<<"Discount "<<a<<" Bath"<<endl;
      cout<<"Thank you."<<endl; }
      else if(yn=='N'||yn=='n')
      {cout<<"total "<<z<<" Baht"<<endl;
      cout<<"Discount "<<a<<" Bath"<<endl;
      cout<<"you pay"<<b<<" Bath"<<endl;
      cout<<"Thank you."<<endl;     }      
    }   
    system ("pause");
    return 0;
}
