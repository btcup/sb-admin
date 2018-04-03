#include<iostream>
using namespace std ;
int main()
{
    double a,v,c,s,ft,sum;
    
    cout<<"Please input usage :";
    cin>>a;
    cout<<"Please input voltage :";
    cin>>v;
    cout<<endl;
    if(v>=22&&v<=33)
    {
     c=a*2.4649;
     s=228.17;
     sum=(a*2.4649)+228.17+(0.4638*a);
     ft=sum*(7.0/100.0);
     sum=sum+ft;
     cout<<"Electricite Cost :"<<c<<endl;
     cout<<"Service :"<<s<<endl;
     cout<<"Vat 7% :"<<ft<<endl;
     cout<<endl;
     cout<<"Total cost :"<<sum<<"Baht"<<endl;
    }
   else if(v<22)
    {
      if(a>=0&&a<=150)
         {  c=a*1.8047;
            s=40.9;
           sum=c+s+(0.4638*a);
           ft=sum*(7.0/100.0);
           sum=sum+ft;
         cout<<"Electricite Cost 0-150 :"<<a*1.8047<<endl;
     cout<<"Service :"<<s<<endl;
     cout<<"Vat 7% :"<<ft<<endl;
     cout<<endl;
     cout<<"Total cost :"<<sum<<"Baht"<<endl;
           }
       else if(a>150&&a<=400)
       {
           c=a*(2.7781+2.7781);
            s=40.9;
           sum=sum+c+s+(0.4638*a);
          ft=sum*(7.0/100.0);
           sum=sum+ft;
           cout<<"Electricite 0-150 :"<<a*1.8047<<endl;
             cout<<"Electricite 151-400 :"<<a*2.7781<<endl;
     cout<<"Service :"<<s<<endl;
     cout<<"Vat 7% :"<<ft<<endl;
     cout<<endl;
     cout<<"Total cost :"<<sum<<"Baht"<<endl;
           }
           
        else if(a>400)
         { c=a*(2.9780);
            s=40.9;
           sum=c+s+(0.4638*a);
           ft=sum*(7.0/100.0);
           sum=sum+ft;
            cout<<"Electricite 0-150 :"<<150*1.8047<<endl;
            cout<<"Electricite 151-400 :"<<400*2.7781<<endl;
            cout<<"Electricite 401--> :"<<a*2.9780<<endl;
     cout<<"Service :"<<s<<endl;
     cout<<"Vat 7% :"<<ft<<endl;
     cout<<endl;
     cout<<"Total cost :"<<sum<<"Baht"<<endl;
           }
           }
          
          
        
         
    //cout<<sum<<endl;
system("pause");
return 0;
}
    
    
    
