#include<iostream>
#include<cmath>
using namespace std ;
int main (){
int b,f,h,g,c,d,e,i,Pay1,Pay2,Pay3,Pay4,Pay5;
char a;
cout<<"Are you member (Y or N) :";
cin>>a;
if(a='Y'){
cout<<"How old are you? :";
cin>>b;

if(b<2){
cout<<"Normal price :"; 
cin>>c;
Pay1=(c-((100/100)*c));
cout<<"You have to pay "<<Pay1<<endl; 
}
else if(b>=2||b<=12){
cout<<"Normal price :"; 
cin>>d;
Pay2=(d-((70/100)*d));
cout<<"You have to pay "<<Pay2<<endl;      
}
else if(b>12){
cout<<"Normal price :"; 
cin>>e;
Pay3=((50/100)*e);
cout<<"You have to pay "<<Pay3<<endl;      
}
}
else if(a='N'){
cout<<"How old are you? :";
cin>>f;
if(b<2){
cout<<"Normal price :"; 
cin>>g;
Pay4=(g-((100/100)*g));
cout<<"You have to pay "<<Pay4<<endl; 
}
else if(b>=2||b<=10){
cout<<"Normal price :"; 
cin>>h;
Pay5=(h-((50/100)*h));
cout<<"You have to pay "<<Pay5<<endl;      
}
else if(b>10){
cout<<"Normal price :"; 
cin>>i;
cout<<"You have to pay "<<i<<endl;      
}
}
system("pause");
return 0;
}







