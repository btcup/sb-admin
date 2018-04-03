#include<iostream>
using namespace std;
int main()
{               
int asia1,asia2,asia3,asia4,asia5,nok1,nok2,nok3,nok4,nok5,lion1,lion2,lion3,lion4,lion5,thai1,thai2,thai3,thai4,thai5;
cout<<"give the number of passenger of day 1: ";
cin>>asia1>>nok1>>lion1>>thai1;
cout<<"give the number of passenger of day 2: ";
cin>>asia2>>nok2>>lion2>>thai2;
cout<<"give the number of passenger of day 3: ";
cin>>asia3>>nok3>>lion3>>thai3;
cout<<"give the number of passenger of day 4: ";
cin>>asia4>>nok4>>lion4>>thai4;
cout<<"give the number of passenger of day 5: ";
cin>>asia5>>nok5>>lion5>>thai5;
cout<<"\n";
cout<<" Total passenger for air asia is : "<<asia1+asia2+asia3+asia4+asia5<<endl;
cout<<"\n";
cout<<" The average number of passengers for all days and all flights is : "<<(asia1+asia2+asia3+asia4+asia5+nok1+nok2+nok3+nok4+nok5+lion1+lion2+lion3+lion4+lion5+thai1+thai2+thai3+thai4+thai5)/20<<endl;
cout<<"\n";
cout<<" The largest number of passenger is : "<<lion4<<endl;
system ("pause");
return 0;
}

