#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    float ser1=228.17,ser2=40.90;
    cout<<"Please input usage : ";
    cin>>a;
    cout<<"Please input voltage : ";
    cin>>b;

    if (b<=21)
    {
         if(a>=0||a<=150)
         {
              cout<<"Electricity cost 0-150 : "<<a*1.8047<<endl;
              cout<<"service : "<<ser2<<endl;
              cout<<"FT : "<<a*0.4638<<endl;
              cout<<"vat 7% : "<<((a*1.8047)+ser2+(a*0.4638))*0.07<<endl;
              cout<<"Total cost : "<<(((a*1.8047)+ser2+(a*0.4638))*0.07)+(a*1.8047)+ser2+(a*0.4638)<<" Baht \n";
         }
         else if(a>=151||a<=400)
         {
              cout<<"Electricity cost 0-150 : "<<150*1.8047<<endl;
              cout<<"Electricity cost 151-400 : "<<a*2.7781<<endl;
              cout<<"service : "<<ser2<<endl;
              cout<<"FT : "<<a*0.4638<<endl;
              cout<<"vat 7% : "<<((150*1.8047)+(a*2.7781)+ser2+(a*0.4638))*0.07<<endl;
              cout<<"Total cost : "<<(((150*1.8047)+(a*2.7781)+ser2+(a*0.4638))*0.07)+(150*1.8047)+(a*2.7781)+ser2+(a*0.4638)<<endl;
         }
         else if(a>=401)
         {
              cout<<"Electricity cost 0-150 : "<<150*1.8047<<endl;
              cout<<"Electricity cost 151-400 : "<<250*2.7781<<endl;
              cout<<"Electricity cost 401 > : "<<a*2.9780<<endl;
              cout<<"service : "<<ser2<<endl;
              cout<<"FT : "<<a*0.4638<<endl;
              cout<<"vat 7% : "<<((150*1.8047)+(a*2.7781)+(a*2.9780)+ser2+(a*0.4638))*0.07<<endl;
              cout<<"Total cost : "<<(((150*1.8047)+(a*2.7781)+(a*2.9780)+ser2+(a*0.4638))*0.07)+(150*1.8047)+(a*2.7781)+(a*2.9780)+ser2+(a*0.4638)<<endl;
         }    
         
    }
    else if(a<0)
    cout<<"Invalid Input!!!!!!!!!!!"<<endl;
    else
    {
        cout<<"Electricity cost : "<<a*2.4649<<endl;
        cout<<"service : "<<ser1<<endl;
        cout<<"FT : "<<a*0.4638<<endl;
        cout<<"vat 7% : "<<((a*2.4649)+ser1+(a*0.4638))*0.07<<endl;
        cout<<"Total cost : "<<(((a*2.4649)+ser1+(a*0.4638))*0.07)+(a*2.4649)+ser1+(a*0.4638)<<" Baht \n";
    }
    
   system("pause");
   return 0;
}
