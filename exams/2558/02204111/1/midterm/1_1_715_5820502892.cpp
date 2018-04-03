#include<iostream>
using namespace std;
int main()
{
    float a,b,ec1,ec2,ec3,ec;
    cout<<"Please input usage: ";
    cin>>a;
    cout<<"Please input voltage: ";
    cin>>b;
    if(b<22)
    {
            if(a>=0&&a<=150){
            ec1=1.8047*a;
            cout<<"Electricity Cost 0-150: "<<ec1<<endl;}
            if(a>150&&a<=400){
            ec2=2.7781*(a-150);
            cout<<"Electricity Cost 151-400: "<<ec2<<endl;}
            if(a>400){
            ec3=2.9780*(a-400);
            cout<<"Electricity Cost 401->: "<<ec3<<endl;}
            }
            cout<<"Service : 40.90"<<endl;
            cout<<"Ft : "<<40.90*a<<endl;
            cout<<"vat 7 % : "<<7/100*(ec1+ec2+ec3+40.90+40.90*a)<<endl;
            cout<<"Total cost : "<<a*(ec1+ec2+ec3)+40.90+46.38*a+(7/100*(ec1+ec2+ec3+40.90+40.90*a))<<endl;
     if(b>=22&&b<=33)
    {
            ec=2.4649*a;
            cout<<"Electricity Cost : "<<ec<<endl;
            }
            cout<<"Service : 228.17"<<endl;
            cout<<"Ft : "<<228.17*a<<endl;
            cout<<"vat 7 % : "<<7/100*(ec+228.17+228.17*a)<<endl;
            cout<<"Total cost : "<<a*ec+228.17+46.38*a+(7/100*(ec+228.17+228.17*a))<<endl;
system("pause");
return 0;
}
