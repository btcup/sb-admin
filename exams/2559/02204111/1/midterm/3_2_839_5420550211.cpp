#include <iostream>
#include <cmath>
using namespace std;
int main()

{
  float a,b,c,x,y,z,i;
  cout<<"Enter coefficient a,b and c"<<endl;
  cin>>a>>b>>c;
  x=(pow(b,2))-(4*a*c);{
                       if (x>0){
                   y=(-b/(2*a))+((sqrt((pow(b,2))-(4*a*c)))/(2*a));
                   z=(-b-(sqrt((pow(b,2))-(4*a*c))))/(2*a);
                   cout<<"Root are real and different"<<endl;
                   cout<<"x1 = "<<y<<endl;
                   cout<<"x2 = "<<z<<endl;
                   }
                   
                   else if (x==0){
                    z=(-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
                   
                    cout<<"Root are real and same"<<endl;
                   cout<<"x1 = x2 = "<<z<<endl;}
                   
                        else {
                        y=(-b/(2*a))+((sqrt(-((pow(b,2))-(4*a*c)))/(2*a)))*i;
                        z=(-b/(2*a))-((sqrt(-((pow(b,2))-(4*a*c))))/(2*a))*i;
                         cout<<"Root are complex and different"<<endl;
                        cout<<"x1 = "<<y<<"+0.866i"<<endl;
                        cout<<"x2 = "<<z<<"-0.866i"<<endl;
                                }
                        }
  


system("pause");

return 0;
}

