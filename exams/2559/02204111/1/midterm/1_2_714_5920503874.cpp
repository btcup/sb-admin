#include<iostream>

using namespace std;

int main(){

char L,M,S,A;
double x,y,t,l;
cout<<"Enter objective (Living, Agriculture)and living type(Main,Seccond)";

if(L){
      if(M){
            cout<<"Enter land cost(million)";
            cin>>x;
            if(x<50)
            y = x+0;
            cout<<"Your estate cost is"<<y<<"million bath"<<endl;
            cout<<"The land tax is"<<0<<"million bath"<<endl;
            else if(x<100)
            y = x+((x*6/100)/100);
            cout<<"Your estate cost is"<<y<<"million bath"<<endl;
            cout<<"The land tax is"<<((x*6/100)/100)<<"million bath"<<endl;
            else 
            y = x+((x*12/100)/100);
            cout<<"Your estate cost is"<<y<<"million bath"<<endl;
            cout<<"The land tax is"<<((x*12/100)/100)<<"million bath"<<endl;
            }
      else if(S){
            cout<<"Enter land cost(million)";
            cin>>x;
            if(x<5)
            y=x+((x*3/10)/100);
            cout<<"Your estate cost is"<<y<<"million bath"<<endl;
            cout<<"The land tax is"<<((x*3/10)/100))<<"million bath"<<endl;
            else if(x<10)
            y=x+((x*6/10)/100);
            cout<<"Your estate cost is"<<y<<"million bath"<<endl;
            cout<<"The land tax is"<<((x*6/10)/100)<<"million bath"<<endl;
            else
            y=x+((x*9/10)/100);
            cout<<"Your estate cost is"<<y<<"million bath"<<endl;
            cout<<"The land tax is"<<((x*9/10)/100)<<"million bath"<<endl;
            }
else if(A){
           cout<<"Enter land cost(million)";
           cin>>x;
           if(x<40)
           y=x+0;
           cout<<"Your estate cost is"<<y<<"million bath"<<endl;
           cout<<"The land tax is"<<0<<"million bath"<<endl;
           else if(x<80)
           y=x+((x*4/100)/100);
           cout<<"Your estate cost is"<<y<<"million bath"<<endl;
           cout<<"The land tax is"<<((x*4/100)/100))<<"million bath"<<endl;  
           else
           y=x+((x*8/100)/100);
           cout<<"Your estate cost is"<<y<<"million bath"<<endl;
           cout<<"The land tax is"<<((x*8/100)/100))<<"million bath"<<endl;
           }

cout<<"Enter your long time to live";
cin>>l;
{if(L&&l<15)
t=(x*(12/1000)/100);
else if(L&&l<40)
t=(x*(25/1000)/100);
else if(L&&l>41) 
t=(x*65/100);
}

cout<<y-t<<endl;          
           
}           
system("pause");
return 0;            
            
            
            
