//5920502622KantarostChaisriwee

#include<iostream>
using namespace std;
int main()
{
    float a,b,w;
    int n,x,y,z;
    cout << "Arrival times : " ;
    cin >> a ;
    cout << "Leave times : " ;
    cin >> b ;
    
    a=(int(a)*60)+(a-int(a))*100;
    b=(int(b)*60)+(b-int(b))*100;
    x = b-a;
    w=x/60;
    y =x%60;
    
    if (y>=15)
    {
              if(w>0&&w<4)
              {
              z=w*0;
              cout<<w<< " hours and " <<y <<" minutes" << endl;
              cout << "You have to pay " << z << " bath" <<endl ; 
              }
              else if(w>=4&&w<=6)
              {
              n=6-int(w);
              z=n*20;
              cout<<w<< " hours and " <<y <<" minutes" << endl ;
              cout << "You have to pay " << z << " bath" <<endl ;
              }
              else if(w>=7&&w<=8)
              {
              z=w*50+50;
              cout<<w<< " hours and " <<y <<" minutes" << endl ;
              cout << "You have to pay " << z << " bath" <<endl ;
              }
              else if (w>8)
              {
              z=500;
              cout<<w<< " hours and " <<y <<" minutes" << endl ;
              cout << "You have to pay " << z << " bath" <<endl ;
              } 
              else
              {
              cout << "You can't leave before arrival times"<<endl;
              }
    }
    else
    {
              if(w>0&&w<4)
              {
              z=w*0;
              cout<<w<< " hours and " <<y <<" minutes" << endl;
              cout << "You have to pay " << z << " bath" <<endl ; 
              }
              else if(w>=4&&w<=6)
              {
              z=w*20;
              cout<<w<< " hours and " <<y <<" minutes" << endl ;
              cout << "You have to pay " << z << " bath" <<endl ;
              }
              else if(w>=7&&w<=8)
              {
              z=w*50;
              cout<<w<< " hours and " <<y <<" minutes" << endl ;
              cout << "You have to pay " << z << " bath" <<endl ;
              }
              else if (w>8)
              {
              z=500;
              cout<<w<< " hours and " <<y <<" minutes" << endl ;
              cout << "You have to pay " << z << " bath" <<endl ;
              } 
              else
              {
              cout << "You can't leave before arrival times"<<endl;
              }
    }
    
    system ("pause");
    return 0;
}
