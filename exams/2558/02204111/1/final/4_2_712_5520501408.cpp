#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
int e,f,g,h;
int i,j,k,l;
int m,n,o,p;
int q,r,s,t;
int sum=0;
double avg=0;
cout<<"Give the number of passsengers of day 1:"; 
cin>>a>>b>>c>>d;
cout<<"Give the number of passsengers of day 2:";
cin>>e>>f>>g>>h;
cout<<"Give the number of passsengers of day 3:";
cin>>i>>j>>k>>l;
cout<<"Give the number of passsengers of day 4:";
cin>>m>>n>>o>>p;
cout<<"Give the number of passsengers of day 5:";
cin>>q>>r>>s>>t;
sum=sum+a+e+i+m+q;
cout<<"Total passenger for air asia is:"<<sum<<endl;
avg=(avg+a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t)/20;
cout<<"The average number of passenger for all days amd all flights is :"<<avg<<endl;
cout<<"the largest number of passengers is:"<<o<<endl;




system("pause");
return 0;
}
