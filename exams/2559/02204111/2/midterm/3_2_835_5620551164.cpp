//5620551164 Walalak Sirimongkolrat
#include <iostream>
using namespace std;
int main()
{
    float x,t,total;
    int a,b,y;
    
    cout<<"Enter electricity cost per unit (bath):";
    cin>>x;

    do{
           cout<<"Enter last unit:";
           cin>>a;
           if(a<0){
           cout<<"Invalid current unit!"<<endl;
           }
           cout<<"Enter current unit:";
           cin>>b;
           if(b<0){
           cout<<"Invalid current unit!"<<endl;
           }
               y=b-a;
               cout<<"Units used = "<<y<<endl;
               t=y*x;
               cout<<"Electricity charge (bath) = "<<t<<endl;
    }
    while (a==-1);
    
    cout<<"Total of Electricity charge (bath) = "<<total<<endl;
         
    system("pause");
    return 0;
}
