#include <iostream>
using namespace std;
int main()
{
	char a,c;
	double x,y,z,cost,tax;
    cout<<"Enter objective (Utilization , Waste) :";
    cin>>a;
    
    if(a=='U')
    {
    
    cout<<"Enter utilization type (Business , Agriculture) :";
    cin>>c;
    
    if(c=='B')
    {
    cout<<"Enter land cost (million) :";
    cin>>x;
    cout<<"Enter building cost (million) :";
	cin>>y;
	cost=x+y;
	
	         if(cost<20)
	         {
	          cout<<"Building age :";
	          cin>>z;
	          cout<<"Your estate cost is"<<cost<<"("<<x<<"+"<<y<<")"<<"million bath.";
	          tax=(cost*0.003);
	          cout<<"The land tax is "<<tax<<"  million bath";
             }
	
	         if(cost>=20&&cost<=50)
	         {
	          cout<<"Building age :";
	          cin>>z;
	          cout<<"Your estate cost is"<<cost<<"("<<x<<"+"<<y<<")"<<"million bath.";
	          tax=(cost*0.005);
	          cout<<"The land tax is "<<tax<<"  million bath";
	         }
	         if(cost>50)
	         {
	          cout<<"Building age :";
	          cin>>z;
	          cout<<"Your estate cost is"<<cost<<"("<<x<<"+"<<y<<")"<<"million bath.";
	          tax=(cost*0.007);
	          cout<<"The land tax is "<<tax<<"  million bath";
	         }
	}
	if(c=='A')
	{
	cout<<"Enter land cost (million) :";
    cin>>x;
    cout<<"Enter building cost (million) :";
	cin>>y;
	cost=x+y;
	
	         if(cost<30)
	         {
	          cout<<"Building age :";
	          cin>>z;
	          cout<<"Your estate cost is"<<cost<<"("<<x<<"+"<<y<<")"<<"million bath.";
	          cout<<"The land tax is "<<"exemption"<<"  million bath";
             }
	
	         if(cost>=30&&cost<=60)
	         {
	          cout<<"Building age :";
	          cin>>z;
	          cout<<"Your estate cost is"<<cost<<"("<<x<<"+"<<y<<")"<<"million bath.";
	          tax=(cost*0.0006);
	          cout<<"The land tax is "<<tax<<"  million bath";
	         }
	         if(cost>60)
	         {
	          cout<<"Building age :";
	          cin>>z;
	          cout<<"Your estate cost is"<<cost<<"("<<x<<"+"<<y<<")"<<"million bath.";
	          tax=(cost*0.012);
	          cout<<"The land tax is "<<tax<<"  million bath";
	         }
	}
    }
    
    if(a=='W')
    { 
    cout<<"land cost (million) :";
    cin>>x;
    cout<<"land age :";
    cin>>z;
       if(z>=1&&z<=3) 
       {
       	cout<<"Your estate cost is "<<x<<" million bath.";
       	cout<<"The land tax is exemption";
       }
       if(z>=4&&z<=6)
       {
       	cout<<"Youe estate cost is "<<x<<" million bath";
       	tax=(0.012*x);
       	cout<<"The land tax is "<<tax<<" million bath.";
       }
       if(z>=7)
       {
       	cout<<"Your estate cost is "<<x<<" million bath.";
       	tax=(0.024*x);
       	cout<<"The land tax is "<<tax<<" million bath.";
       }
    }
    system("pause");
	return 0;
    }
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

