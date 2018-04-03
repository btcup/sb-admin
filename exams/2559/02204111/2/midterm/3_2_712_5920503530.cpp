//5920503530 Yotsapon Sawaengkon
#include <iostream>
using namespace std; 
int main ()
{
    int last,cur,unit;
    float x,bahts,total=0;
    do{
          cout<<"Enter electricity cost per unit (banths) : ";
          cin>>x;
          if (x<=0)
                  continue;
          do{
                cout<<"\n"<<"Enter last unit : ";
                cin>>last;
                if(last==-1)
                {
                  cout<<" --End of Calcuation--"<<endl;
                  break;
                }
                if(last>100000||last<0)
                {
                      cout<<"Inbalid current unit !"<<endl;
                      continue;
                }
                cout<<"Enter current unit : ";
                cin>>cur;
                if(cur==-1)
                {
                  cout<<" --End of Calcuation--"<<endl;
                  break;
                }
                if(cur<last||cur>100000||cur<0)
                {
                      cout<<"Inbalid current unit !"<<endl;
                      continue;
                }
                
                unit=cur-last;
                cout<<"Units used = "<<unit<<endl;
                bahts=(unit*x);
                cout<<"Electricity charge (bahts) = "<<bahts<<endl;
                total=total+bahts;
                }while(unit>0); 
    }while(x<=0);
    cout<<"\n"<<"Total of electricity charge (baht) = ";
    cout<<total<<endl; 
    system ("pause");
    return 0;
}


    
