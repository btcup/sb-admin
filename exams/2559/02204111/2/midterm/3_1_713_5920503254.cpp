//5920503254 Sornchanok Pranudomrat
#include<iostream>
using namespace std;
int main()
{
    double a,b,d,e;
    int c;
    cout<<"Arrival time: ";
    cin>>a;
    cout<<"Leave time: ";
    cin>>b;
    c=(b-a);
    if(c>0)
    {
    if(c<=3){   
                 d=c*60;
             cout<<c<<"hour and"<<d<<"minutes"<<endl;
             cout<<"You have to pay 0 bath"<<endl;
             }
    else if(c<=6){
                 d=c*60;
             cout<<c<<"hour and"<<d<<"minutes"<<endl;
             cout<<"You have to pay"<<(c*20)/2<<"bath"<<endl;
             }
   else if(c<=8){
                 d=c*60;
             cout<<c<<"hour and"<<d<<"minutes"<<endl;
             cout<<"You have to pay"<<(c*50)<<"bath"<<endl;
             }         
   else if(c>8){
                 d=c*60;
             cout<<c<<"hour and"<<d<<"minutes"<<endl;
             cout<<"You have to pay"<<(c*500)/9<<"bath"<<endl;
             } 
   }       
   else
      cout<<"You can't leave before arrival time"<<endl; 
    system ("pause");
    return 0;
}
