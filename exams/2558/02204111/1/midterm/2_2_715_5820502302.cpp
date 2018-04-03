#include<iostream>
#include<cmath>
using namespace std;
int main()
{   float h,w,d,n,k,total1,total2,total;
    
    char x,y;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Plese enter room size in meter(HxWxD):";
    cin>>h>>w>>d;
    cout<<"Plese select floor tile...(A/B/C):";
    cin>>x;
    cout<<"Plese select wall tile...(A/B/C):";
    cin>>y;
    cout<<"-----------------------------------"<<endl;
    n=w*d*100;
    k=h*w*48100;
    total1=0;
    total2=0;
    if(x=='a'||x=='A')
    {cout<<"Number of floor tiles: "<<n<<"--> Price = "<<n*55<< "Baht"<<endl;
     total1=total1+n*55;
      if(y=='a'||y=='A')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*17<< "Baht"<<endl;
      total2=total2+k*17;
      }
      else if(y=='b'||y=='B')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*32<< "Baht"<<endl;
      total2=total2+k*32;
      }
      else if(y=='c'||y=='C')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*50<< "Baht"<<endl;
      total2=total2+k*50;
      }
    }
   else if(x=='b'||x=='B')
   {  cout<<"Number of floor tiles: "<<n<<"--> Price = "<<n*80<< "Baht"<<endl;
      total1=total1+n*80;
      if(y=='a'||y=='A')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*17<< "Baht"<<endl;
      total2=total2+k*17;
      }
      else if(y=='b'||y=='B')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*32<< "Baht"<<endl;
      total2=total2+k*32;
      }
      else if(y=='c'||y=='C')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*50<< "Baht"<<endl;
      total2=total2+k*50;
      }
    }
    else if(x=='c'||x=='C')
   {  cout<<"Number of floor tiles: "<<n<<"--> Price = "<<n*90<< "Baht"<<endl;
      total1=total1+n*90;
      if(y=='a'||y=='A')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*17<< "Baht"<<endl;
      total2=total2+k*17;
      }
      else if(y=='b'||y=='B')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*32<< "Baht"<<endl;
      total2=total2+k*32;
      }
      else if(y=='c'||y=='C')
      {  cout<<"Number of wall tiles: "<<k<<"-->Price = "<<k*50<< "Baht"<<endl;
      total2=total2+k*50;
      }
    }
    total=total1+total2;
    cout<<"Total price : "<<total2<<"+"<<total1<<"="<<total<<"Baht"<<endl;
    system("pause");
    return 0;

}
