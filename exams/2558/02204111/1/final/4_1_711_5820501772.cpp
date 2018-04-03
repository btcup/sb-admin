#include <iostream>
using namespace std ;

int GetIntVal(string strConvert) {
    int intReturn;
    intReturn = atoi(strConvert.c_str());
    return (intReturn);
    }
int Dec2X(int a,int b){
    int x=10,c,d,e,f,g,h ;
    c = a/b ;
    d = a%b ;
    e = c/b ;
    f = c%b ;
    g = e/b ;
    h = g%b ;
    
    cout<<a<<"b"<<x<< " is " <<g<<f<<d<<"b"<<b <<endl;
    return x ;
    
}
int main(){
    int n,t ;
   
    for(;n>0;){
    cout<<"Enter decimal number : " ;
    cin>> n;
    cout<<"Enter base (2-9) : " ;
    cin>>t;
    Dec2X(n,t);
    
    }
    system("pause");
    return 0 ;
}
    
