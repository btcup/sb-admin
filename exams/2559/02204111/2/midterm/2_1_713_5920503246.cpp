#include<iostream>//5920503246 Wiwat kanjanaekkarin
using namespace std;
int main()
{
    char car;
    double z,x,c,v,g;
    cout<<"-------Car lease calculator-----------"<<endl;
    cout<<"Enter car model:";
    cin>>car;
    cout<<"Enter number of years (1-6):";
    cin>>z;
    cout<<"Enter your salary:";
    cin>>x;
    cout<<"--------------------------------"<<endl;
    if (car=='A')
    {
     cout<<"Financing amount:"<<(c=1385000-(1385000*0.25))<<endl;
     cout<<"Amount of interest:"<<(v=((c*2.09/100)*z))<<endl;
     cout<<"Monthly payment:"<<(g=v/z)<<endl;
}
    else if (car=='B')
    {
     cout<<"Financing amount:"<<(c=511500-(511500*0.25))<<endl;
     cout<<"Amount of interest:"<<(v=((c*1.79/100)*z))<<endl;
     cout<<"Monthly payment:"<<(g=v/z)<<endl;
     }
     else if (car=='C')
    {
     cout<<"Financing amount:"<<(c=738000-(738000*0.25))<<endl;
     cout<<"Amount of interest:"<<(v=((c*1.99/100)*z))<<endl;
     cout<<"Monthly payment:"<<(g=v/z)<<endl;
     }
      else if (car=='J')
    {
     cout<<"Financing amount:"<<(c=694000-(694000*0.25))<<endl;
     cout<<"Amount of interest:"<<(v=((c*1.99/100)*z))<<endl;
     cout<<"Monthly payment:"<<(g=v/z)<<endl;
     }
     if (g<=x/2)
      cout<<"good decision, Enjoy your new car"<<endl;
     else if (g>x/2)
      cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
system("pause");
return 0;
}
