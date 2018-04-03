#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x,y,;
    float e1=2.4649,e2=1.8047,e3=2.7781,e4=2.9780,s1=228.17,s2=40.90,f=46.38;
    cout<<"Please input usage : \n";
    cin>>x;
    cout<<"Paease input voltage : \n";
    cin>>y;
    if(y>=22&&y<=33)
    {
                    cout<<"Electricity Cost : ";
                    cout<<e1*x<<endl;
                    cout<<"Service : 228.17 \n";
                    cout<<"Ft : ";
                    cout<<f*x/100<<endl;
                    cout<<"Vat 7 % : ";
                    cout<<(e1*x+s1+f*x/100)*7/100<<endl;
                    cout<<"Total cost :"<<(e1*x)+(s1)+(f*x/100)+((e1*x+s1+f*x/100)*7/100);
                    }
    else if(y<22)
    {
          if(x>0&&x<=150)
         {
                    cout<<"Electricity Cost 0-150 : ";
                    cout<<e2*x<<endl;
                    cout<<"Service : 40.90 \n";
                    cout<<"Ft : ";
                    cout<<f*x/100<<endl;
                    cout<<"Vat 7 % : ";
                    cout<<(e2*x+s2+f*x/100)*7/100<<endl;
                    cout<<"Total cost :"<<(e2*x)+(s2)+(f*x/100)+((e2*x+s2+f*x/100)*7/100);
                    }
                    
           if(x>150&&x<=400)
           {
                    cout<<"Electricity Cost 150-400 : ";
                    cout<<e3*x<<endl;
                    cout<<"Service : 40.90 \n";
                    cout<<"Ft : ";
                    cout<<f*x/100<<endl;
                    cout<<"Vat 7 % : ";
                    cout<<(e3*x+s2+f*x/100)*7/100<<endl;
                    cout<<"Total cost :"<<(e3*x)+(s2)+(f*x/100)+((e3*x+s2+f*x/100)*7/100);
                    }
           if(x>400)
           {
                    cout<<"Electricity Cost : ";
                    cout<<e3*x<<endl;
                    cout<<"Service : 40.90 \n";
                    cout<<"Ft : ";
                    cout<<f*x/100<<endl;
                    cout<<"Vat 7 % : ";
                    cout<<(e3*x+s2+f*x/100)*7/100<<endl;
                    cout<<"Total cost :"<<(e3*x)+(s2)+(f*x/100)+((e3*x+s2+f*x/100)*7/100);
                    }                   
    else
    { cout<<"Invalid Input !!!";
}
        
         
    system("pause");
    return 0;
}       
