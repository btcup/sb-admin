//5620551733 Netpakron Sonuch
#include<iostream>
using namespace std;
int main()
{
    double in,out,a,b;
    cout<<"Arrival time :";
    cin>>in;
    cout<<"Leave time :";
    cin>>out;
   if(in>out)
   cout<<"You can't leave before arrival time"<<endl;
   else
   {
       a=int(out-in);
       b=((out-in)-a)*100;
       cout<<a<<"hours and"<<b<<"minutes"<<endl;
      
       
       
       
       
       
       
       
       
      
       
}
    

system("pause");
return 0;
}
