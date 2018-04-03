//5920550198 Thanapat Piphattanamaitree
#include <iostream>
using namespace std;
int main()
{
float a,l,t,m,ArrivalH,LeaveH,ArrivalM,LeaveM;
int n,h;
cout<<"Arrival time : ";
cin>>a;
ArrivalM =(a-int(a))*100;
ArrivalH = (int)a;
cout<<"Leave time : ";
cin>>l;
LeaveM = (l-int(l))*100;
LeaveH = (int)l;
h=ArrivalH-LeaveH;
n=ArrivalM-LeaveM;
if(a>l)
{
cout<<"You can't leave before arrival time";
}
else
{
cout<<h<<" hours and "<<n<<" minutes ";
}
if(t<=3)
cout<<"You have to pay "<<m<<" bath";
else if (t<=6)
cout<<"You have to pay "<<m<<" bath";
else if (t<=8)
cout<<"You have to pay "<<m<<" bath";
else if (t>8)
cout<<"You have to pay "<<m<<" bath";

cout<<l-a;
cout<<a;
system ("pause");
return 0 ;
}
