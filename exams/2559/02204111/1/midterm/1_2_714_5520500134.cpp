#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	//5520500134 Mr.wahtcharain chookbunprasong
	float n,b,y; //n=land cost,b=building cost,y=age
	char L,A,M,S;
	
	
	cin>>L>>A;
	
	if(L==L)
		{
			cout<<"Enter objective (Living, Agriculture) :"<<L<<endl;
			cin>>M>>S>>n>>b>>y;
		}
		
			if(M==M)
			{
				cout<<"Enter living type (Main, Second) :"<<M<<endl;
				cout<<"Enter land cost (million) :"<<n<<endl;
				
			}
				else if(n<50)
				{
					cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
					cout<<"The land tax is"<<"..."<<"million bath"<<endl;
					cout<<"Enter building cost (million) :"<<b<<endl;
					cout<<"Building age :"<<y<<endl;
				}
				else if(n>=50||n<100)
				{
					cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
					cout<<"The land tax is"<<"..."<<"million bath"<<endl;
					cout<<"Enter building cost (million) :"<<b<<endl;
					cout<<"Building age :"<<y<<endl;
				}
				else if(n>100)
				{
					cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
					cout<<"The land tax is"<<"..."<<"million bath"<<endl;
					cout<<"Enter building cost (million) :"<<b<<endl;
					cout<<"Building age :"<<y<<endl;
				}
			
			else if(S==S)
			{
				cout<<"Enter living type (Main, Second) :"<<S<<endl;
				cout<<"Enter land cost (million) :"<<n<<endl;
			}
				else if(n<50)
				{
					cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
					cout<<"The land tax is"<<"..."<<"million bath"<<endl;
					cout<<"Enter building cost (million) :"<<b<<endl;
					cout<<"Building age :"<<y<<endl;
				}
				else if(n>=50||n<100)
				{
					cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
					cout<<"The land tax is"<<"..."<<"million bath"<<endl;
					cout<<"Enter building cost (million) :"<<b<<endl;
					cout<<"Building age :"<<y<<endl;	
				}
				else if(n>100)
				{
					cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
					cout<<"The land tax is"<<"..."<<"million bath"<<endl;
					cout<<"Enter building cost (million) :"<<b<<endl;
					cout<<"Building age :"<<y<<endl;
				}
			
		
	 if(A==A)
		{
		    cin>>n;
			cout<<"Enter objective (Living, Agriculture) :"<<A<<endl;
			cout<<"Enter land cost (million) :"<<n<<endl;
		}
			else if(n<40)
			{
				cout<<"Your estate cost is"<<n<<"million bath"<<endl; 
				cout<<"The land tax is exemption"<<endl;
			}
			else if(n>=40||n<80)
			{
				cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
				cout<<"The land tax is"<<"..."<<"million bath"<<endl;
			}
			else if(n>80)
			{
				cout<<"Your estate cost is"<<"..."<<"million bath"<<endl; 
				cout<<"The land tax is"<<"..."<<"million bath"<<endl;
			}
	
	system ("pause");
	return 0 ;
}
