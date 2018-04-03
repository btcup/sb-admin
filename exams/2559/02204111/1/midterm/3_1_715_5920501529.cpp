//5920501529 Tawanna Sangmake
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,i=0;
    double sum=0;
    do
    {cout<<"input value: ";
     cin>>a;
     while(a>=10)
     {
     cout<<"Invaild Input!! Try Again"<<endl;
     cout<<endl;
     cout<<"input value: ";
     cin>>a;
     }
    if(a>=0&&a<10)
    { sum = sum+(a*pow(10,i));
      i++;}
    }
    while(a>=0&&a<10);
    cout<<endl;
    cout<<endl;
    cout<<"Total is "<<sum<<endl;
    system("pause");
    return 0;
}
