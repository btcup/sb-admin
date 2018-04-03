#include <iostream>
using namespace std ;

int main (){
    int a,b,c,d,e,f,g,h,sum=0;
    int i=1 ;   
    cout<<"Enter employee ID and Salary : "<<i<<"  ";                  
    cin>>a;     
    for(i=2;a>0;i++)            
                {
                     cout<<"Enter employee ID and Salary : "<<i<<"  ";
                     cin>>a;
                     b = i-1 ;           
                     if(a>=15000 && a<=25000) sum=sum+1;
                }
                  if  (a<=0) cout<<"Enter employee ID and Salary : "<<"0"<<" "<<"0"<<endl;                   
                cout<<"Number  of  employers in the company  :  "<<b<<endl;
                cout<<"Number  of  salaries between 15,000-25,000 bath = : "<<sum<<endl;
                                                                            
    system("pause");
    return 0 ;
}
