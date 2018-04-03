//5920504340 Name Cnammaromg Lastname Potisan
#include<iostream>
using namespace std;
int main ()
{
	int x,y;
  do
  {
  	cout<<"Enter N: ";
	cin>>x;
  }
	while (x<1);
	if (x%6==0)
{
	y=x/6;
		cout<<"The greatest factor of "<<x<<"is"<<y<<endl;
}
	else if (x%3==0)
	{
		y=x/3;
		cout<<"The greatest factor of "<<x<<"is"<<y<<endl;
	}
	
	else if (x%5==0)
	{
		y=x/5;
	    cout<<"The greatest factor of "<<x<<"is"<<y<<endl;
	}
    else
     cout<<"The greatest factor of "<<x<<"is"<<x<<"-->prime number"<<endl;
 
    system("pause");
	return 0;
}
