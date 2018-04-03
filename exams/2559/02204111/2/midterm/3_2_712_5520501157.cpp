//5520501157_miss Thidarat Wansamngam
#include<iostream>
using namespace std;
int main()
{
    double unitx,unit1,unit2,total;
   cout<<"Enter electricity cost per unit : ";
    cin>>unitx; 
    
    cout<<"Enter last unit : ";
    cin>>unit1; 
    
    cout<<"Enter current unit : ";
    cin>>unit2; 
    
   if(unit1>=1&&unit1<unit2)
{   cout<<"Units used = "<< unit2-unit1<<endl;    
    cout<<"Electricity charge(bahts)= "<<(unit2-unit1)*unitx<<endl;  
 

   
}
  
  
  
   else
   cout<<"Enter last unite : ";
   
   
    system("pause");
    return 0;
    }
