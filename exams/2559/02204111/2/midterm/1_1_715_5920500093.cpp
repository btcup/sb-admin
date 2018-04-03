//5920500093 Nicharee Kanna
#include<iostream>
using namespace std;
int main()
{
    double n,p;
    char c;
    
    double f=1385000-(1385000*p); //A
    double a=f*((2.09-0.1)/100)*n; //A
    double m=(f+a)/(n*12); //A
    double a1=f*(2.09/100)*n; //A
    double m2=(f+a1)/(n*12); //A
    double fb=1385000-(1385000*p); //B
    double ab=f*((2.09-0.1)/100)*n; //B
    double mb=(f+a)/(n*12); //B
    double a1b=f*(2.09/100)*n; //B
    double m2b=(f+a1)/(n*12); //B
    double fc=1385000-(1385000*p); //C
    double ac=f*((2.09-0.1)/100)*n; //C
    double mc=(f+a)/(n*12); //C
    double a1c=f*(2.09/100)*n; //C
    double m2c=(f+a1)/(n*12); //C
    double fj=1385000-(1385000*p); //J
    double aj=f*((2.09-0.1)/100)*n; //J
    double mj=(f+a)/(n*12); //J
    double a1j=f*(2.09/100)*n; //J
    double m2j=(f+a1)/(n*12); //J
    cout<<"-----Car lease calculator-----"<<endl;
    cout<<"Enter car model:";
    cin>>c;
    if(c=='A')
   { cout<<"Enter number of year (1-6):";
    cin>>n;
    if(n<1&&n>6)
    cout<<"Error!,number of year is not in range";
    else if(n<4)
    {
         cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<f<<endl;
    cout<<"Amount of interest :"<<a<<endl;
    cout<<"Monthly payment:"<<m<<endl;
    }

    else 
    {
         cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<f<<endl;
    cout<<"Amount of interest :"<<a1<<endl;
    cout<<"Monthly payment:"<<m2<<endl;
    }
}
    else if(c=='B')
    {
         cout<<"Enter number of year (1-6):";
    cin>>n;
    if(n<1&&n>6)
    cout<<"Error!,number of year is not in range";
    else if(n<4)
    {cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<fb<<endl;
    cout<<"Amount of interest :"<<ab<<endl;
    cout<<"Monthly payment:"<<mb<<endl;
    }

    else 
    {cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<fb<<endl;
    cout<<"Amount of interest :"<<a1b<<endl;
    cout<<"Monthly payment:"<<m2b<<endl;
    }
}
    else if(c=='C')
    { cout<<"Enter number of year (1-6):";
    cin>>n;
    if(n<1&&n>6)
    cout<<"Error!,number of year is not in range";
    else if(n<4)
    {cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<fc<<endl;
    cout<<"Amount of interest :"<<ac<<endl;
    cout<<"Monthly payment:"<<mc<<endl;
    }

    else 
    {cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<fc<<endl;
    cout<<"Amount of interest :"<<a1c<<endl;
    cout<<"Monthly payment:"<<m2c<<endl;
    }
}
    else if(c=='J')
    { cout<<"Enter number of year (1-6):";
    cin>>n;
    if(n<1&&n>6)
    cout<<"Error!,number of year is not in range";
    else if(n<4)
    {cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<fj<<endl;
    cout<<"Amount of interest :"<<aj<<endl;
    cout<<"Monthly payment:"<<mj<<endl;
    }

    else 
    {cout<<"Enter percentage of dow payment:";
    cin>>p;
    cout<<"-----------------------------"<<endl;
    cout<<"Financing amount:"<<fj<<endl;
    cout<<"Amount of interest :"<<a1j<<endl;
    cout<<"Monthly payment:"<<m2j<<endl;
    }
}
    system("pause");
    return 0;
}
