//5920503211 Raweepohn Narudeesri-utai
#include<iostream>
using namespace std;
int main()
{
    int x,i=0;
    cout<<"Enter a positive interger:";
    cin>>x;
    if (x<=0)
    cout<<"Invalid number!!"<<endl;
    else if (x>0)
    {
    cout<<"Number of digit is"<<endl;
    cout<<"Factor of "<<x<<" are:"<<endl;
    for(i=1;i<=x;i++)
    if (x%i==0)
    {    
    cout<<i<<"*"<<"="<<x<<endl;
    }
     
}
   system("pause");
   return 0;
}
    
