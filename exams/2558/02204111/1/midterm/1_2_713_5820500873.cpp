#include<iostream>
using namespace std;
int main()
{
    int numofem = 0 , salary , ID , i;
    for(i = 1 ; true ; i++)
    {
          cout << "Enter employee ID and Salary : ";
          cin >> ID >> salary;
          if(ID == 0) break;
          if(salary >= 15000 && salary <= 25000) numofem++;
    }
    cout << endl;
    cout << "Number of employers in the company = " << (i-1) << endl;
    cout << "Number of salaries between 15,000 - 25,000 bath = " << numofem << endl;
    system("pause");
    return 0;
}
