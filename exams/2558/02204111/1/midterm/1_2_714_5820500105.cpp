#include<iostream>
using namespace std;
int main (){
    int num1,num2,sum,i=1,sum2=0;
    while (num1>0){
                         cout<<"Enter employee ID and Salary : ";
                         cin>>num1>>num2;
                         sum=num1+i-1;
                         i++;
                         if (num2>=15000&&num2<=25000){
                                                       sum2+=1;
                                                       }
          }
    cout<<"Number of employers in the company = " <<sum;
    cout<<"\nNumber of salaries between 15,000-25,000 = "<<sum2<<endl;
    
    
    

    system ("pause");
    return 0;
    }
