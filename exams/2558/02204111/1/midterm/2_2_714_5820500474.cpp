#include <iostream>
#include<cmath>
using namespace std;
int main ()
{   
    char name,id;
    float h,w,d,l,m,n,o,p,q;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H*W*D) :";
    cin>>h>>w>>d;
    cout<<"Please select floor tile...(A/B/C) :";
    cin>>name;
    cout<<"Please select wall tile...(A/B/C) :";
    cin>>id;
   
            if(name=='A'||name=='a')
     {l=(w*100)*(d*100);
     n=l/(30*30);
     m=(n*55);
     cout<<"Number of floor tile :"<<n<<"Price = "<<m<<" Bath"<<endl;}
     else if(id=='A'||'a'){
     o=((h*100)*(w*100))*4;
     p=o/(20*20);
     q=(p*17);
     cout<<"Number of wall tile :"<<p<<"Price = "<<q<<" Bath"<<endl;}
             else if(name=='A'||name=='a')
     {l=(w*100)*(d*100);
     n=l/(30*30);
     m=(n*55);
     cout<<"Number of floor tile :"<<n<<"Price = "<<m<<" Bath"<<endl;}
      if(id=='B'||'b'){
     o=((h*100)*(w*100))*4;
     p=o/(20*30);
     q=(p*32);
     cout<<"Number of wall tile :"<<p<<"Price = "<<q<<" Bath"<<endl;}
              else if(name=='A'||name=='a'&&id=='C'||'c')      
     {l=(w*100)*(d*100);
     n=l/(45*45);
     m=(n*80);
     cout<<"Number of floor tile :"<<n<<"Price = "<<m<<" Bath"<<endl;
     o=((h*100)*(w*100))*4;
     p=o/(30*30);
     q=(p*50);
     cout<<"Number of wall tile :"<<p<<"Price = "<<q<<" Bath"<<endl;}
                   else if(name=='B'||name=='b'&&id=='B'||'b')      
     {l=(w*100)*(d*100);
     n=l/(45*45);
     m=(n*80);
     cout<<"Number of floor tile :"<<n<<"Price = "<<m<<" Bath"<<endl;
     o=((h*100)*(w*100))*4;
     p=o/(45*45);
     q=(p*80);
     cout<<"Number of wall tile :"<<p<<"Price = "<<q<<" Bath"<<endl;}
                    else if(name=='B'||name=='b'&&id=='C'||'c')      
     {l=(w*100)*(d*100);
     n=l/(45*45);
     m=(n*80);
     cout<<"Number of floor tile :"<<n<<"Price = "<<m<<" Bath"<<endl;
     o=((h*100)*(w*100))*4;
     p=o/(30*30);
     q=(p*50);
     cout<<"Number of wall tile :"<<p<<"Price = "<<q<<" Bath"<<endl;}
                  else if(name=='C'||name=='c'&&id=='C'||'c')      
     {l=(w*100)*(d*100);
     n=l/(30*30);
     m=(n*50);
     cout<<"Number of floor tile :"<<n<<"Price = "<<m<<" Bath"<<endl;
     o=((h*100)*(w*100))*4;
     p=o/(30*30);
     q=(p*50);
     cout<<"Number of wall tile :"<<p<<"Price = "<<q<<" Bath"<<endl;}
    system ("pause");
    return 0;
}
