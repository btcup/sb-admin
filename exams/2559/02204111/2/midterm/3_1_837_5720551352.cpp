//5720551352 Natchaya Pormahathammakij
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y;
    int hours,minutes;
    double sum=0,bath=0;
    cout<<"Arrival time :"<<endl;
    cin>>x;
    if(x>0||x<y) 
    {
           cout<<"Leave time"<<endl;
           cin>>y;
           if(y-x<=3)
           bath=0;
           if(y-x>=4||y-x<=6)
           bath=20;
           if(y-x>=7||y-x<=8)
           bath=50;
           else sum=500;
           cout<<int(y-x)<<"hours and"<<(y-x)-(int(y-x))<<" minutes"<<endl;
     
           sum=(y-x)*bath;
           cout<<"You have to pay "<<sum<<" bath"<<endl;
    }
    else {
    cout<<"You can't leave before arrival time"<<endl;
}   
    system("pause");
    return 0;
}        
