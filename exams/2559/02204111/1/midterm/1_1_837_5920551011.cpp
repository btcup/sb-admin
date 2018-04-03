// 5920551011 Napongthon Punchong

#include<iostream>
using namespace std;
int main()
{
    
    double n,a,d;
    cout<<"Enter n, a and d : " ;
    cin>>n>>a>>d;
    do 
    {
          
           if(n<=0&&a!=0&&d!=0)
           cout<<" n cannot be both a negative integer and a zero ";
           else if(n<=0&&a==0||d==0)
           cout<<"n cannot be both a negative integer and a zero"<<endl;
           cout<<" and d cannot be zeros";
           else if(n==0&&a==0&&d==0)
           cout<<"n cannot be both a negative integer and a zero"<<endl;
           cout<<"a and d cannot be zeros";
           else if(n>1&&a==0&&d!=0)
           cout<<"a cannot be a zero";
           else if(n>1&&a!=0&&d==0)
           cout<<" d cannot be zero";
           else
           cout<<"The arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<endl;
           cout<<a-d<<
           cout<<"The summation :"<<n<<;
           
           
           
        
           
           
           
    
    
    
    }
    while(n==8959)
           
           
                                
                                           
    
    
    
    
    system("pause");
    return 0;
}
