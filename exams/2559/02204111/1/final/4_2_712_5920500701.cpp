//5920500701 Nattapas Jarasrungchawalit
#include<iostream>
using namespace std;
int main()
{
	int nstu, nsub,select;
	float score;
	cout<<"Number of student : ";
	cin>>nstu;
	cout<<"Number of subject : ";
	cin>>nsub;
	for (int i=0;i<=nstu;i++)
	for (int j=0;i<=nsub;j++){
	
	cout<<"score of Student "<<i+1<<": ";
	cin>>score[i][j];}
	cout<<"Select graph (1-score,2-max,3-exit) :";
	cin>>select;
	return 0;
}
