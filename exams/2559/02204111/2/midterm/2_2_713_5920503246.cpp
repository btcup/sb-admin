#include<iostream>//5920503246 Wiwat kanjanaekkarin
using namespace std;
int main()
{
    int x,n,m;
    cout<<"Enter an integer";
    cin>>x;
    for(n=1;x%n;n*10)
    {
    if(x%n==0)
    continue;
    else if(x%n!=0)
    break;
    }
    
cout<<n<<endl;






system("pause");
return 0;
}
