// 5920550449 Apichaya Wongmongkol
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,x1,x2,x;
    cout<<"Enter corfficient a,b and c :";
    cin>>a>>b>>c;
    x = (b*b)-(4*a*c);
    if(x>0)
    {
           cout<<"Roots are real and different."<<endl;
           cout<<"x1 = "<<(-b+sqrt((b*b)-(4*a*c)))/(2*a)<<endl;
           cout<<"x2 = "<<(-b-sqrt((b*b)-(4*a*c)))/(2*a)<<endl;
    }
    else if(x==0)
    {
         cout<<"Roots are real and same."<<endl;
         cout<<"x1 = x2 = "<<(-b+sqrt((b*b)-(4*a*c)))/(2*a)<<endl;
         
    }
    else
    {
        cout<<"Roots are complex and different."<<endl;
        cout<<"x1 = "<<(-double(b)/(2*a))<<"+"<<-(float((sqrt(-(b*b)-(4*a*c))))/(2*a))<<"i"<<endl;
        cout<<"x2 = "<<(-double(b)/(2*a))<<+(float((sqrt(-(b*b)-(4*a*c))))/(2*a))<<"i"<<endl;
    }
    system ("pause");
    return 0;
}
