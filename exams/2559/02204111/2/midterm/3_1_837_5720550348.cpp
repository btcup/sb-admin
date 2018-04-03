//5720550348 Anuwat Seedawomg
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x,y;
    int a,b,c,d; 
     
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    a=x*100;
    b=y*100;
    c=a%100;
    d=b%100;
    
    if(c>d){
    cout<<(int(y)-int(x))-1<<" hours and "<<60-(c+d)<<" minutes"<<endl;
}
    if(d>c){
    cout<<(int(y)-int(x))<<" hours and "<<60-(c+d)<<" minutes"<<endl;
}
    if(y>x){
         if(y-x<3.15)
         cout<<"You have yo pay 0 bath";
         if((y-x>=3.15)&&(y-x<=7.15))
         cout<<"You have yo pay "<<((int(y-x))-3)*20<<" bath";
         if((y-x>7.15)&&(y-x<=8.15))
         cout<<"You have yo pay "<<((int(y-x))-3)*50<<" bath";         
         if(y-x>=8.15)
          cout<<"You have yo pay 500 bath";
         }  
          
    
else{
cout<<"You can't leave before arrival time"<<endl;
}   
    
    
    
    system("pause");
    return 0;
    
    }
