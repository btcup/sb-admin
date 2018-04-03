#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     float h,w,d,sum;
     char floor,wall;
     int n,N,M;
     cout<<"Wellcome to the Fantastic Tiles!!\n";
     cout<<"Please enter room size in meter (H x W x D) : ";
     cin>>h>>w>>d;
     cout<<"Please select floor tile... (A/B/C) : ";
     cin>>floor;
         if(floor=='a'||floor=='A')
         N=n*55;
         if(floor=='b'||floor=='B')
         N=n*80;
         if(floor=='c'||floor=='C')
         N=n*90;
     cout<<"Please select wall tile... (A/B/C) : ";
     cin>>wall;
         if(wall=='a'|wall=='A')
         M=n*17;
         if(floor=='b'||floor=='B')
         M=n*32;
         if(floor=='c'||floor=='C')
         M=n*50;
     cout<<"Number of floor tile : "<<n<<"-->Price = "<<N<<" Bath";
     cout<<"Number of wall tile : "<<n<<"-->Price = "<<M<<" Bath";
     sum=N+M;
     cout<<"Total price : "<<N<<" + "<<M<<" = "<<sum<<" Bath";
     
     
     
     system("pause");
     return 0;
}
     

