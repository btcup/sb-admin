//5920500271 Chaloemphong Srattharungruang
#include <iostream>
using namespace std;
int main()
{
 int a,b,c;
 double d,sum=0;
 cout << "Enter electricity cost per unit (bahts) : ";
 cin >> d;
 cout << endl;
 do
 {
 	cout << "Enter last unit : ";
 	cin >> a;
 	if(a== -1) 
 	{cout << "-- End of Calculation --"<< endl;break;}
 	else if (a<-1)
 	 {cout<< "Invalid current unit !" <<endl<<endl;continue;}
 	else if (a/100000>1)
 	 {cout<< "Invalid current unit !" <<endl<<endl;continue;}
 	cout<<"Enter current uniy : ";
 	cin >> b;
 	if(b== -1) 
 	{cout << "-- End of Calculation --"<< endl;break;}
 	c=b-a;
 	if (c<0)
 	 {cout<< "Invalid current unit !" <<endl<<endl;continue;}
 	else
	 {
	 cout <<"Unit used = "<< c <<endl;
	 cout << "Electricity charge (bahts) = "<< c*d<<endl;}
 	 cout << endl;
 	 sum=sum+(c*d);
 }
	while(1);  
	cout<<endl; 
 cout << "Total of Electricity cahrge (bahts) = "<< sum << endl;
return 0;
}
