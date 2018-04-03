//5920503807 Peerapun Pupanead
#include<iostream>
using namespace std;
int main()
{
    int n,a,i=0;
    float r,x,sum;
    do{
          cout<<"Enter n, a and r:";
          cin>>n>>a>>r;
          
          if (n >0 && a!=0 && r!=0)
          {  
             cout<<"The geomatric progression of n="<<n<<", a="<<a<<", r="<<r<<endl;
             while(i>0)
             {          x=a*(r*i);
                       cout<<x<<endl;
                       sum=x+x;
                        i++;}
             cout<<"The summation:"<<sum<<endl;
             }
          
          else if (n==0)
          {cout<<"n cannot be both a negative integer and a zero"<<endl;}
          else if(a==0)
          {cout<<"a cannot be a zero"<<endl;}
          else if(r==0)
          {cout<<"r cannot be a zero"<<endl;}
          else{
          cout<<"n cannot be both a negative integer and a zero"<<endl;
          cout<<"a and r cannot be a zero"<<endl;}
          
          
    }while (n==0 || a==0 || r==0);
           i++;
    
    system("pause");
    return 0;
}    
    
    
    
    
