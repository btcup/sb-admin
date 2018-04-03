//5920503319_Sittichai_Jettanajaroenchai.
#include <iostream>
using namespace std;
int main()
{   char e;
    int h4,h5,g,f,sum;
    float hi,ho,dh;
    cout << "Type of vehicle ((C)Car of (M)Motorcycle) : ";
    cin  >> e;
    if(e=='C'||e=='M')
    { cout << "Arrival time : " ;
      cin  >> hi;
      cout << "Leave time : ";
      cin  >> ho;
     
      dh=ho-hi;
      h4=dh/1;
      h5=(dh-h4)*100;
      if(h5>40)
      h5=h5-40;
      if(hi<ho)
    { cout << h4 << " hours and " << h5 <<" minutes " << endl;
          if(h5>0)
          {g=(dh-h4)*10; 
          f=dh+g/g;
          }
          if(e=='C')
          {     
                    if(f<=2)
              {cout << "You have to pay 0 baht" << endl;}
                else if(f<=5)
              {sum=(f-5)*30;
                    cout << "You have to pay " << sum <<" baht" << endl; }
              else if(f<=8)
              {sum=(f-5)*30+(f-5)*50;
                        cout << "You have to pay " << sum <<" baht" << endl; }
               else if(f>8)
              {cout <<"You have to pay 500 baht" << endl;  }
          }
          
          
          else if(e=='M')
          {              if(f<=3)
              {cout << "You have to pay 0 baht" << endl;}
               else if(f<=7)
              {cout << "You have to pay " << (f-3)*10 <<" baht" << endl; }
               else if(f>7)
              {cout <<"You have to pay 150 baht" << endl;}
          
              }
      
    } 
    else cout << "You can't leave before arrival time" << endl;
}
    system ("pause");
    return 0;
}
