//5920503297  Somyot  Mali
#include <iostream>
using namespace std;
int main ()
{
	double a,b,c,d,e,f;
	do{
	
	cout<<"Enter electricity cost per unit (bahts) :";
	cin>>a;
	
}while(a<=0);
	
	do{
		cout<<"Enter last unit :";
		cin>>b;
		if (b>=99999)
			continue ;
		else if(b==-1)
		break ;
		else if (b<0){
			cout<<"Invalid current nnit!"<<endl;
			continue ;
		}
		
		cout<<"Enter current unit : ";
		cin>>c;
		if(c==-1)
		break ;
		else if (c<0){
			cout<<"Invalid current nnit!"<<endl;
		continue ;	
		}
		
		else if (b>c){
			cout<<"Invalid current nnit!"<<endl;
			continue ;
		}
		
		d=c - b;
		cout<<"Units used = "<<d<<endl;
		cout<<"Electricity charge (bahts) = "<<d*a<<endl;
		
	}while(1);
	
	cout<<"-- End of Calculation --"<<endl;
	
	system ("pause");
	return 0;
}
