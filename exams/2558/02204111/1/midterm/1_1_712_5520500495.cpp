#include <iostream>
using namespace std;
int main ()
{   
    float usage,voltage;
    double sum=0;
    cout<<"Please input usage : ";
    cin>>usage;
    cout<<"Please input voltage : ";
    cin>>voltage;
    if(voltage>=22&&voltage<=33)
    {
       cout<<"Electricity Cost : "<<usage*2.4649<<endl;
       cout<<"service : 228.17"<<endl;
       cout<<"Ft : "<<usage/100*46.38<<endl;
       sum=(usage*2.46490)+(usage/100*46.38)+228.17;
       cout<<"Vat 7% : "<<sum*0.07<<endl;
       cout<<endl;
       cout<<"Total cost : "<<(usage*2.4649)+228.17+(usage/100*46.38)+(sum*0.07)<<"Baht"<<endl;
       }
    else if(voltage<22)
       {
          if(usage>0&&usage<=150)
          {
            cout<<"Electricity Cost 0-150 : "<<usage*1.8047<<endl;
            cout<<"service : 40.90"<<endl;
            cout<<"Ft : "<<usage/100*46.38<<endl;
            sum=(usage*1.8047)+40.90+(usage/100*46.38);
            cout<<"Vat 7% : "<<sum*0.07<<endl;
            cout<<endl;
            cout<<"Total cost : "<<(usage*1.8047)+40.90+(usage/100*46.38)+(sum*0.07)<<"Baht"<<endl; 
            } 
            
             else if (usage>150&&usage<=400)
          {
            cout<<"Electricity Cost 151-400 : "<<usage*2.7781<<endl;
            cout<<"service : 40.90"<<endl;
            cout<<"Ft : "<<usage/100*46.38<<endl;
            sum=(usage*2.7781)+40.90+(usage/100*46.38);
            cout<<"Vat 7% : "<<sum*0.07<<endl;
            cout<<endl;
            cout<<"Total cost : "<<(usage*2.7781)+40.90+(usage/100*46.38)+(sum*0.07)<<endl; 
            } 
            else
            {
              cout<<"Electricity Cost 401-> : "<<usage*2.9780<<endl;
            cout<<"service : 40.90"<<endl;
            cout<<"Ft : "<<usage/100*46.38<<endl;
            sum=(usage*2.9780)+40.90+(usage/100*46.38);
            cout<<"Vat 7% : "<<sum*0.07<<endl;
            cout<<endl;
            cout<<"Total cost : "<<(usage*2.9780)+40.90+(usage/100*46.38)+(sum*0.07)<<endl; 
            }
            }
       else
       cout<<"Invalid Input !!!"<<endl; 
                             
       system ("pause");
       return 0;
}                         
