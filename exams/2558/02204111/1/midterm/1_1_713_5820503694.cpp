#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    float k,b,f,E,T,Y,H,ft,V;
    cout<<"please input using :";
    cin>>n;
    if(n<0)
    {
    cout<<"tnvalid input!!!!!!!!"<<endl;
     }
     else{
    cout<<"please input voltage:";
    cin>>m;
    if(m>=22&&m<=33)
    {
      k=2.4649; 
      b=228.17;
      H=n*k;
      
      cout<<"Electricity cost :"<<H<<endl;  
       cout<<"service: "<<b<<endl; 
       f=46.38;
      ft=f*n/100;
      cout<<"Ft:"<<ft<<endl;
      V=(ft+H+b)*7/100;
      cout<<"Vet 7% :"<<V<<endl;
      cout<<"totel cost :"<<round(H+b+ft+V);                         
    }
    else if(m<22)
     {
         if(n>0&&n<=150)
         {
           k=1.8047;
            b=40.90; 
            E=n*k;
         cout<<"Electriccity cost: "<<E<<endl;
         cout<<"service:  "<<b<<endl; 
       f=46.38;
      ft=f*n/100;
      cout<<"Ft:"<<ft<<endl;
      V=(ft+E+b)*7/100;
      cout<<"Vet 7% :"<<V<<endl; 
      cout<<"totel cost :"<<round(E+b+ft+V);
      
         }
         if(n>150&&n<=400)
         {
          k=2.7781;
          b=40.90;
          T=k*n;
           
           cout<<"Electriccity cost 0-150: "<<(150*1.8047)<<endl;
           cout<<"Electriccity cost 0-150: "<<((n-150)*k)<<endl;  
         cout<<"service:  "<<b<<endl; 
       f=46.38;
      ft=f*n/100;
      cout<<"Ft:"<<ft<<endl;
      V=((ft+((150*1.8047)+(n-150)*k)+b)*7/100);
      cout<<"Vet 7% :"<<V<<endl; 
      cout<<"totel cost :"<<round(((150*1.8047)+(n-150)*k)+b+ft+V);
         }
         if(n>400)
         {
          k= 2.9780; 
          b=40.90;
         
          cout<<"Electriccity cost 0-150: "<<(150*1.8047)<<endl;
           cout<<"Electriccity cost 0-150: "<<((n-150)*k)<<endl;  
         cout<<"service:  "<<b<<endl; 
       f=46.38;
      ft=f*n/100;
      cout<<"Ft:"<<ft<<endl;
      V=((ft+((150*1.8047)+(n-150)*k)+b)*7/100);
      cout<<"Vet 7% :"<<V<<endl; 
      cout<<"totel cost :"<<round(((150*1.8047)+(n-150)*k)+b+ft+V);  
         }
    
     }
    
     } 
    
    
    
    
  system("pause");
  return 0;  
  }
