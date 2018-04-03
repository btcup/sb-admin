#include<iostream>
#include<cmath>
//apirat eua-aree 5920550287
using namespace std;
int main()
{
	int n,i=0,sum=0;
    cout<<"Enter an integer :";
    cin>>n;
    cout<<"    "<<endl;
    while(i<=n)
    {
      n/i;
       i++;
    }
    cout<<"Number of digit is "<<i-1<<endl;
    if(n=i)
    cout<<n<<"is a target number.";
    else
    cout<<n<<"is not target number.";
	system("pause");
	return 0;
}
