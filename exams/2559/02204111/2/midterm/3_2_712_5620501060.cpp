#include <iostream> //5620501060 Napassorn Pluemsut
#include <cmath>
using namespace std;
int main ()
{
    float cost=1,baht,total,sum=0;
    int last=0,current=0,used,i=1;
    if (last!=-1 && current!=-1)
    {
    cout<<"Enter electricity cost per unit (bahts) : ";
    cin>>cost;
    
    while (cost<=1)
    { 
        cout<<"Enter electricity cost per unit (bahts) : ";
        cin>>cost;  
    }
    cout<<endl;
   
   while (i>=1)
   {
      if(last!=1 && current!=1)
      {
      cout<<"Enter last unit : ";
      cin>>last;
      cout<<"Enter current unit : ";
      cin>>current;
      used=current-last;
      cout<<"Unit used = "<<used<<endl;
      total=cost*used;
      cout<<"Electricity change (bahts) = "<<total<<endl;
      i++;
      cout<<endl;
      }
      else if (last>=10000)
      cout<<"Invalid current unit!"<<endl;
      else if (last==1 && current==1)
      cout<<"--End of Calculation--"<<endl;
   }
  
}
else 
cout<<"--End of Calculation--"<<endl;

total=total+i;
cout<<"Total of Electricity charge (baht) ="<<total<<endl;

      
    system ("pause");
    return 0;

}
