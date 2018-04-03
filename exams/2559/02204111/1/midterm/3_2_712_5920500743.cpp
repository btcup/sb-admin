//5920500743 Thanaphon Kerdpun
#include<iostream>   
#include<cmath>
using namespace std;
int main ()
{
    float a,b,c,i,dis,sum,sqrt,x1,x2;
          while(i>0){
              
              cout<<"Enter coefficients a, b and c";
              dis=pow(b,2)-(4*a*c);
              cin>>a>>b>>c;
              
              if(dis>0)
              cout<<"x1 = "<<(-b+sqrt*(-b+dis))/2*a;
              cout<<"x2 = "<<(-b-sqrt*(-b-dis))/2*a;
              
              if(dis=0)
              cout<<"x1 = x2 ="<<(-b+(sqrt*(dis)))/2*a;
              
              if (dis<0)
              cout<<"x1 = "<<(-b/(2*a)+((sqrt*-(dis)))/2*a);
              cout<<"x2 = "<<(-b/(2*a)-((sqrt*-(dis)))/2*a);
               
              while(i<0)
              if(x1!=x2)
              cout<<"Roots are real and different."<<endl;
           
              if(x1=x2)
              cout<<"Roots are real and same."<<endl;
              }
               system("pause");
               return 0;
}
