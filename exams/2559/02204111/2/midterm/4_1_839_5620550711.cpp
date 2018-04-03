//5620550711 Sutima Libpriwan
#include<iostream>
using namespace std;
int main()
{
char a,C,M,;
double x,y,k,m,s;
int h1,d,h2;
cout<<"Type of vehicle ((C)Car or (M)Motorcycle): ";
cin>>a;
cout<<"Arrival time : ";
cin>>x;
cout<<"Leave time : ";
cin>>y;
if(x>(int(x)+0.3))
{h1=int(x)+1;
h2=int(y)-h1;
d=((y*100)-(int(y)*100))+(60-((x*100)-(int(x)*100)));
cout<<h2<<"hours and"<<d<<"minutes"<<endl;}
else if(x<(int(x)+0.3))
{h1=int(x);
h2=int(y)-h1;
d=((y*100)-(int(y)*100))-((x*100)-(int(x)*100));
cout<<h2<<"hours and"<<d<<"minutes"<<endl;}
if(a=='C')
{
          if(h2<=2)
          cout<<"You have to play 0 Baht"<<endl;
          else if(h2>=3&&h2<=5)
          cout<<"You have to play"<<((h2-2)*30)<<"Baht"<<endl;
          else if(h2>=6&&h2<=8)
          cout<<"You have to play"<<((h2-2)*50)<<"Baht"<<endl;
          else if(h2>=8)
          cout<<"You have to play 500 Baht"<<endl;
          else if(h2<0)
          cout<<"You can't leave before arrival time"<<endl;
}
else if(a=='M')
{
     if(h2<=3)
     cout<<"You have to play 0 Baht"<<endl;
     else if(h2>=4&&h2<=7)
     cout<<"You have to play"<<((h2-3)*10)<<"Baht"<<endl;
     else if(h2>=7)
     cout<<"You have to play 150 Baht"<<endl;
     else if(h2<0)
     cout<<"You can't leave before arrival time"<<endl;
     
     
}


system("pause");
return 0;
}
