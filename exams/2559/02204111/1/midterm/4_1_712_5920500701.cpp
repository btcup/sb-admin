// 5920500701  Nattapas Jarasrungchawalit
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int input,i;
	cout<<"input value: ";
	cin>>input;
	i=1;
	if (input>=0&&input<=9)
	{
	while (input>=0)
	{
		
		cout<<"input value: ";
		cin>>input;
		if (input>=0&&input<=9)
		cout<<"Invalid Input!!"<<endl;
		i++;
		
		
		
	}
	cout<<"Your money is "<<input<<" = "<<input*10*i<<endl;
}
	cout<<"Invalid Input!!"<<endl;
	
	
	
	system ("pause");
	return 0;
}
