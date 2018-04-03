#include <iostream>
#include <cmath>
using namespace std;
int main ()   
{
int a,b,e;
cout<<"please input usage :";
cin>>a;
cout<<"please input voltage :";
cin>>b;
cout<<"Electricity Cost :";
cout<<"Service :";
cout<<"Ft";
cout<<"Vat 7% :";
cout<<"Total cost :";
{
       if(a>=0 &&a<=149)
       cout<<"Electricity Cost :";
       cin>>e;
       if(a==150)
       cout<<"Electricity Cost 0-150 :";
       cin>>e;
       if(a>=151 && a<=400)
       cout<<"Electricity Cost 151-400 :";
       cin>>e;
       if(a>=401)
       cout<<"Electricity Cost 401 -> :";
       cin>>e;
system("pause");
return 0;
}
}
