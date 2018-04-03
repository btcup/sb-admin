//5820502434 Nunchulee Chokananvanich

#include<iostream>
using namespace std;
int main ()
{   
    char vehicly;
    float arrival,leave;
    int a,b,c,d,e,f,x,y,z,t;
    cout<<"Type of vehicly ((C)Car or (M)Motorcycle):";
    cin>>vehicly;   
    if(vehicly=='C')
    {
              cout<<"Arrival time: ";
              cin>>arrival;
              b=(arrival*100.0);     
              c=b-(int(arrival)*100);                   //minutes
              a=(int)arrival*60;                         //hr*60
              
              cout<<"leave time: ";
              cin>>leave;
              d=(leave*100.0);
              e=d-(int(leave)*100);                    //minutes
              f=(int)leave*60;                         //hr*60
              
              x=(f+e)-(a+c);                            //leave - arrival
              y=x%60;                                   //minutes
              z=x/60;                                    //hr
              if(y>=0&&z>=0)
              {
                   cout<<z<<" hours and "<<y<<" minutes"<<endl; 
                   t=(z*60);                  //newwwwwww
                   if(t<=120)
                   {
                    cout<<"You have to pay 0 bath"<<endl;      
                   }
                   else if(t<=300)
                   {
                   cout<<"You have to pay"<<z*30<<"bath"<<endl;      
                   }
                   else if(t<=480)
                   {
                   cout<<"You have to pay"<<(z-2)*50<<"bath"<<endl;      
                   }
                   else if(t>480)
                   {
                   cout<<"You have to pay 500 bath"<<endl;      
                   }
              }
              else
              {
                  cout<<"You can't leave befor arrival time "<<endl;
              }
             
              
    }
     if(vehicly=='M')
    {
              cout<<"Arrival time: ";
              cin>>arrival;
              b=(arrival*100.0);     
              c=b-(int(arrival)*100);                   //minutes
              a=(int)arrival*60;                         //hr*60
              
              cout<<"leave time: ";
              cin>>leave;
              d=(leave*100.0);
              e=d-(int(leave)*100);                    //minutes
              f=(int)leave*60;                         //hr*60
              
              x=(f+e)-(a+c);                            //leave - arrival
              y=x%60;                                   //minutes
              z=x/60;                                    //hr
            
              
             if(y>=0&&z>=0)
              {
                  cout<<z<<" hours and "<<y<<" minutes"<<endl; 
                  t=(z*60);                  //newwwwwww
                  if(t<=180)
                   {
                    cout<<"You have to pay 0 bath"<<endl;      
                   }
                   else if(t<=420)
                   {
                   cout<<"You have to pay"<<z*30<<"bath"<<endl;      
                   }
                   else if(t>420)
                   {
                   cout<<"You have to pay 150 bath"<<endl;      
                   }
              }
              else
              {
                  cout<<"You can't leave befor arrival time "<<endl;
              }
              
    }
    system("pause");
}
