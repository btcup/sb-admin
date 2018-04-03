//5920500514 Siwapan Nak-ai
 #include <iostream>
 #include <cmath>
 using namespace std;
 int main()
 {
     int x,y,i,sum;
     y=0;
     
         while (x>=0){
         cout<<"input value : ";
         cin>>x;
        
         if(x>=10)
                  {
                      cout<<"Invalid Input!! Try Again"<<endl;
                      cout<<endl;
                  }
         else if(x>=0 && x<10) 
         {
              i=x*pow(10.0,y++);
              sum=sum+i;
              }  
                  }
     cout<<"Total is "<<sum<<endl;
    
system("pause");
return 0;
}

