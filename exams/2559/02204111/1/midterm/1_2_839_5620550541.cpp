#include <iostream>// 5620550541 NANTHAKORN KLINJAN
using namespace std;
int main()
{
	char obj,livtype;
	float land,build,taxhome,adjustbu;
	int age;
	cout<<"Enter object(Living,Aggricuture):";
 	cin>>obj;
 	if(obj =='L')
 	{
 		cout<<"Enter living type (Main,Second):";
 		cin>>livtype;
 		if(livtype=='M')
 		{
 			cout<<"Enter land cost(millon):";
 			cin>>land;
 			cout<<"Enter building cost(millon):";
 			cin>>build;
 			cout<<"Building age:";
 			cin>>age;
 			if((1<=age)&&(age<=15)) taxhome=1.2*age;
 			if((16<=age)&&(age<=40)) taxhome=(1.2*15)+((age-15)*2.5);
 			if(age>=41) taxhome=65;
 			if((land+build)<50)
 			{
 				adjustbu=build-build*(taxhome/100);
 				cout<<"Your estate cost is"<<(land+adjustbu)<<"("<<land<<"+"<<adjustbu<<")"<<"million bath."<<endl;
 				cout<<"The land tax is exemption";
 			}
 			else if(50<=(land+build)&&(land+build)<100)
 			{
 				adjustbu=build-build*(taxhome/100);
 				cout<<"Your estate cost is"<<(land+adjustbu)<<"("<<land<<"+"<<adjustbu<<")"<<"million bath."<<endl;
 				cout<<"The land tax is "<<(land+adjustbu)*(0.06/100)<<"million bath";
 			}
 				else if((land+build)>=100)
 			{
 				adjustbu=build-build*(taxhome/100);
 				cout<<"Your estate cost is"<<(land+adjustbu)<<"("<<land<<"+"<<adjustbu<<")"<<"million bath."<<endl;
 				cout<<"The land tax is "<<(land+adjustbu)*(0.12/100)<<"million bath";
 			}
 		}
 		if(livtype=='S')
 		{
 			cout<<"Enter land cost(millon):";
 			cin>>land;
 			cout<<"Enter building cost(millon):";
 			cin>>build;
 			cout<<"Building age:";
 			cin>>age;
 			if((1<=age)&&(age<=15)) taxhome=1.2*age;
 			if((16<=age)&&(age<=40)) taxhome=(1.2*15)+((age-15)*2.5);
 			if(age>=41) taxhome=65;
 			if((land+build)<5)
 			{
 				adjustbu=build-build*(taxhome/100);
 				cout<<"Your estate cost is"<<(land+adjustbu)<<"("<<land<<"+"<<adjustbu<<")"<<"million bath."<<endl;
 				cout<<"The land tax is "<<(land+adjustbu)*(0.3/100)<<"million bath";
 			}
 			else if(5<=(land+build)&&(land+build)<10)
 			{
 				adjustbu=build-build*(taxhome/100);
 				cout<<"Your estate cost is"<<(land+adjustbu)<<"("<<land<<"+"<<adjustbu<<")"<<"million bath."<<endl;
 				cout<<"The land tax is "<<(land+adjustbu)*(0.6/100)<<"million bath";
 			}
 				else if((land+build)>=10)
 			{
 				adjustbu=build-build*(taxhome/100);
 				cout<<"Your estate cost is"<<(land+adjustbu)<<"("<<land<<"+"<<adjustbu<<")"<<"million bath."<<endl;
 				cout<<"The land tax is "<<(land+adjustbu)*(0.9/100)<<"million bath";
 			}
 		}
 	}
 	 else if(obj =='A')
 	{
 		cout<<"Enter land cost(millon):";
 		cin>>land;
 		if(land<40)
 		{
 			cout<<"estate cost is"<<land<<endl;
 			cout<<"The land tax is exemption";
 		}
 		if(40<=land&&land<80)
 		{
 			cout<<"estate cost is"<<land<<endl;
 			cout<<"The land tax is "<<land*(0.04/100)<<"million bath";
 		
 			if(land>=80)
 		{
 			cout<<"estate cost is"<<land<<endl;
 			cout<<"The land tax is "<<land*(0.08/100)<<"million bath";
 		}
 	}
 }
	 	system("pause");
	return 0;
}
