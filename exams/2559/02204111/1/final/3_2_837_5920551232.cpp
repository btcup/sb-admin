//5920551232 suwapat maisang
#include <iostream>
using namespace std;
int main()
{
	int a,b,i,j,w;
	double x[100][100],y[100],z[100][100],u=0;
	cout<<"Number of subject : ";
	cin>>a;
	cout<<"Number of student : ";
	cin>>b;
	for(i=1;i<=a;i++){
		for(j=0;j<b;j++){
			cout<<"score of Subject "<<i<<":";
			cin>>z[i-1][j];
		}
	}
		
	
	cout<<"Select graph (1-score,2-max) :";
	cin>>w;
	if(w==1){
		for(i=1;i<a;i++){
			for(j=1;j<=b;j++){
				cout<<"Subj "<<j<<endl;
				z[i-1][j]=z[i-1][j]/10;
			if(z[i-1][j]>10)
			cout<<"o";
			else
			cout<<"x";
			}
		}
	}
	else{
		for(i=1;i<a;i++){
			for(j=1;j<=b;j++){
				cout<<"Subj "<<j<<endl;
				z[i-1][j]=z[i-1][j]/10;
			if(z[i-1][j]>10)
			cout<<"o";
			else
			cout<<"x";
			}
		}
	}
	system ("pause");
	return 0;
}
