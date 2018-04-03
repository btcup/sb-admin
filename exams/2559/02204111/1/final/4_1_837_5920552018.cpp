//5920552018 Natthabhorn Sriubon

#include<iostream>
using namespace std;
int main()
{
    int i;
    string pwd;
    for(i=0;i<=3;i++)
    {
       cout<<"Enter PIN : ";
       cin>>pwd;
       if(pwd=="KFRT")
       {
          cout<<"PIN unlocked..."<<endl;
          break;
       }
       else
       {
           cout<<"Invalid PIN!"<<endl;
       }
       if(i==3)
       {
          cout<<"Too many attemps."<<endl;
       }
    }
}
