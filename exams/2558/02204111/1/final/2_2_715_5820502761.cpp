#include<iostream>
using namespace std;
int CountThe(string w)
{
    int k=0,n=0,p=0,pos1=0,pos2=0,pos3=0;
    while(1)
    {
            pos1=w.find("the ",pos1);
            if(pos1==string::npos)
            break;
            if(pos1!=string::npos)
            k++;
            pos1++;
    }
    while(1)
    {
            pos2=w.find("The ",pos2);
            if(pos2==string::npos)
            break;
            if(pos2!=string::npos)
            n++;
            pos2++;
    }
    while(1)
    {
            pos3=w.find("THE ",pos3);
            if(pos3==string::npos)
            break;
            if(pos3!=string::npos)
            p++;
            pos3++;
    }
    return k+n+p;
}
int main()
{
    string w;
    cout<<"Enter your sentence : ";
    getline(cin,w,'\n');
    cout<<"There are "<<CountThe(w)<<"  words of 'the'\n";
    system("pause");
    return 0;
}
