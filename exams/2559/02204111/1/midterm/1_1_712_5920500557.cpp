//5920500557Suwanna Chinmuni
#include<iostream>
using namespace std;
int main()
{
    //int n;
    double n,a,d;
    cout<<"Enter n, a and d : ";
    cin>>n>>a>>d;
    do{
    if (n<=0)
    cout<<"n cannot be both a negative integer and a zero"<<endl;
    else if (a==0||d==0)
    cout<<"n cannot be both a negative integer and a zero"<<endl;
}
while (n<=0&&a=0&&d=0);

//cout<<"The arithmatic progression of n="<<n<<" a="<<a<<"d="<<d<<" : "<<endl;



system ("pause");
return 0;
}
