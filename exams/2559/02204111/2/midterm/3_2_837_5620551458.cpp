#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 float cost,charge;
 int last,current,unit;
 cout<<"Enter electricity cost per unit (bath) :";
 cin>>cost;
 cout<<"Enter last unit :";
 cin>>last;
           if(last>99999)
           {
           cout<<"end of calculation"<<endl;
           }
           else if(last<0)
            {
           cout<<"Invalid current unti!"<<endl;
           }
 cout<<"Enter current unit :";
 cin>>current;
              if(current<last)
              {
              cout<<"Invalid current unti!"<<endl;
              }
              else if((current-last)>0)
              {
 unit=(current-last);
 cout<<"Units used ="<<unit<<endl;
 charge=(current-last)*cost;
 cout<<"Electricity charge (baths) = "<<charge<<endl;
}
else if((current-last)<0)
{cout<<"Invalid current unti!"<<endl;}
    
    
    
    
    system("pause");
    return 0;
}
