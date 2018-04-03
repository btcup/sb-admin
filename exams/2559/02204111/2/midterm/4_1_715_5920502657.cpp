//5920502657 Jirapha Pitipat
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     float x,y;
    char A;
    cout<<"Type of vehicle((C)Car or (M)Motorcycle) :" ;
    cin>>A;
    cout<<"Arrival time :";
    cin>>x;
    cout<<"Leave time :";
    cin>>y;
    
  if (A=='M')
  { 
   if(y-x<0)
   cout<<"You can't leave before arrival time"<<endl;
   else if (y-x<=3.00)
   cout<<"You have to pay 0 bath"<<endl;
   else if (y-x<=4.00&&y-x>3.00)
   cout<<"You have to pay 10 bath"<<endl;
   else if (y-x<=5.00&&y-x>4.00)
   cout<<"You have to pay 20 bath"<<endl;
   else if (y-x<=6.00&&y-x>5.00)
   cout<<"You have to pay 30 bath"<<endl;
   else if (y-x<=7.00&&y-x>6.00)
   cout<<"You have to pay 40 bath"<<endl;
   else
   cout<<"You have to pay 150 bath"<<endl;
   }
   else
   { if (y-x<0)
   cout<<"You can't leave before arrival time"<<endl;
    else if (y-x<=2.00)
   cout<<"You have to pay 0 bath"<<endl;
   else if (y-x<=3.00&&y-x>2.00)
   cout<<"You have to pay 30 bath"<<endl;
   else if (y-x<=4.00&&y-x>3.00)
   cout<<"You have to pay 60 bath"<<endl;
   else if (y-x<=5.00&&y-x>4.00)
   cout<<"You have to pay 90 bath"<<endl;
   else if (y-x<=6.00&&y-x>5.00)
   cout<<"You have to pay 140 bath"<<endl;
    else if (y-x<=7.00&&y-x>6.00)
   cout<<"You have to pay 190 bath"<<endl;
    else if (y-x<=8.00&&y-x>7.00)
   cout<<"You have to pay 240 bath"<<endl;
    else 
   cout<<"You have to pay 500 bath"<<endl;
   }
system("pause");
return 0;
}
