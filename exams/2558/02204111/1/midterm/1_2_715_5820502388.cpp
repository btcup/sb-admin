#include <iostream>
using namespace std;
int main()
{
    int i,n,m;
    string N[m];
    for(i=1;i>=0;i++){
                      cout<<"Enter employee ID and Salary : ";
                      cin>>n>>m;
                      i++;
                       }
    cout<<"Number of employers in the company = "<<n<<endl;
    if((m>=15000)&&(m<=25000)){
       cout<<"Number of salaries between 15,000 - 25,000 bath = "<<N[m]<<endl;
       }
    system("pause");
    return 0;
}
