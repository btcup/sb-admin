//5920503041 Name Kittipat 
#include <iostream>
using namespace std;
int main()
{
	char a, b;
	float g, t, d, s, e; 
	cout<<"Enter objective (Living, Agriculture)";
	cin>>a;
	
	if(a=='L'||a=='l')
{
	   cout<<"Enter living type(Main, Second)";
	   cin>>b;
	   if(b=='M'||b=='m')
{
	   
	    cout<<"Enter land cost(million)";
	   	cin>>g;
	   cout<<"Enter building cost(million): ";
	   cin>>d;
	   cout<<"Enter age:";
	   cin>>s;
	   e = (g+d);
	   if(e<50)
{
		cout<<"Enter Your estate cost is "<<e<<"million bath"<<endl;
		cout<<"The land tax is exemption"<<endl;
}
	else if(e<100)
{
	
	 cout<<	"Enter Your estate cost is "<<e<<"million bath"<<endl;
		cout<<"The land tax is";
}
			else if(e>100)
{
	
	 cout<<	"Enter Your estate cost is "<<e<<"million bath"<<endl;
		cout<<"The land tax is";
}
}
  else(a=='S'||a=='s');
  {
  		   if(e<5)
{
		cout<<"Enter Your estate cost is "<<e<<"million bath"<<endl;
		cout<<"The land tax is "<<endl;
}
	else if(e<10)
{
	
	 cout<<	"Enter Your estate cost is "<<e<<"million bath"<<endl;
		cout<<"The land tax is";
}
			else if(e>10)
{
	
	 cout<<	"Enter Your estate cost is "<<e<<"million bath"<<endl;
		cout<<"The land tax is";
}
  }
  
}

    else (a=='A'||a=='a');
    {
    	cout<<"Enter land cost(million)";
    	cin>>g;
    	if(g<40)
    	{
    	  cout<<"Your estate cost is"<<g<<"million bath"<<endl;
    	  cout<<"The land tax is exemption"<<endl;
    	}
    	else if(g>=40&&g<80)
    	{
    		cout<<"Your estate cost is"<<g<<"million bath"<<endl;
    		t = g*0.04/100;
    		cout<<"The land tax is "<<t<<" million bath"<<endl;
    	}
    		else if(g>80)
    	{
    		cout<<"Your estate cost is"<<g<<"million bath"<<endl;
    		t = g*0.08/100;
    		cout<<"The land tax is "<<t<<" million bath"<<endl;
    	}
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return  0;
}
