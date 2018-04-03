// 5620503747 Jakrathorn Chamroen
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n , i ;
    float a , r , x , sum = 0;
    do
    {
          cout<<"Enter n, a and r : ";
          cin>>n>>a>>r;
          if(n<=0)
          {
                  if(a!=0&&r!=0)
                                cout<<"n cannot be both a neative integer and zero"<<endl;
                  if(a==0&&r!=0)
                                cout<<"n cannot be both a neative integer and zero\na cannot be zero"<<endl;
                  if(r==0&&a!=0)
                                cout<<"n cannot be both a neative integer and zero\nr cannot be zero"<<endl;
                  if(a==0&&r==0)
                                cout<<"n cannot be both a neative integer and zero\na and r cannot be zeros"<<endl;
          }
          else
          {
              if(a!=0&&r!=0)
              {
                            for(i=0;i<n;i++)
                            {                x = a*pow(r,i);
                                             if(i==0)cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<" :"<<endl;
                                             cout<<x<<" ";
                                             sum = sum + x;
                                             
                            }
                            break ;
              } 
              if(a==0&&r!=0)
                            cout<<"a cannot be a zero"<<endl;              
              if(a==0&&r==0)
                            cout<<"a and r cannot be a zero"<<endl;
              if(a!=0&&r==0)
                            cout<<"r cannot be a zero"<<endl;                                                        
          }
          
    }
    while(1);
    cout<<"\nThe summation : "<<sum<<endl;
    
system("pause");
return 0 ;
}    
    
     
                                                
    
