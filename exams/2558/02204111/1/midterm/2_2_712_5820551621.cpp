#include<iostream>
using namespace std;
int main ()
{
    char q,p,y;
    float h,w,d,f,e,j,k;
    int i,a,b,c;
    cout<<"Welcom to the fantastic Tiles!!"<<endl;
    for (i=0;i>=0;i++){
    cout<<"Please enter room size in meter (H * W * D) : ";
    cin>>h>>w>>d;
    cout<<"Please select floor tile....(A/B/C): ";
    cin>>q;
    cout<<"Please select wall tile....(A/B/C): ";
    cin>>p;
    cout<<"----------------------------"<<endl;
    
    cout<<"Number of floor tiles:"<<f<<"-->Price = "<<e<<" Baht";
             if(q==a)
                     {
                    f=(2*((h*100)*(w*100)/20*20))+(2*((h*100)*(d*100)/20*20));
                    e= f*17;
                    }
             else if(q==b)
                    {
                    f=(2*((h*100)*(w*100)/20*30))+(2*((h*100)*(d*100)/20*30));
                    e= f*32;
                    }
             else if(q==c)
                    {
                    f=(2*((h*100)*(w*100)/30*30))+(2*((h*100)*(d*100)/30*30));
                    e= f*50;
                    }
                  cout<<endl;
    cout<<"Number of wall tiles:"<<j<<"-->Price = "<<k<<" Baht";
             if(q==a)
                    {
                    f=(2*((h*100)*(w*100)/30*30))+(2*((h*100)*(d*100)/30*30));
                    e= f*55;
                    }
             else if(q==b)
                    {
                    f=(2*((h*100)*(w*100)/45*45))+(2*((h*100)*(d*100)/45*45));
                    e= f*80;
                    }
             else if(q==c)
                    {
                    f=(2*((h*100)*(w*100)/60*60))+(2*((h*100)*(d*100)/60*60));
                    e= f*90;
                    }
                  cout<<endl;
    cout<<"Press 'y' to calculate new room : ";
    cin>>y;
      if (y==y)
      break;    
    }
    system("pause");
    return 0;
}



















