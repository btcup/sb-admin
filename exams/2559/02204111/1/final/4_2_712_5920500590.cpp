#include <iostream>
using namespace std;
int main ()
{
	int stu,sub,c,i,j,max; 
	cout<<"Number of student : ";
	cin>>stu;
	cout<<"Number of subject : ";
	cin>>sub;
	double sco[sub][stu];
	for(i=0;i<stu;i++)
		for(j=0;j<sub;j++)
		{
			cout<<"score of Student "<<i+1<<" : ";
			cin>>sco[i][j];
		}
	cout<<"Select graph ( 1-score , 2-max , 3-exit ) : ";
		cin>>c;
		if(c==1)
		{
			for(i=0;i<stu;i++)
			{
				cout<<"Student"<<i+1<<endl;
				for(i=0;i<stu;i++)
				for(j=0;j<sub;j++)
				{
					if(sco[i][j]>=10)
					{
						cout<<"O";
						sco[i][j]=sco[i][j]-10;
					
							if(sco[i][j]<10&&sco[i][j]>=5)
							{
							cout<<"X";
							sco[i][j]=sco[i][j]-5;
							}
					}
				}
				cout<<endl;	
			}
		}
		/*if(c==2)
		{
			
		}	*/
		if(c==3)cout<<endl;
	system("pause");
	return 0;
}
