#include<iostream>
#include<cmath>;
using namespace std;
int main()
{
    int usage,voltage,h;
    float ele,g,total,w,a=0,b=0,c=0,d=0;
    
    cout<<"Please input usage :";
    cin>>usage;
    cout<<"Please input voltage : " ;
    cin>>voltage;
    h=usage;
    
    if(voltage>=22&&voltage<=33)
     {
       if(usage>=0&&usage<=150)
          {
             cout<<"electricity cost : ";
             cout<<(usage*2.4649)<<endl;
             cout<<"service :";
             cout<<228.17<<endl;
             cout<<"Ft :";
             cout<<46.38/100*usage<<endl;
             cout<<"Vat 7 % :";
             g=(usage*2.4649)+228.17+46.38/100*usage;
             cout<<g*7/100<<endl;
             total=g+(g*7/100);
             cout<<"Total cost : "<<ceil(total)<<endl;
             
          }
     }
     else if(voltage<22)
     {
          
       if(usage>150){
          if(usage>150){
          cout<<"electricity cost 0-150: ";
            a=(150*1.8047);
             cout<<a<<endl;
             h=usage-150;
             
            
             b=(h*2.7781);
           cout<<"electricity cost 150-400: "<<b<<endl;
             h=usage-400;
             
            
             c=(h*2.7781);
           cout<<"electricity cost 400 -->: "<<c<<endl;
             
             }
             }
        else if(usage<150)
        cout<<"electricity cost 0-150: ";
           d=(usage*1.8047);
           
         cout<<"service :";
             cout<<40.90<<endl;
             cout<<"Ft :";
             cout<<46.38/100*usage<<endl;
             cout<<"Vat 7 % :";
             g=a+b+c+d+40.90+46.38/100*usage;
             cout<<g*7/100<<endl;
              total=g+(g*7/100);
              
              
           cout<<"Total cost : "<<ceil(total)<<endl;
           
          
}
    
    
    
    system("pause");
    return 0;
    
}
            
