//5920503262 Sakarin Khajaroen
#include<iostream>
using namespace std;
int main()
{
    char n;
    float b,s,l,r,i;
    const float d=(25.0)/100;
    cout<<"------- Car lease calculator -----------\n";
    cout<<"Enter car model:";
    cin>>n;
    cout<<"Enter number of years (1-6):";
    cin>>b;
    cout<<"Enter your salary:";
    cin>>s;
    cout<<"----------------------------------------\n";
    if(n=='B'){
               l=511500-511500*d;
               r=(l*1.79)/100*b;
               i=(l+r)/(b*12);
    }
    else if(n=='A'){
               l=1385000-1385000*d;
               r=(l*2.09)/100*b;
               i=(l+r)/(b*12);
    }
    else if(n=='C'){
               l=738000-738000*d;
               r=(l*1.99)/100*b;
               i=(l+r)/(b*12);
    }
    else if(n=='J'){
               l=694000-694000*d;
               r=(l*1.99)/100*b;
               i=(l+r)/(b*12);
    }
    cout<<"Financing amount:"<<l<<endl;
    cout<<"Amount of interest:"<<r<<endl;
    cout<<"Monthly payment:"<<i<<endl;
    if(i<=(s/2)){
                 cout<<"Good decision, Enjoy your new car\n";
    }else if(i>(s/2)){
                 cout<<"The monthly payment is over than 50% of your salary!!\n";
    }
    system("pause");
    return 0;
}
