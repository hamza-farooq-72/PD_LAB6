#include<iostream>
using namespace std ;


float totalCharges(char serviceCode,char duraton, float mins) ;


int main(){


char serviceCode ;
char duraton ;
float mins ;
string type ;



cout<<"Enter the service code (R/r for regular, P/p for premium): " ;
cin>> serviceCode ;

if(serviceCode == 'p' || serviceCode == 'P'){

cout<<"Enter time of the call (D/d for day, N/n for night): " ;
cin>> duraton  ;
cout<<"Enter the number of minutes used: " ;
cin>> mins ;
}
if(serviceCode == 'r' || serviceCode == 'R'){

cout<<"Enter the number of minutes used: " ;
cin>> mins ;
}


if(serviceCode == 'p' || serviceCode == 'P'){
  type = "Premium" ;
}
if(serviceCode == 'r' || serviceCode == 'R'){
  type = "Regular" ;
}

cout<<"Service Type: " << type <<endl ; 

cout<<"Total Minutes Used: " << mins << " minutes"  << endl ;
float tot ;
 tot = totalCharges(serviceCode,duraton ,mins) ;
cout<<"Amount Due: $" << tot  ;


}

float totalCharges(char serviceCode,char duraton, float mins){

       float serviceCharges ;
       float durationCharges ;

  if((serviceCode == 'p') || (serviceCode == 'P')){

    serviceCharges = 25.00 ;
  }
  if(((serviceCode == 'r') || (serviceCode == 'R')) && (mins <= 50)){

    serviceCharges = 10.00 ;

    return serviceCharges;

  }
  
  if(((serviceCode == 'r') || (serviceCode == 'R')) && (mins > 50) ){

    serviceCharges = 10.00 ;
    mins = mins - 50 ;
    serviceCharges = serviceCharges + (mins*0.20) ;
    return serviceCharges;
  }


  if((duraton == 'd' || duraton == 'D') && (mins <= 75))
  {
      durationCharges = serviceCharges ;
      return serviceCharges;
  }
  if((duraton == 'd'  || duraton == 'D') && (mins > 75))
  {
    mins = mins - 75 ;
    
      durationCharges = serviceCharges + (mins*0.10) ;

    return durationCharges ;
  }
  if((duraton == 'n' || duraton == 'N' ) && (mins <= 100))
  {
      durationCharges = serviceCharges ;
      return durationCharges ;
  }

  if((duraton == 'n' || duraton == 'N' ) && (mins > 100))
  {mins = mins - 100 ;
      durationCharges = serviceCharges + (mins*0.05) ;

  }
  return durationCharges ;


}
