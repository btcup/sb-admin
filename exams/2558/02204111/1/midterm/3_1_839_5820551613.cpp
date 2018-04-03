#include <iostream>
using namespace std;
int main()
{
    int x,y,z,b;
    char a,N,Y;        
    cout << "Are you member (Y or N):" <<endl;
    cin >> a ;
    cout << "How old are you? :" <<endl;
    cin >> x ;
    cout << "Normal price :" <<endl;
    cin >> b;

    if (a != N) 
       { 
         if(x<=2)         
         {z = b-((b*100)/100);
          cout << "You have to pay "<< z <<" "<<endl;
          }
          else if ( x>2 && x<=12)
          { z = b-((b*70)/100);
            cout << "You have to pay "<< z <<" "<<endl;
          }
          else 
          { z = b-((b*50)/100);
            cout << "You have to pay "<< z <<" "<<endl;
          }
          }     
  else              
         { 
         if (x<=2)
          { z = b-((b*100)/100);
            cout << "You have to pay "<< z <<" "<<endl;
          }
          else if ( x>2 && x<=10)
          { z = b-((b*50)/100);
            cout << "You have to pay "<< z <<" "<<endl;
          }
          else 
          { z = b-(b*(0/100)); 
            cout << "You have to pay "<<z<<" "<<endl;
          }     
}
    system("pause");
    return 0;
}




















