#include <iostream>
using namespace std;
int main ()
{
    int Avg,total,asiam,asiat,asiaw,asiath,asiaf,nokm,nokt,nokw,nokth,nokf,lionm,liont,lionw,lionth,lionf,thaim,thait,thaiw,thaith,thaif;
    
    
    cout<<"Give the number of passengers of day 1 :";
    cin>>asiam>>nokm>>lionm>>thaim;
    
    cout<<"Give the number of passengers of day 2 :";
    cin>>asiat>>nokt>>liont>>thait;
    cout<<"Give the number of passengers of day 3 :";
    cin>>asiaw>>nokw>>lionw>>thaiw;
    cout<<"Give the number of passengers of day 4 :";
    cin>>asiath>>nokth>>lionth>>thaith;
    cout<<"Give the number of passengers of day 5 :";
    cin>>asiaf>>nokf>>lionf>>thaif;
    
    total=asiam+asiat+asiaw+asiath+asiaf;
     cout<<"Total passengers for air asia is :"<<total<<endl;
     
     Avg =(asiam+asiat+asiaw+asiath+asiaf+nokm+nokt+nokw+nokth+nokf+lionm+liont+lionw+lionth+lionf+thaim+thait+thaiw+thaith+thaif)/20 ;
     cout<<"The average number of passengers for all day and all Flight is : "<<Avg<<endl;
     
     if (asiam>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<asiam<<endl;
    
     if (asiat>asiam&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<asiat<<endl;
    
     if (asiaw>asiat&asiam&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<asiaw<<endl;
     
      if (asiath>asiat&asiaw&asiam&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<asiath<<endl;
     
     if (asiaf>asiat&asiaw&asiath&asiam&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<asiaf<<endl;
     
     
     
     
     if (nokm>asiat&asiaw&asiath&asiaf&asiam&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<nokm<<endl;
     
     if (nokt>asiat&asiaw&asiath&asiaf&nokm&asiam&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<nokt<<endl;
     
      if (nokw>asiat&asiaw&asiath&asiaf&nokm&nokt&asiam&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<nokw<<endl;
     
     if (nokth>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&asiam&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<nokth<<endl;
     
      if (nokf>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&asiam&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<nokf<<endl;
     
     
     
     if (lionm>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&asiam&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<lionm<<endl;
     
      if (liont>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&asiam&lionw&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<liont<<endl;
    
    if (lionw>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&asiam&lionth&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<lionw<<endl;
    
     if (lionth>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&asiam&lionf&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<lionth<<endl;
     
      if (lionf>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&asiam&thaim&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<lionf<<endl;
    
    
     if (thaim>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&asiam&thait&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<thaim<<endl;
     
     if (thait>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&asiam&thaiw&thaith&thaif);
     cout<<"The largest of passengres is : "<<thait<<endl;
    
     if (thaiw>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&asiam&thaith&thaif);
     cout<<"The largest of passengres is : "<<thaiw<<endl;
     
     if (thaith>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&asiam&thaif);
     cout<<"The largest of passengres is : "<<thaith<<endl;
     
     if (thaif>asiat&asiaw&asiath&asiaf&nokm&nokt&nokw&nokth&nokf&lionm&liont&lionw&lionth&lionf&thaim&thait&thaiw&thaith&asiam);
     cout<<"The largest of passengres is : "<<thaif<<endl;
    
    
    system("pause");
    return 0 ;
} 
