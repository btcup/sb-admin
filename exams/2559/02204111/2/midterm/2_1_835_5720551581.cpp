//5720551581 KOMJAK BUNYARAT
#include <iostream>     
using namespace std;
int main()
{
    int b;
    char a;
    float c,d,e;
    cout<<"Enter car model : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter number of year (1-6) : ";
    cin>>b;
    cout<<endl;
    cout<<"Enter your salary : ";
    cin>>c;
    cout<<endl;
    if (a=='B')
    {
       cout<<"Financing amount : 383625";
       cout<<endl;
       d=383625*(1.79/100)*b;
       cout<<"Amount of interest :"<<d;
       cout<<endl;
       e=(383625+d)/(b*12);
       cout<<"Monthly payment : "<<e<<endl;
       if (c/2.0>=e)
       cout<<"Good decision,Enjoy your new car"<<endl;
       else
       cout<<"The monthly payment is over than 50% of your salary!"<<endl;
}
       if (a=='A')
    {
       cout<<"Financing amount : 1038750";
       cout<<endl;
       d=1038750*(1.79/100)*b;
       cout<<"Amount of interest :"<<d;
       cout<<endl;
       e=(1038750+d)/(b*12);
       cout<<"Monthly payment : "<<e<<endl;
       if (c/2.0>=e)
       cout<<"Good decision,Enjoy your new car"<<endl;
       else
       cout<<"The monthly payment is over than 50% of your salary!"<<endl;
}
       if (a=='C')
    {
       cout<<"Financing amount : 553500";
       cout<<endl;
       d=553500*(1.79/100)*b;
       cout<<"Amount of interest :"<<d;
       cout<<endl;
       e=(553500+d)/(b*12);
       cout<<"Monthly payment : "<<e<<endl;
       if (c/2.0>=e)
       cout<<"Good decision,Enjoy your new car"<<endl;
       else
       cout<<"The monthly payment is over than 50% of your salary!"<<endl;
}  
       if (a=='J')
    {
       cout<<"Financing amount : 520500";
       cout<<endl;
       d=520500*(1.79/100)*b;
       cout<<"Amount of interest :"<<d;
       cout<<endl;
       e=(520500+d)/(b*12);
       cout<<"Monthly payment : "<<e<<endl;
       if (c/2.0>=e)
       cout<<"Good decision,Enjoy your new car"<<endl;
       else
       cout<<"The monthly payment is over than 50% of your salary!"<<endl;
}  
    system ("pause");
    return 0;
}
