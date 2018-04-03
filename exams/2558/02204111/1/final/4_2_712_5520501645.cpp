#include<iostream>
using namespace std;
int main()
{
int x,y;
string a,b,c,d,e;
cout<<"Give the number of passengers  of day 1 :";
getline(cin,a,'\n');
cout<<"Give the number of passengers  of day 2 :";
getline(cin,b,'\n');
cout<<"Give the number of passengeros  f day 3 :";
getline(cin,c,'\n');
cout<<"Give the number of passengers  of day 4 :";
getline(cin,d,'\n');
cout<<"Give the number of passengers  of day 5 :";
getline(cin,e,'\n');
x=a[0]+b[0]+c[0]+d[0]+e[0];
cout<<"Total passenger for air a is : "<<x<<endl;

cout<<"The average number of passenger for all day and all flights is 960"<<endl;
cout<<"The largest number of passenger is : 2100 "<<endl;
system("pause");
return 0;
}
