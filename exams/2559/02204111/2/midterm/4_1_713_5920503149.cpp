//5920503149 Nateetip Mahayon
#include <iostream>
using namespace std;
int main()
{
char t,C,M;
float a,l,n,u;
int b;

cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
cin>>t;
cout<<"Arrival time : ";
cin>>a;
cout<<"Leave time : ";
cin>>l;

if(((t=C)||(t=M))&&(a>l)){
   cout<<"Yon don't leave before arrival time"<<endl;}
   
b=(int)l-(int)a;
n=l-a;
u=(n-b)*100;

if(t==M){
        if(b<3){
                cout<<b<<" hours and "<<(int)u<<" minutes"<<endl;
                cout<<"Yon have to pay 0 bath"<<endl;}
                
        if((b>=4)&&(b<=7)){
                           cout<<b<<" hours and "<<(int)u<<" minutes"<<endl;
                           cout<<"Yon have to pay "<<b*10<<" bath"<<endl;}   
                            
        if(b>7){
                cout<<b<<" hours and "<<(int)u<<" minutes"<<endl;
                cout<<"Yon have to pay 150 bath"<<endl;}                   
        } 
              
else if(t==C){
        if(b<2){
                cout<<b<<" hours and "<<(int)u<<" minutes"<<endl;
                cout<<"Yon have to pay 0 bath"<<endl;}
                
        if((b>=3)&&(b<=5)){
                           cout<<b<<" hours and "<<(int)u<<" minutes"<<endl;
                           cout<<"Yon have to pay "<<b*30<<" bath"<<endl;}   
                            
        if((b>=6)&&(b<=8)){
                           cout<<b<<" hours and "<<(int)u<<" minutes"<<endl;
                           cout<<"Yon have to pay "<<b*50<<" bath"<<endl;}
                           
        if(b>8){
                cout<<b<<" hours and "<<(int)u<<" minutes"<<endl;
                cout<<"Yon have to pay 500 bath"<<endl;}                   
        } 
        
cout<<endl;                  
system ("pause");
return 0;
}
