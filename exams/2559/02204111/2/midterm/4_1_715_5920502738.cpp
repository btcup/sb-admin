// 5920502738 Natthanai  Chaikhodchaban
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char Type_of_vehicle;
    float x,y,z,a,b,c;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
    cin>>Type_of_vehicle;
    if(Type_of_vehicle=='C')
    {
        cout<<"Arrival time :";
        cin>>x;
        cout<<"Leave time :";
        cin>>y;
        a=y-x;
        b=floor(y-x)*10;
        if(ceil(a)>0&&ceil(a)<=3)
        {    
                     cout<<floor(a)<<"hours and"<<b<<"minutes"<<endl;
                     cout<<"You have to pay 0 bath";
                     }
        else if (ceil(a)>=4&&ceil(a)<=7)
        {
             z=(ceil(a)-3)*10;
             cout<<floor(a)<<"hours and"<<b<<"minutes"<<endl;
             cout<<"You have to pay"<<z<<"bath";
             }
             
                     }
    system("pause");
    return 0;
}
