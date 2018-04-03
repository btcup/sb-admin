#include<iostream>
using namespace std;
int main()
{
	int n;
	int A[n],B[n],i,j;
	float x,k;
	cout<<"Please input M :" ;
	cin>>n;
	
	cout<<"Please input array A :"<<endl;
	for(j=0;j<n;j++)
	for(i=0;i<n;i++)
	{
	cin>>A[j];
}
cout<<"Please input array B :"<<endl;
    for(j=0;j<n;j++)
    {
	for(i=0;i<n;i++)
	{
	cin>>B[j];
}

}
k=0;
for(j=0;j<n;j++)
    {
	for(i=0;i<n;i++)
	{
	if (A[i]==B[i])
	k++;
}
}
x=(k*100)/(n*n);
cout<<"Similarity of A and B is : "<<x<<"%";

	system ("pause");
	return 0;


	
}
 
