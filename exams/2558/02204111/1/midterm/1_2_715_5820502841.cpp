#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,j,salary,sum=0;
    for(j=0;1;j++){
        cout<<"Enter emplotee ID and Salary : ";
        cin>>i>>salary;
        if(i<=0)break;
        if(salary>=15000&&salary<=25000)sum++;
        }
    cout<<"Number of employers in the company = "<<j<<endl;
    cout<<"Number of salaries between 15,000 - 25,000 = "<<sum<<endl;
    system("pause");
    return 0;
}
