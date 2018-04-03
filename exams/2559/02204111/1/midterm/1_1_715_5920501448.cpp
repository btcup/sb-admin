 #include<iostream>
 using namespace std;
 int main()
 {
 	int n,i; float a,d,sum,x;
 	cout<<"Enter n,a and d:";
 	cin>>i>>a>>d;
 	cout<<"The artihmetic pro gression of n ="<<" "<<i<<"a= "<<a<<"d= "<<d<<endl;
 	do
 	{sum = a+(n*d);
 	n++;
 	cout<<sum;
 	cout<<" ";
 	}
 
 while (n>0,n<i);
 cout <<endl; 
 	x = ((0+(a+(i*d)))*i)/2;
 	cout<<"The summation:"<<x<<endl;
 system ("pause");
 return 0;
}
