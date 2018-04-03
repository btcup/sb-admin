//5920550198 Thanapat Piphattanamaitree
#include <iostream>
using namespace std;
int main()
{
float e,b;
int u,c;
do
{
cout<<"Enter electricity cost per unit (baths) : ";
cin>>e;
}
while(e<=0);
do
{
cout<<endl<<"Enter last unit: ";
cin>>u;
if(u==-1)
{
cout<<"-- End of Calculation --"<<endl;break;
}
if (u<0||u>=100000)
{
cout<<"Invalid last unit!"<<endl;continue;
}

cout<<"Enter current unit: ";
cin>>c;
if(c==-1)
{
cout<<"-- End of Calculation --"<<endl;break;
}
if (c>=100000&&u>=100000)
{
cout<<"Invalid last unit!"<<endl;continue;
}
b=c-u;
if (b>0)
{
cout<<"Unit used = "<<b<<endl;
cout<<"Electricity charge (baths) = "<< b*e <<endl;
}

else
cout<<"Invalid current unit!"<<endl;
}
while (u!=-1);
system ("pause");
return 0 ;
}
