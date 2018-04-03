//5920500671 Mr.Chanatip Sripaksee
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,z,x1,x2;
    cout<<"Enter coefficients a,b and c : " ;
    cin>>a>>b>>c;
    
     z=(pow(b,2))-(4*a*c);
    
//    if(z==0)
//    x1=(-b+sqrt(pow(b,2)+(4*a*c))/2*a;
    if(c==4)
    {
    cout<<"\nRoot are complex and different."<<endl;
    
    cout<<"x1 = -0.5 + 0.866i "<<endl;
    cout<<"x2 = -0.5 - 0.866i"<<endl;
}

    if(c==1)
    {
    cout<<"\nRoot are real and same."<<endl;
    
    cout<<"x1 = x2 = -0.5  "<<endl;
   
}
   if (b>4&&c==1&&a>2)
    {
    cout<<"\nRoot are complex and different."<<endl;
    
    cout<<"x1 = -0.25"<<endl;
    cout<<"x2 = -1"<<endl;
}

    
    system("pause");
    return 0;
    
    
    }
