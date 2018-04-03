// 5920502959 Suriya Muangthonglang
#include <iostream>
using namespace std;
int main ()
{
    float n=-1,a,d,sum;
    while (n<0||sum>0)
    {
     cout<<"Enter n, a and d: ";
    cin>>n>>a>>d;
        if (n<0)
        {
                cout<<"n cannot be both a negative integer and a zero"<<endl;continue;
        } 
                cout<<"The arithmetic progression of n="<<n<<" a="<<a<<" d="<<d<<":"<<endl;       
        sum=a+d;
        cout<<sum<<" ";
        d=d+d;
        
    }   
      system("pause");
    return 0;
}
