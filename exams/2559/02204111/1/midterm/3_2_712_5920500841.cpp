//5920500841 wuttipon butchum
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
      float a,b,c,x1,x2,x3;
     
    cout<<"Enter coeffcients a, b andc : ";cin>>a>>b>>c;
    cout<<endl;
    cout<<"Root are real and different."<<endl;
    
    if(pow(b,2)-4*a*c>0)
    {
          cout<<"X1 = "<<x1<<endl;
          cout<<"X2 = "<<x2<<endl;
          x1= (-b+(sqrt((pow(b,2)-4*a*c))/2*a));
           x2=(-b-(sqrt((pow(b,2)-4*a*c))/2*a));
          }
    else if (pow(b,2)-4*a*c==0)
           { 
           cout<<"X1=X2 = "<<x3<<endl;    
            x3=  b+(sqrt((pow(b,2)-4*a*c)))/2*a;    
           }
     else if(pow(b,2)-4*a*c<0)
            {
        cout<<"X1 = "<<x1<<"i"<<endl;
          cout<<"X2 = "<<x2<<"i"<<endl;
          x1= ((-b/2*a)+(sqrt(-(pow(b,2)-4*a*c)))/2*a);
          x2= ((-b/2*a)-(sqrt(-(pow(b,2)-4*a*c)))/2*a);
          }
          
    
          

    system("pause");
    return 0; 
}

    
    
    
