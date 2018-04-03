#include <iostream> //5820500148 nattakit teerawong
using namespace std;
int main()
{
int  a,x=1;
 cout<<"Enter a positive integer :"<<endl;
 cin>> a;
 cout<<"number of didit is"<<  <<endl;
 cout<<"Factor of  "<<a<<"are"<<endl;
  if(a<=0)
  { 
    cout<<"Invalid number"<<endl;
  }
  else
  {  
        while(a%x==0&&x<=a)
        cout<<x<<" * = "<<a/x<<aendl;
        x++;

  } 
 
 
 
 system ("pause");
 return 0 ;
}
