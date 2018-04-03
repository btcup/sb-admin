#include <iostream>
#include <cmath>
using namespace std ;
int main () { int n,i=0 ; double a,r,x=0,sum=0;
do{ cout<<"Enter n, a and r" ;
    cin>>n>>a>>r;
    if      (n<=0)               { cout<<"n cannot be both a negative integer and a zero"<<endl; continue ;}
    else if (a==0&&r==0)         { cout<<"cannot be a zero"<<endl; continue ; }
    else if (a==0)               { cout<<"a cannot be a zero"<<endl; continue ; }
    else if (r==0)                      { cout<<"r cannot be a zero"<<endl; continue ; }
}
    while (r<0);
    cout<<"the geometric progresstion of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl ;
    for( ; ; ){
    
    x=a*pow(r,i) ; sum= sum+x;
    cout<<x<<" "; 
    if(i==n-1){ cout<<x<<" "<<endl;  break ;} i++ ;
}

cout<<"The summation :"<<sum<<"      ";
        

 system ("pause");
 return 0 ;
}
