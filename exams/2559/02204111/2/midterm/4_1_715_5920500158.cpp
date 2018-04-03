//5920500158 ratthasart inpeang
#include <iostream>

using namespace std;
int main()
{
    char type;
    float allhour,allminute,alltime,allpay,timein,timeout,Aminute,Lminute;
    cout<<"type of vechicle ((c) car or(m) motorcycle):";
    cin>>type;
    cout<<"arrival time :";
    cin>>timein;
    cout<<"leave time";
    cin>>timeout;
   
    
  Aminute=(timein-int(timein))*100;
   Lminute=(timeout-int(timeout))*100;
   if(Aminute>Lminute)
   {
   allminute=60-Aminute+Lminute;
   allhour=int(timeout)-int(timein)-1;
   if(allminute>0)
   alltime=allhour+1;
   else
   alltime=allhour;
}
   else
   {
   allminute=60-Lminute-Aminute; 
   allhour=int(timeout)-int(timein);
    if(allminute>0)
   alltime=allhour+1;
   else
   alltime=allhour;
}
   if(timeout>timein)
   {
      if(type=='c')
    
    {
                 if(alltime<=2)
                 allpay=0;
                 else if (alltime>=3&&alltime<=5)
                 allpay=30*alltime;
                 else if(alltime>=6&&alltime<=8)
                 allpay=50*alltime;
                 else if(alltime>=8)
                 allpay=500;
                  cout<<allhour<<"hours and"<<allminute<<"minutes"<<endl;
    cout<<"you have to pay "<<allpay<<endl;
}
        else   if(type=='m')
    
    {
                 if(alltime<=3)
                 allpay=0;
                 else if (alltime>=4&&alltime<=7)
                 allpay=10*alltime;
                 else if(alltime>=7)
                 allpay=150;
                  cout<<allhour<<"hours and"<<allminute<<"minutes"<<endl;
    cout<<"you have to pay "<<allpay<<endl;
                
}      
}
else
cout<<"you cant leave before arrival time "<<endl;

    
    system("pause");
    return 0;
}

                 
         
