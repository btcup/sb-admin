// 5920500573 kornchawan klumem
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,x;
    cout<<"Enter coefficients a, b and c : ";
    cin>>a>>b>>c;
    x=(pow(b,2))-(4*a*c);
    if(x>0){
    cout<<"Roots are real and different"<<endl;
    cout<<"x1 = "<<((-b)+sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
    cout<<"x2 = "<<((-b)-sqrt(pow(b,2)-4*a*c))/(2*a)<<endl;
    }
    if(x==0){
    cout<<"Roots are real and same"<<endl;         
    cout<<"x1 = x2 = "<<((-b)+(sqrt(pow(b,2)-(4*a*c))))/(2*a)<<endl;
    }
    if(x<0){
    cout<<"Roots are complex and different"<<endl;        
    cout<<"x1 = "<<-b/(2*a)<<" + "<<sqrt(-(pow(b,2)-4*a*c))/(2*a)<<"i"<<endl;
    cout<<"x2 = "<<-b/(2*a)<<" - "<<sqrt(-(pow(b,2)-4*a*c))/(2*a)<<"i"<<endl;
}
    
    system ("pause");
    return 0;
}
