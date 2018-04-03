//5920550856 Ratchanon Srisuwan 
#include<iostream>
using namespace std;
int main()
{
    double per_unit;
    float charge,total;
    int last_unit,cur_unit,unit_used;
    do
    {
    cout<<"Enter elsctricity cost per unit (baths) : ";
    cin>>per_unit;
    }while(per_unit<=0);
    do
    {
    cout<<"Enter last unit : ";
    cin>>last_unit;
    if(last_unit==-1){
                      cout<<"-- End of Calculation --"<<endl;
                      break;
                      }
    cout<<"Enter current unit :";
    cin>>cur_unit;                                                
    unit_used = cur_unit - last_unit;
    cout<<"Units used = "<<unit_used<<endl;
    charge = unit_used*per_unit;
    cout<<"Electricity charge (baths) = "<<charge<<endl;
    }while(last_unit != -1&&cur_unit !=-1);
    cout<<"Total of electricity charge (baths) = "<<total<<endl;
    total =+ charge;
    system("pause");
    return 0;
}
    

