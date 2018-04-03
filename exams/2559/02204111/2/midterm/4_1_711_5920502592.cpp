//5920502592 Anurak Musiksan
#include <iostream>
using namespace std;
int main()
{
	int s,v;
	float x,y,t;
	char C,M;
	cout<<"type of vehicle((C) car or (M)Motorcycle) :";
cin>>C>>M;
switch (C,M)
{

  case 'C' : 
  
{
cout<<"Arrival time :";
	         cin>>x;
	         cout<<"Leave time :";
	         cin>>y;
	           
			     
	         t=y-x;
	         s=(t*100);
	         v=s%100;
	         if(t<=2)
	         {
	         
	          cout<<"you can't leave before arrival time"<<endl;break;
	      }
	          
	           if (t>2&&t<=5)
	           {
	           
	          cout<<int(t)<<"hours and"<<v<<"minutes"<<endl;
	          cout<<"you have to pay "<<int(t)*30<<"bath";break;
	      }
	          
	         if (t>5 && t<=8)
	         {
	         
	           cout<<int(t)<<"hours and"<<v<<"minutes"<<endl;
	          cout<<"you have to pay "<<int(t)*50<<"bath";break;
	      }
	          if (t>8)
	          {
	          	
	          
	           cout<<int(t)<<"hours and"<<v<<"minutes"<<endl;
	          cout<<"you have to pay 500 bath"<<endl;
			  break;
	      }
		}
		
	          
case 'M' : 	
{
 cout<<"Arrival time :";
	         cin>>x;
	         cout<<"Leave time :";
	         cin>>y;
	             
	         t=y-x;  
			 
			    
	           if(t<=3)
	           {
	           
	          cout<<"you have to pay 0 bath"<<endl;break;
	      }
	         if (t>3&&t<=7)
	         {
	         
	          cout<<int(t)<<"hours and"<<v<<"minutes"<<endl;
	          cout<<"you have to pay "<<int(t)*10<<"bath";break;
	      }
	          
	          if (t>7)
	           {
	           cout<<int(t)<<"hours and"<<v<<"minutes"<<endl;
	          cout<<"you have to pay 150 bath"<<endl;
			  }
			  break;
		}
	}
	          
	          
	          system("pause");
	          return 0 ;
	      }
	          
	          
	          
	          
	          
	
	
	

