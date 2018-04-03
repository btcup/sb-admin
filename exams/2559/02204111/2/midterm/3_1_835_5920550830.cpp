#include<iostream>//5920550830 
using namespace std;
int main()
{
    
    float At,Le,time,minutes0,minutes;
    cout<<"Arrival time:";
    cin>>At;
    cout<<"Leave time:";
    cin>>Le;
    
    if(At>Le)
    {
             time=
    minutes0=float(Le)-float(At);
    time=int(Le)-int(At);
    minutes= (minutes0-time)*100;
    cout<<time<<" hours and "<<minutes<<"minutes"<<endl;
    if(minutes>15)
    {
    cout<<time<<" hours and "<<minutes<<"minutes"<<endl;
}
    if(minutes<15)
    {
                  At=At+1;
                  }
    if(time>3)
    {
              cout<<"you have to pay 0 bath";
              }
              
    

system("pause");
return 0;
}
