//5920551445 Thanasin Wettayavigromrat
#include <iostream>
using namespace std;
int main()
{
    int n,i=0;
    float a,d,sum;
    do
    {  
          cout<<"Enter n, a and d: ";
          cin>>n>>a>>d;
          if(n>0)
          {
                 if(a!=0)
                 {
                         if(d!=0)
                         {
                                 cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<":"<<endl;
                                 while(i!=n){
                                            sum=sum+a;
                                            cout<<a<<" ";
                                            a=a+d;
                                            i++;}
                                 }
                                 
                         else
                         {
                             cout<<"d cannot be a zero"<<endl;
                             }
                             }          
                 else
                 {
                     if(a==0&&d==0)
                     cout<<"a and d cannot be zero"<<endl;
                     else
                     cout<<"a cannot be a zero"<<endl;
                     }
                     }        
          
          else
          {
              cout<<"n cannot be both a negative integer and a zero"<<endl;
              if(a==0&&d==0)
              cout<<"a and d cannot be zero"<<endl;
              else if(a==0&&d!=0)
              cout<<"a cannot be a zero"<<endl;
              else if(a!=0&&d==0)
              cout<<"d cannot be a zero"<<endl;
              continue;
              }
              }while(i!=n||n==0);
    if(n>0){
    cout<<endl;          
    cout<<"The summation:"<<sum<<endl;}
    system("pause");
    return 0;
}
                   
    
    
