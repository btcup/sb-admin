//5920501197 pawat srisiriwat
#include <iostream>
using namespace std;
int main()
{
	int N,i,gt=0;
	do
	{	
    cout <<"Enter N : ";
	cin >>N;}
	while(N<=0);
	for(i=N-1;i>1;i--)
	{
	if (N%i==0)
	if (gt%i==0)
	gt = i;
	}
	if (gt == 0 )
	gt = N;
	cout <<"The greatest factor of "<<N<<" is "<<gt;
	if(N==gt)
	cout << " --> prime number";
	cout <<endl;
system("pause");
return 0;
}
