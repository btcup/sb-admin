 //5920500514 Siwapan Nak-ai
 #include <iostream>
 #include <cmath>
 using namespace std;
 int main()
 {
     int a,b,c,y,z;
     float w,x,d,e;
     cout<<"Enter coefficients a, b, and c : ";
     cin>>a>>b>>c;
     cout<<endl;
     y=(b*b)-(4*a*c);
     z=2*a;
     w=(-b-(sqrt(y)))/z;
     x=(-b+(sqrt(y)))/z;
     d= float(-b)/z;
     e=(sqrt(-y))/z;
    
     if(y>0)
     {
            if(w != x)
            {
                 cout<<"Roots are real and different."<<endl;
                 cout<<"x1 = "<<x<<endl;
                 cout<<"x2 = "<<w<<endl;
            }
            }
     else if(y==0)
            {
                 cout<<"Roots are real and same."<<endl;
                 cout<<"x1 = x2 = "<<x<<endl;
                 }    
      
      else if(y<0)
      {
           cout<<"Roots are complex and different."<<endl;
           cout<<"x1 = "<<d<<" + "<<e<<"i"<<endl;
           cout<<"x2 = "<<d<<" - "<<e<<"i"<<endl;
           }
                 

system("pause");
return 0;
}
