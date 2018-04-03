#include<iostream>
using namespace std;
int main()
{ float n,x;
    cout<<"please input usage :";
    cin>>n;
    cout<<"Please input voltage :";
    cin>>x;
    
    if(x>=22&&x<=33)
    {cout<<"Electricity Cost :"<<(n*2.4649)<<endl;
    cout<<"Service : 228.17"<<endl;
    cout<<"Ft :"<<((n*46.38)/100)<<endl;
    cout<<"Vat 7 % :"<<(((n*2.4649)+228.17+((n*46.38)/100))*7)/100<<endl;
    cout<<endl;
    cout<<"Total cost :"<<((n*2.4649)+228.17+((n*46.38)/100)+(((n*2.4649)+228.17+((n*46.38)/100))*7)/100)<<" Bath"<<endl;
    }
    if(x<22)
    { if(n>=0&&n<=150)
                      {cout<<"Electricity Cost :"<<(n*1.8047)<<endl;
                      cout<<"Service : 40.90"<<endl;
                      cout<<"Ft :"<<((n*46.38)/100)<<endl;
                      cout<<"Vat 7 % :"<<((n*1.8047)+40.90+((n*46.38)/100))*7/100<<endl;
                      cout<<endl;
                      cout<<"Total cost :"<<((n*1.8047)+40.90+((n*46.38)/100)+((n*1.8047)+40.90+((n*46.38)/100))*7/100)<<" Bath"<<endl;
                      }
      if(n>=151&&n<=400)
                        {cout<<"Electricity Cost 0-150:"<<(150*1.8047)<<endl;
                        cout<<"Electricity Cost 151-400:"<<((n-150)*2.7781)<<endl;
                        cout<<"Service : 40.90"<<endl;
                        cout<<"Ft :"<<((n*46.38)/100)<<endl;
                        cout<<"Vat 7 % :"<<((150*1.8047)+((n-150)*2.7781)+40.90+((n*46.38)/100))*7/100<<endl;
                        cout<<endl;
                        cout<<"Total cost :"<<((150*2.4649)+((n-150)*2.7781)+(n*2.7781)+40.90+((n*46.38)/100)+((150*1.8047)+((n-150)*2.7781)+40.90+((n*46.38)/100))*7/100)<<" Bath"<<endl;
                        }
      if(n>=401)
                        {cout<<"Electricity Cost 0-150:"<<(150*1.8047)<<endl;
                        cout<<"Electricity Cost 151-400:"<<(250*2.7781)<<endl;
                        cout<<"Electricity Cost 400->:"<<((n-400)*2.9780)<<endl;
                        cout<<"Service : 40.90"<<endl;
                        cout<<"Ft :"<<((n*46.38)/100)<<endl;
                        cout<<"Vat 7 % :"<<((150*2.4649)+(250*2.7781)+((n-400)*2.9780)+40.90+((n*46.38)/100))*7/100<<endl;
                        cout<<endl;
                        cout<<"Total cost :"<<((150*2.4649)+(250*2.7781)+((n-400)*2.9780)+40.90+((n*46.38)/100)+((150*2.4649)+(250*2.7781)+((n-400)*2.9780)+40.90+((n*46.38)/100))*7/100)<<"Bath"<<endl;
                        }                   
    }
    if(n<0)
    {cout<<"Invalid Input!!!"<<endl;}
    
    system("pause");
    return 0;
    
    }


















