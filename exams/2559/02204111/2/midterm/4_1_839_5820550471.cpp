//5820550471 Sele Surattasaranee
#include <iostream>
using namespace std;
int main()

{char x ;
double a,b,c,d ;
cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
cin>>x;
cout<<"Arrival time : ";
cin>>a;
cout<<"Leave time : ";
cin>>b;
cout<<endl;
cout<<endl;
cout<<int(b-a)<<"hours and "<<((int(b)*60)+((b-int(b))*100))-((int(a)*60)+((a-int(a))*100))-(int(b-a)*60)<<" minutes"<<endl;


        system("pause");
        return 0; }
