//5920501294 Augkun kanchanapisitkun
#include <iostream>
using namespace std;
int main()
{
    int Y;
    float D;
    char T;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model:";
    cin>>T;
      if (T=='A')
       {
          cout<<"Enter number of years (1-6):";
          cin>>Y;
          if (Y<4)
           {
                  cout<<"Enter percentage of down payment:";
                  cin>>D;
                  cout<<"-----------------------------------------"<<endl;
                  cout<<"Financing amount:"<<1385000-(float(D/100)*1385000)<<endl;
                  cout<<"Amount of interest:"<<((1385000-(float(D/100)*1385000))*1.99*Y)/100<<endl;
                  cout<<"Monthly payment:"<<(((1385000-(float(D/100)*1385000))+((1385000-(float(D/100)*1385000))*1.99*Y)/100))/(Y*12)<<endl;       
           }
          else if (Y>=4&&Y<=6)
           {
               cout<<"Enter percentage of down payment:";
                  cin>>D;
                  cout<<"-----------------------------------------"<<endl;
                  cout<<"Financing amount:"<<1385000-((D/100)*1385000)<<endl;
                  cout<<"Amount of interest:"<<((1385000-(float(D/100)*1385000))*2.09*Y)/100<<endl;
                  cout<<"Monthly payment:"<<(((1385000-(float(D/100)*1385000))+((1385000-(float(D/100)*1385000))*2.09*Y)/100))/(Y*12)<<endl; 
           }
           else
            cout<<"Error!,number of years is not in range"<<endl;
          }    
       else if (T=='B')
            {
              cout<<"Enter number of years (1-6):";
              cin>>Y;
              if (Y<4)
             {
                    cout<<"Enter percentage of down payment:";
                    cin>>D;
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"Financing amount:"<<511500-(float(D/100)*511500)<<endl;
                    cout<<"Amount of interest:"<<((511500-(float(D/100)*511500))*1.69*Y)/100<<endl;
                    cout<<"Monthly payment:"<<(((511500-(float(D/100)*511500))+((511500-(float(D/100)*511500))*1.69*Y)/100))/(Y*12)<<endl;       
             }
            else if (Y>=4&&Y<=6)
             {
               cout<<"Enter percentage of down payment:";
                  cin>>D;
                  cout<<"-----------------------------------------"<<endl;
                  cout<<"Financing amount:"<<511500-((D/100)*511500)<<endl;
                  cout<<"Amount of interest:"<<((511500-(float(D/100)*511500))*1.79*Y)/100<<endl;
                  cout<<"Monthly payment:"<<(((511500-(float(D/100)*511500))+((511500-(float(D/100)*511500))*1.79*Y)/100))/(Y*12)<<endl; 
             }
             else
              cout<<"Error!,number of years is not in range"<<endl;
           }
        else if (T=='C')
            {
              cout<<"Enter number of years (1-6):";
              cin>>Y;
              if (Y<4)
             {
                    cout<<"Enter percentage of down payment:";
                    cin>>D;
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"Financing amount:"<<738000-(float(D/100)*738000)<<endl;
                    cout<<"Amount of interest:"<<((738000-(float(D/100)*738000))*1.89*Y)/100<<endl;
                    cout<<"Monthly payment:"<<(((738000-(float(D/100)*738000))+((738000-(float(D/100)*738000))*1.89*Y)/100))/(Y*12)<<endl;       
             }
            else if (Y>=4&&Y<=6)
             {
               cout<<"Enter percentage of down payment:";
                  cin>>D;
                  cout<<"-----------------------------------------"<<endl;
                  cout<<"Financing amount:"<<738000-((D/100)*738000)<<endl;
                  cout<<"Amount of interest:"<<((738000-(float(D/100)*738000))*1.99*Y)/100<<endl;
                  cout<<"Monthly payment:"<<(((738000-(float(D/100)*738000))+((738000-(float(D/100)*738000))*1.99*Y)/100))/(Y*12)<<endl; 
             }
             else
              cout<<"Error!,number of years is not in range"<<endl;
           }
         else if (T=='J')
            {
              cout<<"Enter number of years (1-6):";
              cin>>Y;
              if (Y<4)
             {
                    cout<<"Enter percentage of down payment:";
                    cin>>D;
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"Financing amount:"<<694000-(float(D/100)*694000)<<endl;
                    cout<<"Amount of interest:"<<((694000-(float(D/100)*694000))*1.89*Y)/100<<endl;
                    cout<<"Monthly payment:"<<(((694000-(float(D/100)*694000))+((694000-(float(D/100)*694000))*1.89*Y)/100))/(Y*12)<<endl;       
             }
            else if (Y>=4&&Y<=6)
             {
               cout<<"Enter percentage of down payment:";
                  cin>>D;
                  cout<<"-----------------------------------------"<<endl;
                  cout<<"Financing amount:"<<694000-((D/100)*694000)<<endl;
                  cout<<"Amount of interest:"<<((694000-(float(D/100)*694000))*1.99*Y)/100<<endl;
                  cout<<"Monthly payment:"<<(((694000-(float(D/100)*694000))+((694000-(float(D/100)*694000))*1.99*Y)/100))/(Y*12)<<endl; 
             }
             else
              cout<<"Error!,number of years is not in range"<<endl;
           }   
         else
          cout<<"End Program"<<endl;
    system("pause");
    return 0;
}
