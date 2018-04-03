#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float u,p,v,b;
    cout<<"Please input usage : ";
    cin>>u;
    if(u!=-1)
    {
    cout<<"Please input voltage : ";
    cin>>p;
    if(p>=22||p<=33)
    {
     cout<<" "<<endl;
     cout<<"Electricty Cost : "<<u*2.4649<<endl;
     cout<<"Service : 228.17"<<endl;
     cout<<"Ft : "<<u*46.38<<endl;  
     cout<<"Vat 7% : "<<v<<endl;
     cout<<" "<<endl;
     b=(u*2.4649)+228.17+(46.38*u)+(7/100);
     cout<<"Total cost : "<<b<<" Baht"<<endl;
    }
    else if(p<=21||p>=0)
    {
         if(u>=0||u<=150)
         {
         cout<<" "<<endl;
         cout<<"Electricty Cost 0-150 : "<<u*1.8047<<endl;
         cout<<"Service : 40.90"<<endl;
         cout<<"Ft : "<<u*46.38<<endl;
         cout<<"Vat 7% : "<<v<<endl;
         cout<<" "<<endl;
         b=(u*1.8047)+40.90+(46.38*u)+(7/100);
         cout<<"Total cost : "<<b<<" Baht"<<endl;
         }
         else if(u>=151||u<=400)
         {
         cout<<" "<<endl;
         cout<<"Electricty Cost 0-150 : 270.705"<<endl;
         cout<<"Electricty Cost 151-400 : "<<u*2.7781<<endl;
         cout<<"Service : 228.17"<<endl;
         cout<<"Ft : "<<u*46.38<<endl;  
         cout<<"Vat 7% : "<<v<<endl;
         cout<<" "<<endl;
         b=(u*2.7781)+40.90+(46.38*u)+(7/100);
         cout<<"Total cost : "<<b<<" Baht"<<endl;
         }
    }
    else if (u>=401||p<=21)
    {
     cout<<" "<<endl;
     cout<<"Electricty Cost 0-150 : 270.705"<<endl;
     cout<<"Electricty Cost 151-400 : 694.525"<<endl;
     cout<<"Electricty Cost 151-400 : "<<u*2.98780<<endl;
     cout<<"Service : 228.17"<<endl;
     cout<<"Ft : "<<u*46.38<<endl;  
     cout<<"Vat 7% : "<<v<<endl;
     cout<<" "<<endl;
     b=(u*2.9780)+40.90+(46.38*u)+(7/100);
     cout<<"Total cost : "<<b<<" Baht"<<endl;
    } 
    }
    else if(u<=-1)
    {
    cout<<"Invalid Input !!!"<<endl;
    }
    cout<<endl;
    system("pause");
    return 0;
}
