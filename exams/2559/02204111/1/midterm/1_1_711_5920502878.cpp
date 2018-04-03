#include<iostream> //5920502878 Vorapop Thungsripan
using namespace std;
int main()
{
    int n,i;
    float x,a,d,sum;
    i=0;
    sum=0;
    x=0;
    cout<<"Enter n, a, and d: ";
    cin>>n>>a>>d; 
    do
    {
          do
          {
          if((a==0||d==0)||(n<=0)) 
          {
          if(n<=0)
          cout<<"n cannot be both a nagative integer and zero"<<endl;
          if(a==0||d==0)
          {
                        if(a==0)
                        cout<<"a cannot a zero "<<endl;
                        else if(d==0)
                        cout<<"d cannot a zero "<<endl;
                        else if (a==0&&d==0)
                        cout<<"a and d cannot be a zero "<<endl;
          }
          cout<<"Enter n, a, and d: ";
          cin>>n>>a>>d;
          }
          }while ((a==0||d==0)||(n<=0)) ;
          
          
          if(i==0)
          cout<<"The arithmetic progression of n="<<n<<" a="<<a<<" d="<<d<<" :"<<endl;
          x=a+(d*i);
          cout<<x<<"\t";
          sum=sum+x;
          i=i+1;
    }while(i<n);
          cout<<endl;
          cout<<"The summation:"<<sum<<endl;
          system ("pause");
          return 0;
}
          
          
          
          
    
