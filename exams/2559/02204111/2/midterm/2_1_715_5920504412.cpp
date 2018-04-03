//Eaktawat phupanaind//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,y,fi,h,i,j,am,mo,k,sum;
    char t;
    
    h=1385000;
    i=511500;
    j=738000;
    k=694000;
    cout<<"Enter car model:";
    cin>>t;
    cout<<"Enter number of years:";
    cin>>y;
    cout<<"Enter your salary :";
    cin>>x;
    cout<<"-------------------------------"<<endl;
    if(t=='A')
    {
              fi = j-(j*0.25);
           cout<<"Financing amount : "<<fi<<endl;
              am = (fi*.0209*y);
           cout<<"Amount of interest : "<<am<<endl;
              sum = fi+am;
              mo = double(sum/y*12);
           cout<<"Mounthly payment : "<<mo<<endl;
           if(mo<=x/2)
           {
             cout<<"good decision ,enjoy you new car"<<endl;       
            }
           else if(x/2<mo)
            {
             cout<<" The monthly payment is over than 50% of you salary";         
            }
    }   
    else if(t=='B')
    {
         fi = i-(i*0.25);
           cout<<"Financing amount :" <<fi<<endl;
              am = float(fi*.0179*y);
           cout<<"Amount of interest : "<<am<<endl;
              mo = (fi+am)/(y*12);
           cout<<"Mounthly payment : "<<mo<<endl;
           if(x/2>=mo)
           {
             cout<<"good decision ,enjoy you new car";         
            }
           else if(x/2<mo)
            {
             cout<<" The monthly payment is over than 50% of you salary";         
            }
         
     }
     else if(t=='C')
     {
          fi = j-(j*0.25);
           cout<<"Financing amount : "<<fi<<endl;
              am = float(fi*.0199*y);
           cout<<"Amount of interest : "<<am<<endl;
              mo = (fi+am)/(y*12);
           cout<<"Mounthly payment : "<<mo<<endl;
           if(x/2>=mo)
           {
             cout<<"good decision ,enjoy you new car";         
            }
           else if(x/2<mo)
            {
             cout<<" The monthly payment is over than 50% of you salary";         
            }
          
      }
      else if (t=='J')
      {
           fi = k-(k*0.25);
           cout<<"Financing amount : "<<fi<<endl;
              am = float(fi*.0199*y);
           cout<<"Amount of interest : "<<am<<endl;
              mo = (fi+am)/(y*12);
           cout<<"Mounthly payment : "<<mo<<endl;
           if(x/2>=mo)
           {
             cout<<"good decision ,enjoy you new car";         
            }
           else if(x/2<mo)
            {
             cout<<" The monthly payment is over than 50% of you salary";         
            }
           
       }
         
         system ("pause");
          return 0;
          }
