#include <iostream>
using namespace std;
int main()
{
    double unit,last,curent,used,net,total;
    cout<<"Enter electricity cost per unit (baths) :";  //5920501120 NUSWEE DAVELOH
    cin>>unit;
    cout<<"Enter last unit : ";
    cin>>last;
    if (last<0)
    {
               cout<<"--End of Calcution--"<<endl;
               }
    cout<<"Enter current unit : ";
    cin>>curent;
    
    
                 if (curent<last)
                 {
                                  cout<<"Invalid curent unit!"<<endl;
                                  }
                 else (curent>last);
                 {
                      used=curent-last;
                      cout<<"Unit used : "<<used<<endl;
                      net=used*unit;
                      cout<<"Electricity charge (baths) : "<<net<<endl;
                      }
                      total=net+net;
     cout<<"Tatal of Electricity charge (baths)"<<total<<endl;
                      
system ("pause");
return 0;
}
                 

       
    
