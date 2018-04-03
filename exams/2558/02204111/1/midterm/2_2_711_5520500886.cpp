#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z,n,m,p,i;
    char floor,wall;
cout<<"Welcome to the Fantastic Tiles!!"<<endl;
cout<<"Please enter room size in meter (H x W x D):";
cin>>x>>y>>z;
cout<<"Please select floor tile...(A/B/C):";
cin>>floor;
cout<<"Please select wall tile...(A/B/C):";
cin>>wall;
cout<<"Number of floor tiles :"<<n<<"-->Price ="<<m<<"Baht"<<endl;
if(floor=='a'||floor=='A')
m==m*55.0;
else if (floor=='b'||floor=='B')
m==m*80.0;
else if (floor=='c'||floor=='C')
m==m*90.0;
cout<<"Number of wall tiles :"<<i<<"-->Price ="<<p<<"Baht"<<endl;
if(wall=='a'||wall=='A')
p==p*17.0;
else if (wall=='b'||wall=='B')
p==p*32.0;
else if (wall=='c'||wall=='C')
p==p*50.0;
cout<<"Total price :"<<m+p<<"Baht"<<endl;
system ("pause");
return 0;
}
