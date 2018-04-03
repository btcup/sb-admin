#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n,a,r,x,s,y;
    int i=0;
    cout<<"Enter n, a and r:"<<endl;
    cin>>n>>a>>r;
do{  
    if(n<=0)
    {cout<<"n cannot be both a negative integer and a zero"<<endl;
    }
    else if(a==0)
    {cout<<"a cannot be zero"<<endl;
    }
    else if(r==0)
    {cout<<"r cannot be zero"<<endl;
    }
   

      else
        {cout<< "The goemetric progression of n="<<n<<", a="<<a<<", r="<<r<<":"<<endl;
        
         x=a*(r*'pow(i)');
         i++;
         s=s+x;
         cout<<s<<endl;
        
         break;}}
         
            while(n>0&&a!=0&&r!=0);
    
     
system("pause");
return 0;
}
