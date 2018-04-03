//5920502991 Methawi Narinsakchai
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
    long double m,i,j,n,a,b,c,o;
    cout<<"Enter coefficieents a,b and c:";
    cin>>a>>b>>c;
    m=(b*b)-(4*a*c);
    n=(-b)/(2*a);
    o=sqrt((b*b)-(4*a*c));
    
    
     if(m<0)
     {
          
          i=((-b)+(sqrt(pow(b,2))-(4*a*c)))/(2*a);
          j=((-b)-(sqrt(pow(b,2))-(4*a*c)))/(2*a);
          cout<<"x1 = "<<i;
          cout<<"x2 = "<<j;
           
    }
    if(m=o)
     {j=((-b)-(sqrt(pow(b,2))-(4*a*c)))/(2*a);
      cout<<"x1=x2 = "<<j;
      }
      if(m<0) 
      {   
          cout<<"x1 = "<<n<<"+"<<m<<"i";
          cout<<"x2 = "<<n<<"-"<<m<<"i";
        
     }
    system("pause");
    return 0;
}
