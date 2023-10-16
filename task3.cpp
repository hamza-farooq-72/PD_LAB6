#include<iostream>
using namespace std ;


string star(string month, int date ) ;


int main(){

cout<<"Enter the day of birth: " ;
int dat ;
cin>> dat ;

cout<<"Enter the month of birth (e.g., January, February): ";
string mon ;
cin>> mon ;

string stars ;
stars = star(mon,dat) ;
cout<< "Zodiac Sign: " << stars ;

}

string star(string month, int date ){

    string res ;

if(( month == "March" && date >= 21) || ( month == "April" && date <=19 )) {

    
    res = "Aries" ;
}
if(( month == "April" && date >= 20) || ( month == "May" && date <=20 )) {

    res = "Taurus" ;
}

if(( month == "May" && date >= 21) || ( month == "June" && date <=20 )) {

    res = "Gemini" ;
}    

if(( month == "June" && date >= 21) || ( month == "July" && date <=22 )) {


    res = "Cancer" ;
}
if(( month == "July" && date >= 23) || ( month == "August" && date <=22 )) {

    
    res = "Leo" ;
}
if(( month == "August" && date >= 23) || ( month == "September" && date <=22 ) ) {


    res = "Virgo" ;
}
if(( month == "September" && date >= 23) || ( month == "October" && date <=22 ) ) {

    res = "Libra" ;
}
if(( month == "October" && date >= 23) || ( month == "November" && date <=21 )) {


    res = "Scorpio" ;
}
if(( month == "November" && date >= 22) || ( month == "December" && date <=21 )) {

    res = "Sagittarius" ;
}
if(( month == "December" && date >= 22) || ( month == "January" && date <=19 )) {

    
    res = "Capricon" ;
}
if(( month == "January" && date >= 20) || ( month == "February" && date <=18 ) ){


    res = "Aquarius" ;
}
if(( month == "February" && date >= 19) || ( month == "March" && date <=20 ) ){


    res = "Pices" ;

    
}


return res ;

}
