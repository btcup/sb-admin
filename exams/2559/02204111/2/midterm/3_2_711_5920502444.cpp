//5920502444 Prathan Phoolakdan
#include <iostream>
using namespace std;
int main ()
{
    int x,y,z;
    float baht;
    cout<<"Enter electricity cost per unit (bahts) : ";
    cin>>baht;
    do
    {
              cout<<"Enter last unit : ";
              cin>>x;
              if(x>=0)
              {
                      cout<<"Enter curr ent unit :";
                      cin>>y;
                      {
                             if(y>0)
                             {
                               z=y-x;
                               if(z>0)
                               {
                                      cout<<"units used = " <<z<<endl;
                                      cout<<"Electricity charge (bahts ) = "<<z*baht<<endl;
                               }
                               else
                               cout<<"Invalid last unit !"<<endl;
                             }
                             
                             else if(y<0)
                             {
                                  cout<<"Invalid last unit !"<<endl;
                             }
                      }
             
              }
              
              else if(x<0)
              {
                   cout<<"Invalid last unit !"<<endl;
              }
              else if((x==-1)||(y==-1))
              {
              cout<<"--End of calculation -- "<<endl;
              cout<<"Total of Electricity charg (baths)"<<endl;
              }
    }
    while((x>=0)||(x<0));
   
    system ("Puase");
    return 0;
}
