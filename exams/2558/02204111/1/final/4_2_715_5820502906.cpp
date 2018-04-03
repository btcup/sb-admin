#include<iostream>
using namespace std;
int main()
{
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t;
    cout<<"Give the number of passengers of day 1 :";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passengers of day 2 :";
    cin>>e>>f>>g>>h;
    cout<<"Give the number of passengers of day 3 :";
    cin>>i>>j>>k>>l;
    cout<<"Give the number of passengers of day 4 :";
    cin>>m>>n>>o>>p;
    cout<<"Give the number of passengers of day 5 :";
    cin>>q>>r>>s>>t;
    int total;
    double average;
    total= a+e+i+m+q;
    cout<<"Total passenger for air asia is : "<<total<<endl;
    average = (a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t)/20;
    cout<<"The average number of passengers for all day and all flights is : "<<average<<endl;
    cout<<"The largest number of passengers is : ";
    
    
    
system("pause");
return 0;
}
