//5920550562 patcharin  wongsretra
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float CostPerUnit,last,current,x,y;
    cout<<"Enter electricity cost per unit(baths): ";
    cin>>CostPerUnit;
    cout<<"Enter last unit: ";
    cin>>last;
    cout<<"Enter current unit: ";
    cin>>current;
    x=last-current;
    while(current!=-1)
    {
                  if(last<current)
                  cout<<"Unit used = "<<abs(x);
                  y=abs(x)*CostPerUnit;
                  cout<<"Electricity charge(baths)= "<<y;              
    }
    cout<<"-- End of calculation --";
                  system("pause");
                  return 0;
                  }
                  
    
    
