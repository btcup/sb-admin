//Supachai Dentrirat 5920500883 
#include<iostream>
using namespace std;
int main()
{
	int subject,student,graph;
	string Subject1,Subject2,Subject3;
	cout<<"Number of subject: ";
	cin>>subject;
	cout<<"Number of student: ";
	cin>>student;
	cout<<"";
	getline(cin,Subject1,'\n');
	cout<<"score of Subject 1: ";
	getline(cin,Subject1,'\n');
	cout<<"score of Subject 2: ";
	getline(cin,Subject2,'\n');
	cout<<"score of Subject 3: ";
	getline(cin,Subject3,'\n');
	cout<<"Select graph (1-score,2-max,3-exit): ";
	cin>>graph;
	if(graph==1){
		cout<<"Subj1"<<endl;
		cout<<"Subj2"<<endl;
		cout<<"Subj3"<<endl;
	}
	if(graph==2){
		cout<<"Subj1"<<endl;
		cout<<"Subj2"<<endl;
		cout<<"Subj3"<<endl;
	}
	if(graph==3){
	system("pause");
	return 0;
	}
	
	
	
	
	system("pause");
	return 0;
}
