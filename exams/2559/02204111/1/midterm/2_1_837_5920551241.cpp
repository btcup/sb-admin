#include<iostream> //5920551241 Name Jetanon Lastname Yaemsin
#include<cmath>
using namespace std;
int main ()
{
        double x,n,a,r,sum,i;
        cout<<"Enter n,a and r:"<<endl;
        cin>>n>>a>>r;
        i = 0;
        sum =0;
        do
        {
            x = a*pow(r,n);
            cout<<"The geometric progression of n = "<<n<<",a = "<<a<<",r = "<<endl;
            sum =sum +x;
            cout <<"The summation :"<<sum<<endl;
            if (n<=0)
            { cout <<"n cannot be both a negative interger and a zero"<<endl;}
        }   
        while (i<=n);
        system ("pause");
        return 0;
} 
        
        
        
         
