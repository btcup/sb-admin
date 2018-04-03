//5920500867 Sila Pethai
#include<iostream>
using namespace std;
int main(){
    int i;
    double n,a,r,sum,v;
    cout<<"Enter n, a and r: ";
    cin>>n>>a>>r;
    while(n < 0 || n == 0 || a == 0 || r == 0){
            if((n<0||n==0)&&a==0&&r==0){
            cout<<"n cannot be both a negative integer and a zero"<<endl;
            cout<<"a and r cannot be zeros"<<endl;
            cout<<"Enter n, a and r: ";
            cin>>n>>a>>r;}
            
            else if(n<0||n==0){
            cout<<"n cannot be both a negative integer and a zero"<<endl;
            cout<<"Enter n, a and r: ";
            cin>>n>>a>>r;}
            else if(a==0){
            cout<<"a cannot be a zero"<<endl;
            cout<<"Enter n, a and r: ";
            cin>>n>>a>>r;}
            else if(r==0){
            cout<<"r cannot be a zero"<<endl;
            cout<<"Enter n, a and r: ";
            cin>>n>>a>>r;}}
            
    cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
    v=a;
    sum=0;
    for(i=0;i<n;i++){
    sum=sum+v;
    cout<<v<<" ";
    v=v*r; 
    }
    cout<<endl;
    cout<<"The summation:"<<sum<<endl;
    
    
    system("pause");
    return 0;
}
