//5920503971 Julie Kanokros
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
 double a,l,min,min1,min2,m;
 int hr;
 char type;
 
 cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
 cin>>type;
 cout<<"Arrival time: ";
 cin>>a;
 cout<<"Leave time: ";
 cin>>l;

min1=(int(a)*60)+((a-int(a))*100);
min2=(int(l)*60)+((l-int(l))*100);
hr=(min2-min1)/60;

min=(min2-min1)/60;
m=(min2-min1)-(hr*60);

cout<<hr<<" hours "<<m<<" minutes"<<endl;
 
 
 
 if(type=='C')
 {
 if(hr>0&&hr<=2&&m==0)
 {
 
 cout<<"You have to pay: "<<0<<"bath"<<endl;
 
}

if(hr>=3&&hr<=5)
 {
 
 cout<<"You have to pay: "<<(hr*30)<<"bath"<<endl;
 
}
if(hr>=6&&hr<=8)
 {
 
 cout<<"You have to pay: "<<(hr*50)<<"bath"<<endl;
 
}

if(hr>8)
 {
 
 cout<<"You have to pay: "<<500<<"bath"<<endl;
 
}

}



 if(type=='M')
 {
 if(hr>0&&hr<=3)
 {
 
 cout<<"You have to pay: "<<0<<"bath"<<endl;
 
}

if(hr>=4&&hr<=7)
 {
 
 cout<<"You have to pay: "<<(hr*10)<<"bath"<<endl;
 
}
if(hr>7)
 {
 
 cout<<"You have to pay: "<<150<<"bath"<<endl;
 
}
}


 
 system ("pause");
 return 0;   
}
