#include<iostream>
using namespace std;
int main()
{
  int n,s,i,sum;
  i=0;
  sum=0;
  for(i=0;n!=0;i++)
  {
    cout<<"Enter employee Id and salary :"  ;
    cin>>n>>s ;
    if(s>=15000&&s<=25000)
    {
      sum=sum+1;                    
    }
    
                
  }
  cout<<endl;
  cout<<"Number of employee in the company ="<<(i-1)<<endl;
   cout<<"Number of  salaries between 15'000-25000 bath ="<<sum<<endl;
  
  
  
    
  system("pause");
  return 0;  
  }
