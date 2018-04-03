// 5920500701  Nattapas Jarasrungchawalit
#include <iostream>

using namespace std;
int main ()
{
	int number1,number2,number3,number4;
	cout<<"Enter 1st number : ";
	cin>>number1;
	cout<<"Enter 2nd number : ";
	cin>>number2;
	cout<<"Enter 3rd number : ";
	cin>>number3;
	cout<<"Enter 4th number : ";
	cin>>number4;
	
	if (number1>number2&&number1>number3&&number1>number4&&(number2>number3||number3>number2)&&number2>number4&&number3>number4)
	{
	cout<<"4th number is Minimum"<<endl;
	cout<<"1st number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number1-number4<<endl;
}

if (number1>number2&&number1>number3&&number1>number4&&number2>number3&&(number2>number4||number4>number2)&&number4>number3)
	{
	cout<<"3rd number is Minimum"<<endl;
	cout<<"1st number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number1-number3<<endl;
}

if (number1>number2&&number1>number3&&number1>number4&&number3>number2&&(number3>number4||number4>number3)&&number4>number2)
	{
	cout<<"2nd number is Minimum"<<endl;
	cout<<"1st number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number1-number2<<endl;
}

if (number2>number1&&number2>number3&&number2>number4&&(number1>number3||number3>number1)&&number1>number4&&number3>number4)
	{
	cout<<"4th number is Minimum"<<endl;
	cout<<"2nd number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number2-number4<<endl;
}
	
if (number2>number1&&number2>number3&&number2>number4&&number1>number3&&(number1>number4||number4>number1)&&number4>number3)
	{
	cout<<"3rd number is Minimum"<<endl;
	cout<<"2nd number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number2-number3<<endl;
}	
	
if (number2>number1&&number2>number3&&number2>number4&&number3>number1&&(number3>number4||number4>number3)&&number4>number1)
	{
	cout<<"1st number is Minimum"<<endl;
	cout<<"2nd number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number2-number1<<endl;
}		
	
if (number3>number1&&number3>number2&&number3>number4&&(number1>number2||number2>number1)&&number1>number4&&number2>number4)
	{
	cout<<"4th number is Minimum"<<endl;
	cout<<"3rd number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number3-number4<<endl;
}			
	
if (number3>number1&&number3>number2&&number3>number4&&number1>number2&&(number1>number4||number4>number1)&&number4>number2)
	{
	cout<<"2nd number is Minimum"<<endl;
	cout<<"3rd number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number3-number2<<endl;
}		
	
if (number3>number1&&number3>number2&&number3>number4&&number2>number1&&(number2>number4||number4>number2)&&number4>number1)
	{
	cout<<"1st number is Minimum"<<endl;
	cout<<"3rd number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number3-number1<<endl;
}		
	
if (number4>number1&&number4>number2&&number4>number3&&(number1>number2||number2>number1)&&number1>number3&&number2>number3)
	{
	cout<<"3rd number is Minimum"<<endl;
	cout<<"4th number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number4-number3<<endl;
}	

if (number4>number1&&number4>number2&&number4>number3&&number1>number2&&(number1>number3||number3>number1)&&number3>number2)
	{
	cout<<"2nd number is Minimum"<<endl;
	cout<<"4th number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number4-number2<<endl;
}	
	
if (number4>number1&&number4>number2&&number4>number3&&(number3>number2||number2>number3)&&number3>number1&&number2>number1)
	{
	cout<<"1st number is Minimum"<<endl;
	cout<<"4th number is Maximum"<<endl;
	cout<<"The difference between Min. and Max. is "<<number4-number1<<endl;
}		
	system ("pause");
	return 0;
}
