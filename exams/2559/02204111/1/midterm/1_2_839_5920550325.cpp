#include <iostream>
using namespace std;
int main()
{
	char x,y;
	float a,b,c,d=0,i=0;
	cout<<"Enter objective(Living Agriculture) : ";
	cin>>x;
	if(x=='L')
	{
	    cout<<"Enter living type(Main, Second) : ";
	    cin>>y;
	    cout<<"Enter land cost (million) : ";
	    cin>>a;
		if(y=='M')
		{
			cout<<"Enter building cost (million) :";
			cin>>b;
			cout<<"Building age :";
			cin>>c;
			if(c>0)
			{
			if(c>0&&c<=15)	
			d=c*1.2;
			if(c>15&&c<=40)
		          d=d+((15*1.2)+(c-15)*2.5);
		          }
			if(a>=0&&a<50)
		          {
			cout<<"Your estate cost is "<<a+(b-(b*(d/100)))<<"("<<a<<"+"<<b-(b*(d/100))<<")"<<"million bath."<<endl;
			cout<<"The land tax is exemption."<<endl;
			if(a>=50&&a<100)
			{
			cout<<"Your estate cost is "<<a+(b*10/12)<<"("<<a<<"+"<<b/d<<")"<<"million bath."<<endl;
			cout<<"The land tax is "<<endl;//don't Know land tax . What does it's mean?
		          }
		          }
		          
	}         
}
if(x=='S')
	if(x=='A')
	{
		 cout<<"Enter land cost (million) : ";
	           cin>>a;
	           if(a>=0&&a<40)
	           {
	           cout<<"Your estate cost is "<<a<<" million bath."<<endl;
	           cout<<"The land tax is exemption."<<endl;
	           }
	           if(a>=40&&a<80)
	           {
	           cout<<"Your estate cost is "<<a+(a*0.04/100)<<" million bath."<<endl;
	           cout<<"The land tax is "<<a*0.04/100<<" million bath"<<endl;
	           }
	           if(a>=80)
	           {
	           cout<<"Your estate cost is "<<a+(a*0.08/100)<<" million bath."<<endl;
	           cout<<"The land tax is "<<a*0.08/100<<" million bath"<<endl;
	           }
	}
	
	system("pause");
	return 0;
         }
