#include<iostream>
using namespace std;
int main()
{
    double iu,iv,ec,ec1,ec2,ec3,s1=228.17,s2=40.90,ft=46.38,Ft,v,tc;
   

    cout<<"Please input usage : ";
    cin>>iu;
    if(iu<0)
    {
    cout<<"Invalid Input !!!"<<endl;
    }
    cout<<"Please input voltage : ";
    cin>>iv;
    if(iv>=22&&iv<=33)
    {
    ec=iu*2.4649;
    Ft=(ft*iu)/100;
    v=((ec+s1+Ft)*7)/100;
    tc=ec+s1+Ft+v;
    cout<<"Electricity Cost : "<<ec<<endl;
    cout<<"Service : "<<s1<<endl;
    cout<<"Ft : "<<Ft<<endl;
    cout<<"Vat 7%: "<<v<<endl;
    cout<<endl;
    cout<<"Total cost : "<<tc<<" Baht"<<endl;
    }
    if(iv<22)
    {
             if(iu>=0&&iu<=150)
             {
             ec1=iu*1.8047;
             cout<<"Electricity Cost 0-150 :"<<ec1<<endl;
             cout<<"Service : "<<s2<<endl;
             Ft=(ft*iu)/100;
             cout<<"Ft : "<<Ft<<endl;
             v=((ec1+s2+Ft)*7)/100;
             cout<<"Vat 7%: "<<v<<endl;
             tc=ec1+s2+Ft+v;
             cout<<"Total cost : "<<tc<<endl;
             }
             
             if(iu>=151&&iu<=400)
             {
             ec2=(iu-150)*2.7781;
             cout<<"Electricity Cost 151-400 :"<<ec2<<endl;
             cout<<"Service : "<<s2<<endl;
             Ft=(ft*iu)/100;
             cout<<"Ft : "<<Ft<<endl;
             v=((ec1+s2+Ft)*7)/100;
             cout<<"Vat 7%: "<<v<<endl;
             tc=ec1+ec2+s2+Ft+v;
             cout<<"Total cost : "<<tc<<endl;
             }
             
             if(iu>400)
             {
             ec3=(iu-400)*2.9780;
             cout<<"Electricity Cost 401 ->:"<<ec<<endl;
             cout<<"Service : "<<s2<<endl;
             Ft=(ft*iu)/100;
             cout<<"Ft : "<<Ft<<endl;
             v=((ec1+s2+Ft)*7)/100;
             cout<<"Vat 7%: "<<v<<endl;
             tc=ec1+ec2+ec3+s2+Ft+v;
             cout<<"Total cost : "<<tc<<endl;
             }
             
    }
    system("pause");
    return 0;
}
