//5420551659 Sarawut  Sriwongyarddee

#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h,i,j;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    c=int(a)*60+((a-int(a))*100);
    d=int(b)*60+((b-int(b))*100);
    e=d-c;
  
  if(d-c>0)
  {
    if(e<=194)
    {g=0;
    f=0;
     }
    else if(e>=195&&e<=375)
    {
         if(e<360)
         f=20*(int(e/60)-3);
         else if(e>360)
         {
         if(e-360<15)
         f=20*(int(e/60)-3);
         else if(e-360>=15)
         f=20*(int(e/60)-3)+50;
         }
    }
       else if(e>=376&&e<495)
    {
         if(e<480)
         g=50*(int(e/60)-6);
        else if(e>480)
         {
         if(e-480<15)
         g=50*(int(e/60)-6);
         }
    }
       
         else if(i>=495)
         {
         g=500;
         f=0;
         }
         i=g+f;
      
      h=int(e/60);
      j=(int(e)%60);
      
      cout<<endl;
      cout<<h<<" hours and "<<j<<" minutes"<<endl;
         cout<<"You have to pay "<<i<<"bath"<<endl;
         }
    if((d-c)<0)
    cout<< "You can't leave before arrival time"<<endl;
    system ("pause");
    return 0;
}
   
