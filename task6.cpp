#include<iostream>
using namespace std ;


  string calculateHotelPrices(string month, int numberOfStays) ;




main(){


string month ;
int numberOfStays ;
string total ;

cout<<"Enter the month (May, June, July, August, September, October): " ;
cin>> month ;


cout<<"Enter the number of stays: " ;
cin>> numberOfStays ;

 total = calculateHotelPrices(month, numberOfStays) ;
cout << total ;

}


  string calculateHotelPrices(string month, int numberOfStays) {
            float amount1 ;
            float amount2 ;


    if((month == "May" || month == "October") && (numberOfStays <= 7)) {

        amount1 = 65 ;

        amount2 = 50 ;


    }

  if((month == "May" || month == "October") && (numberOfStays > 7 && numberOfStays <= 14)) {
       amount1 = 65 ;
        amount2 = 50 ;
        amount2 = amount2 - amount2*0.05  ;
  }

 else if((month == "May" || month == "October") && (numberOfStays > 14 )) {

       amount1 = 65 ;
       amount1 = amount1 - amount1*0.1 ;
        amount2  = 50 ;
        amount2 = amount2 - amount2*0.3  ;
      
 }

if((month == "June" || month == "September") && (numberOfStays <= 14)) {
       amount1 = 68.7 ;
        amount2 = 75.20 ;
       
 }

 else if((month == "June" || month == "September") && (numberOfStays > 14 && numberOfStays <= 200)) {

        amount1 = 68.7 ;
       amount1 = amount1 - amount1*0.1 ;
        amount2 = 75.20 ;
        amount2 = amount2 - amount2*0.2 ;
       
 }
if((month == "August" || month == "July" ) && (numberOfStays < 14 )) {
               amount1 = 77 ;
              amount2 = 76 ;
      
 }
else if((month == "August" || month == "July" ) && (numberOfStays > 14 )) {
               amount1 = 77 ;
               amount1 = amount1 - amount1*0.1 ;
              amount2 = 76 ;
      
 } 
              amount1 = amount1*numberOfStays ;
              amount2 = amount2*numberOfStays ;


               return "Appartment: " + to_string(amount1) + "$.\nStudio: " + to_string(amount2) + "$." ;
             
              

  }  