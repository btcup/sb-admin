#include<cmath>
#include<iostream>
using namespace std;
int main()
{  
    double one,two,three,four,min,max;
    cout<<"Enter 1st number : ";
    cin>>one;
    cout<<"Enter 2nd number : ";
    cin>>two;
    cout<<"Enter 3rd number : ";
    cin>>three;
    cout<<"Enter 4th number : ";
    cin>>four;
    cout<<endl;
    if(one<four&&one<three&&one<two){
    cout<<"1st number is minimum"<<endl;
    min=one;}
    if(two<one&&two<three&&two<four){
    cout<<"2nd number is minimum"<<endl;
    min=two;}
    if(three<one&&three<two&&three<four){
    cout<<"3rd number is minimum"<<endl;
    min=three;}
    if(four<one&&four<two&&four<three){
    cout<<"4th number is minimum"<<endl;
    min=four;}
    if(one>four&&one>three&&one>two){
    cout<<"1st number is maximum"<<endl;
    max=one;}
    if(two>one&&two>three&two>four){
    cout<<"2nd number is maximum"<<endl;
    max=two;}
    if(three>one&&three>two&&three>four){
    cout<<"3rd number is maximum"<<endl;
    max=three;}
    if(four>one&&four>two&&four>three){
    cout<<"4th number is maximum"<<endl;
    max=four;}
    cout<<"The difference between Min. and Max. is "<<max-min<<endl;
    system("pause");
    return 0;
}
    
    
    
