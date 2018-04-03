//5920551232 suwapat maisang
#include <iostream>
using namespace std;
double mySearch(string x,string y){
	
	int i,j,z;

	for( i=1 ;i<=x.size();i++){
		for(j=1;j<=y.size();j++){
		
		if(x[i]!='*'||x[i]!=y[i])
			z=0;
		else
		z=1;	
		return z ;
     }
	}
	
}
int main()
{
	int w;
	string a,b;
	cout<<"Enter text:  ";
	cin>>a;
	cout<<"Enter keyword:  ";
	cin>>b;
	if(b[1]=='*')
	cout<<"Incorrect  keyword!"<<endl;
	else{
	w=mySearch(a,b);
	if(w==0)
	cout<<b<<" is  in above text."<<endl;
	else
     cout<<b<<" is not in above text."<<endl;
	
}
	
	
	system ("pause");
	return 0;
}
