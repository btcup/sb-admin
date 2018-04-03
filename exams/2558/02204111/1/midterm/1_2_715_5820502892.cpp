#include<iostream>
using namespace std;
int main()
{
    int a,b,i=0,j=0,;
    do{
        cout<<"Enter employee ID and Salary: ";
        cin>>a>>b;
        if(a<=0)
        break;
        else
        {
        i++;
        if(b>=15000&&b<=25000)
        j++;
        }
        }while(true);
        cout<<"Number of employers in the company = "<<i<<endl;
        cout<<"Number of salaries between 15,000-25,000 bath = "<<j<<endl;
        system("pause");
        return 0;
        }
