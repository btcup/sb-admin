#include<iostream>
using namespace std;
int main()
{      int  x,y,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
       cout<<"Give the number of passengers of day1 : ";cin>>x>>y>>z>>a;
       cout<<"Give the number of passengers of day2 : ";cin>>b>>c>>d>>e;
       cout<<"Give the number of passengers of day3 : ";cin>>f>>g>>h>>i;
       cout<<"Give the number of passengers of day4 : ";cin>>j>>k>>l>>m;
       cout<<"Give the number of passengers of day5 : ";cin>>n>>o>>p>>q;
     
  
      int total = (x+b+f+j+n);
      cout<<"Total passemger for route 101 is : "<<total<<endl;
      
      double avg = (x+y+z+a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q)/20.00;
      cout<<"The average number of passengers for all days and all routes is : "<<avg<<endl;
       
       if(b>c&&b>d&&b>e)
        cout<<"The largest number of passengers of Thu is : "<<b<<endl;
       else if(c>b&&c>d&&c>e)
        cout<<"The largest number of passengers of Thu is : "<<c<<endl;
       else if(d>b&&d>c&&d>e)
        cout<<"The largest number of passengers of Thu is : "<<d<<endl;
       else if(e>b&&e>c&&e>d)
        cout<<"The largest number of passengers of Thu is : "<<e<<endl;
      
      system("pause");
      return 0;
}
