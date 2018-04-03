//5920500034 Natthawadee Sangket 711
#include<iostream>
using namespace std;
int main ()
{
	char n;
	float Arrival,Leave,y;
    int x;
	cout<<"Type of vehicle ((c)car or(m) motorcycle ) :";
	cin>>n;
	cout<<"Arrival time:";
	cin>>Arrival;
	cout<<"Leave time:";
	cin>>Leave;
	x=(int)Leave-(int)Arrival;
    y=Leave-Arrival;
	
	if(n=='m')
	{
		if(x<=3)
	{
		cout<<x<<"hours  and "<<y<<"minutes"<<endl;	
        cout<< "You have to pay 0 bath"<<endl;
	}
	    else if(x<=7&&x>=4)
	    {
	    cout<<x<<"hours  and "<<y<<"minutes"<<endl;	
		 cout<< "You have to pay"<<(x*10) << "bath"<<endl;	
	    }
	
	   else if(x>7)
	    {
	    cout<< "You have to pay 150 bath"<<endl;	 	
	    }
	
	
	
	}
	 else if(n=='c')
	 {
	 		if(x<=2)
		{
		cout<<x<<"hours  and "<<y<<"minutes"<<endl;	
        cout<< "You have to pay 0 bath"<<endl;
	    }
	 	else if(x<=5&&x>=3)
	 	{
	 	 cout<<x<<"hours  and "<<y<<"minutes"<<endl;	
		 cout<< "You have to pay" <<(x*30) <<" bath"<<endl;	
	 	}
		else if(x<=8&&x>=6)	
	 	{
	 	 cout<<x<<"hours  and "<<y<<"minutes"<<endl;
		 cout<< "You have to pay" <<(x*50) <<" bath"<<endl;	
	 	}
	 	else if(x>8)	
	 	cout<< "You have to pay 500 bath"<<endl;
	 }
	
	
		
system ("pause");
return 0;
}
