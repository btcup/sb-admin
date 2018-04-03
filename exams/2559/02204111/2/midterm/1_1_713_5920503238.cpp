#include<iostream>//5920503238NameVongsapat//Kimnoi
using namespace std;
int main ()
{
    char a;
    int y,x,z,;
    float c,v;
    cout<<"-------  Car lease calculator  -------"<<endl;
    cout<<"Enter car modal : ";
     cin>>a;
     if(a=='A'){
     {cout<<"Enter number of year (1-6): ";}
    cin>>y;     
     if(y<0||y>6)
     {cout<<"Error!,number of years is not in range"<<endl;}
    cout<<"Enter percentage of down payment: ";
    cin>>x;    
    cout<<"--------------------------------------"<<endl;
    cout<<"Financing amout:"<<z;
    cin>>z;
    z=1385000/100*x;
    cout<<"Amount of interest:"<<c;
    cin>>c;
    cout<<"Montly payment:"<<v;
    cin>>v;
    }
     else if(a=='B'){
     {cout<<"Enter number of year (1-6): ";}
    cin>>y;     
     if(y<0||y>6)
     {cout<<"Error!,number of years is not in range";}
    cout<<"Enter percentage of down payment: ";
    cin>>x;    
    cout<<"--------------------------------------"<<endl;
    cout<<"Financing amout: ";
    cin>>z;
    z=511500/100*x;
    cout<<"Amount of interest: ";
    cin>>c;
    cout<<"Montly payment: ";
    cin>>v;
    } 
    else if(a=='C'){
     {cout<<"Enter number of year (1-6): ";}
    cin>>y;     
     if(y<0||y>6)
     {cout<<"Error!,number of years is not in range";}
    cout<<"Enter percentage of down payment: ";
    cin>>x;    
    cout<<"--------------------------------------"<<endl;
    cout<<"Financing amout: ";
    cin>>z;
    z=1385000/100*x;
    cout<<"Amount of interest:"<<c;
    cin>>c;
    cout<<"Montly payment:"<<v;
    cin>>v;
    }
     else if(a=='J'){
     {cout<<"Enter number of year (1-6): ";}
    cin>>y;     
     if(y<0||y>6)
     {cout<<"Error!,number of years is not in range";}
    cout<<"Enter percentage of down payment: ";
    cin>>x;    
    cout<<"--------------------------------------"<<endl;
    cout<<"Financing amout: ";
    cin>>z;
    z=694000/100*x;
    cout<<"Amount of interest:"<<c;
    cin>>c;
    cout<<"Montly payment:"<<v;
    cin>>v;
    }
    system ("pause");
    return 0;
}
