#include<iostream> //5920503831 Name Phanuwat Rodklongtan
#include<cmath>
using namespace std;
int main()
{
    int x;
   
    do
    { cout<<"input value:"; 
      cin>>x;
      
      if(x>=10)
      {cout<<"Invalid Input !!"<<endl;
      continue;}    
           
    }
    while(x>=0);
    
    cout<<"Your money is "<<x<<endl;
 




system("pause");
return 0;
}
