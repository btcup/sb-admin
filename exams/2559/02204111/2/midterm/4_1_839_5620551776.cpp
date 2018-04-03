//5620551776 woravit koonduae
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double tin,tout,s;
int z;
char a;
float x,n;
cout<<"Type df vehicle";
cin>>a;
cout<<"Arrival time : ";
cin>>tin;
cout<<"Leave time : " ;
cin>>tout;
x =((tout*60)-(tin*60))/60;


//y=x/60;
//z=(y*60)%60;
do
{
if(a == 'C' && x <= 2)
{
cout<<x<<"hours";  //<<z<<"minutes
cout<<"you have to pay 0 bath"<<endl;
break;//<<"hours";break;
}if (a=='C'&&x<=5)
cout<<x<<"hours";
s=x*30;
cout<<"you have to pay "<<s<<"bath"<<endl;
break;
if(a=='C'&&x<=8)
cout<<x<<"hours";
s=x*50;
cout<<"you have to pay "<<s<<"bath"<<endl;
break;
if(a=='C'&&x>8)
cout<<x<<"hours";
s=x*500;
cout<<"you have to pay "<<s<<"bath"<<endl;
break;
if(a == 'M' && x <= 3)
cout<<x<<"hours";  //<<z<<"minutes
cout<<"you have to pay 0 bath"<<endl;//<<"hours";break;
break;
if (a=='C'&&x<=7)
cout<<x<<"hours";
s=x*10;
cout<<"you have to pay "<<s<<"bath"<<endl;
break;
if(a=='C'&&x>=8)
cout<<x<<"hours";
s=x*150;
cout<<"you have to pay "<<s<<"bath"<<endl;
break;
}while(x>0);



    
    
system("pause");
return 0;
}

