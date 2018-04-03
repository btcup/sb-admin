#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int u;
  double a,b,p,r,s,t;
  cout<<"please input usage:";  
  cin>>a;
  cout<<"please input voltage:";
  cin>>b;
  if (a>=0 && b>=0)
  {
  if (b<=33 || b>=22)
  {
            p=a*2.4649;
            r=228.17;
            s=0.4638*a;
            t= ((p+r+s)*7)/100;
            u=p+r+s+t;
  cout<<"Electricity cost:"<<p<<endl;
  cout<<"service: "<<r<<endl;
  cout<<"Ft:"<<s<<endl;
  cout<<"vat 7% :"<<t<<endl;
  cout<<"Total cost:"<<u<<"Baht"<<endl;
}
  
  else if (b<22)
  {
    if (a>=0 || a<=150){
      cout<<"Electricity cost 0-150:"<<endl;
      cout<<"service: "<<endl;
  cout<<"Ft:"<<endl;
  cout<<"vat 7% :"<<endl;
  cout<<"Total cost:"<<"Baht"<<endl;
  
}
     else if (a>=151 || a<=400)
     {
      cout<<"Electricity cost 0-150:";
       cout<<"Electricity cost 151-400:";
   cout<<"service:";
  cout<<"Ft:";
  cout<<"vat 7% :";
  cout<<"Total cost:";
}
      else if (a>=400)
      {
      cout<<"Electricity cost 0-150:";
       cout<<"Electricity cost 151-400:";
        cout<<"Electricity cost 400->:";
   cout<<"service:";
  cout<<"Ft:";
  cout<<"vat 7% :";
  cout<<"Total cost:";
}
  }
}





system("pause");
return 0;
}
