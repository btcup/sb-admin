//5920503505 Parithat Impad
#include<iostream>
using namespace std;
int main()
{
    char Vehicle;
    float time1,time2,time3;
    time3;
    int time4,time5;
    cout<<"type of Vehicle((C)Car or (M)Motorcycle):";
    cin>>Vehicle;
    if(Vehicle=='C'||Vehicle=='M')
    {
                                  cout<<"Arrival time :";
                                  cin>>time1;
                                  cout<<"Leave time :";
                                  cin>>time2;
                                  time1=time1*60;
                                  time2=time2*60;
                                  if(time1<time2){
                                                  time3=time2-time1;
                                                  time4=time3/60;
                                                  cout<<time4<<" hours and "<<" minutes";                                                 
                                                  if(time4>0){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
                                                  }
                                                  }
                                  else 
                                  cout<<"You can't leave before arrival"<<endl;
                                                             
    }
    else 
    cout<<"Error input"<<endl;
    system("pause");
    return 0;
}
