#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float h,w,d,a,b,total;
    char f,q;
    cout<<"welcom to The Fantastic tiles!!"<<endl;
    cout<<"Please enter room size in meter (H*W*D):";
    cin>>h>>w>>d;
    cout<<"Please select floor tile...(A/B/C):";
    cin>>f;
    cout<<"Please select wall tile...(A/B/C):";
    cin>>q;
    cout<<"--------------------------------"<<endl;
    if((f=='a'||f=='A')&&(q=='a'||q=='A'))
    {
    cin>>a;
    cout<<"Number of floor tiles :"<<a<<"-->Price ="<<a*h*w*d*4<<endl;
    cin>>b;
    cout<<"Number of floor tiles :"<<a<<"-->Price ="<<b*h*w*d*1<<endl;
    total=(a*h*w*d*4)+(b*h*w*d*1);
   cout<<"Total price"<<total<<endl;
    }
    system("pause");
    return 0;
}
    
