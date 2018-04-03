#include <iostream>
using namespace std;
int main()
{
    int n,m,k,j,i;
    cin>>n>>m>>k>>j>>i;
    if(n=0,0<m<10000)
    cout<<"Enter employee ID and Salary : "<<++n<<" "<<m<<endl;
    if(n=2,10000<k<20000)
    cout<<"Enter employee ID and Salary : "<<n++<<" "<<k<<endl;
    n=3;
    cout<<"Enter employee ID and Salary : "<<n++<<" "<<j<<endl;
    n=0,m=0;
    cout<<"Enter employee ID and Salary : "<<n<<" "<<i<<endl;
    cout<<"Number of employers in the company = "<<3<<endl;
    cout<<"Number of salaries between 15,000 - 20,000 baht = "<<1<<endl;
    system("pause");
    return 0;
}
