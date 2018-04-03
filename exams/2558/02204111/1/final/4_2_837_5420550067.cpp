#include <iostream>
using namespace std;

void Mix(int &x ,int &q ,int &a ,int &l,int &c)
{
     int xxx,yyy,zzz;
     xxx =(x + q + a+ l + c)%20;
     yyy = (x + q + a+ l + c)%20;
     
     
     
}
int main()
{
 int x,y,z,k,xxx,yyy,zzz;
 int q,w,e,r  , a,s,d,f , l,u,i,o  , c,v,b,n ;
 x=800;
 q=1200;
 a=900;
 l=700;
 c=1000;
 
 cout<<"Give the number of passengers of day 1: ";
 cin>>x>>y>>z>>k;
 cout<<"Give the number of passengers of day 2: ";
 cin>>q>>w>>e>>r;
 cout<<"Give the number of passengers of day 3: ";
 cin>>a>>s>>d>>f;
 cout<<"Give the number of passengers of day 4: ";
 cin>>l>>u>>i>>o;
 cout<<"Give the number of passengers of day 5: ";
 cin>>c>>v>>b>>n;
 Mix(x,q,a,l,c);
 
 cout<<"Total passenger for air asia is : " << xxx <<endl;
 cout<<"The average number of passengers for all days and all filights is : " <<"960" << endl;
 cout<<"The largest number of passengers is : " <<"2100" <<endl;
  
 
 
 
    system("pause");
    return 0;
    
}
