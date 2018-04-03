#include <iostream> //5920503289 Supanut Ubalee
using namespace std;
int main()
{ float cost,last,current,use,x,y=0;
  
  cout<<"Enter electricity cost per unit (bath) : ";
  cin>>cost;
  while (cost<=0)
  {
    cout<<"Enter electricity cost per unit (bath) : ";
    cin>>cost;
  }
  while (cost>0)
  {
  cout<<"Enter last unit : ";
  cin>>last;
             if (last==-1) 
             {
                cout<<"-- End of calculation --"<<endl;
                break;
             }
             else if(last<-1)
             {
                cout<<"Invalid last unit!"<<endl;
                continue;
             }
             else if (last>100000)
             {   
                cout<<"Invalid last unit!"<<endl;
                continue;
             }
  cout<<"Enter current unit : ";
  cin>>current;
               if(current<-1)
               {
                 cout<<"Invalid current unit!"<<endl;
                 continue;
               }
               else if (current==-1)
               {
                 cout<<"-- End of calculation --"<<endl;
                 break;
               }
               else if (current>100000)
             {   
                cout<<"Invalid last unit!"<<endl;
                continue;
             }
  use=current-last;
  cout<<"Units used = "<<use<<endl;
  x=use*cost;
  cout<<"Electricity charge (bath) = "<<x<<endl;
  y+=x;
  }
  cout<<"Total of Electricity charge (bath) = "<<y<<endl;
system ("pause");
return 0;
}
