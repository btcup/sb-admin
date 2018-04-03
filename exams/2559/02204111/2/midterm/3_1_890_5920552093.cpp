//5920552093 sarit methaporn
#include <iostream>
using namespace std;
int main ()
{
    float a,b,c=20.0,d=50.0,;
    cout<<"Arrival time: ";
    cin>>a;
    cout<<"Leave time: ";
    cin>>b;
     if (a>b)
   {
       cout<<" You can't leave before arrival time";
    }                
    else if ((b-a)*60.0<194.0)
    {
         cout<<float(b-a)-0.1<<"hours and"<<float(b-a)-3.0<< "minutes"<<endl;
         cout<<"You have to pay 0 bath";
         }
         else if ((b-a)*60>194.0&&(b-a)*60<374.0)
         {
             cout<<(b-a)-0.83<<"hours and"<<(b-a)-0.380<< "minutes"<<endl;
             cout<<"You have to pay "<<20+c<<" bath";
             }
             else if ((b-a)*60>374.0&&(b-a)*60<494.0)
             {
                  cout<<(b-a)-0.55<<"hours and"<<(b-a)-7.40<< "minutes"<<endl;
                  cout<<"You have to pay "<<50+d+60<<" bath";
                  }
                  else if((b-a)*60>494.0)
                  {
                  cout<<(b-a)-0.60<<"hours and"<<(b-a)-9.40<<"minutes"<<endl;
                  cout<<"You have to pay 500 bath";
                  }
                  

    
system ("pause");
return 0;
}




