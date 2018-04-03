#include <iostream>
using namespace std;
int main()
{
    double n,a,d;
  if(n!=0){
    do{
    cout<<"Enter n, a and d:";
    cin>>n>>a>>d;  
    cout<<"n cannot be both a negative intiger and zero"<<endl;
    }while(n==0||n<=0);

do{
    cout<<"Enter n, a and d:";
    cin>>n>>a>>d;
    cout<<"a cannot be zero"<<endl;
}while(a==0);
do{
    cout<<"Enter n, a and d:";
    cin>>n>>a>>d;
    cout<<"d cannot be zero;"<<endl;
}while(d==0);
do{
   cout<<"Enter n, a and d:";
    cin>>n>>a>>d;
    cout<<"a and d cannot ba zero"<<endl;
}while(a==0&d==0);

}
else
    cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<":"<<endl;
    cout<<"The summation:"<<endl;


    system("pause");
    return 0;
}
