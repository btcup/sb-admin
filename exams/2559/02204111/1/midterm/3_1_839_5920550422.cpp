//5920550422 Suthinee Chanchinda
#include <iostream>
using namespace std;
int main ()
{
	int i,n;
	while (i>=0)
	{
		n=i;
		cout<<"Input value: ";
		cin>>i;
		if (i>9)
		cout<<"In valid Input!! Try Again";
		else if (i<0)
		break;
		i++;
	}
	system ("pause");
	return 0;
}
