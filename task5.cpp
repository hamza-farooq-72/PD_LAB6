#include<iostream>
using namespace std ;


float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity) ;



int main(){


string fruit ;
string dayOfWeek ;
double quantity ;




cout<<"Enter the fruit name: " ;
cin>> fruit ;


cout<<"Enter the day of the week (e.g., Monday, Sunday): " ;
cin>> dayOfWeek  ;

cout<<"Enter the quantity: " ;
cin>> quantity ;


 
 if((fruit != "banana") &&  (fruit != "apple") && (fruit != "orange") && (fruit != "grapefruit") && (fruit != "kiwi") && (fruit != "grapes") && (fruit != "pineapple")) {

    cout<< "error";
    return 0 ;
 }


 if(dayOfWeek != "Sunday" && dayOfWeek != "Saturday" && dayOfWeek != "Monday" && dayOfWeek != "Tuesday" && dayOfWeek != "Wednesday" && dayOfWeek != "Thursday" && dayOfWeek != "Friday"){
cout<< "error";
return 0 ;
 }

float total ;
 total = calculateFruitPrice(fruit,dayOfWeek,quantity) ;

cout << total  ;


}


        float calculateFruitPrice(string fruit, string dayOfWeek, double quantity){
            float amount ;

  if((dayOfWeek == "Sunday" || dayOfWeek == "Saturday") && (fruit == "banana")){

    amount  = quantity*2.70 ; 
    return amount ;
  }
  if((dayOfWeek == "Sunday" || dayOfWeek == "Saturday") && (fruit == "apple")){

    amount  = quantity*1.25 ; 
    return amount ;
  }
  if((dayOfWeek == "Sunday" || dayOfWeek == "Saturday") && (fruit == "orange")){

    amount  = quantity*0.90 ; 
    return amount ;
  }
  if((dayOfWeek == "Sunday" || dayOfWeek == "Saturday") && (fruit == "grapefruit")){

    amount  = quantity*1.60 ; 
    return amount ;
  }
  if((dayOfWeek == "Sunday" || dayOfWeek == "Saturday") && (fruit == "kiwi")){
    amount  = quantity*3.00 ; 
    return amount ;
  }
  if((dayOfWeek == "Sunday" || dayOfWeek == "Saturday") && (fruit == "pineapple")){
    

    amount  = quantity*5.60 ; 
    return amount ;
  }
  if((dayOfWeek == "Sunday" || dayOfWeek == "Saturday") && (fruit == "grapes")){

    amount  = quantity*4.20 ; 
    return amount ;
  }





    if((dayOfWeek != "Sunday" || dayOfWeek != "Saturday") && (fruit == "banana")){

    amount  = quantity*2.50 ; 
    return amount ;
  }
  if((dayOfWeek != "Sunday" || dayOfWeek != "Saturday") && (fruit == "apple")){

    amount  = quantity*1.20 ; 
    return amount ;
  }
  if((dayOfWeek != "Sunday" || dayOfWeek != "Saturday") && (fruit == "orange")){

    amount  = quantity*0.85 ; 
    return amount ;
  }
  if((dayOfWeek != "Sunday" || dayOfWeek != "Saturday") && (fruit == "grapefruit")){

    amount  = quantity*1.45 ; 
    return amount ;
  }
  if((dayOfWeek != "Sunday" || dayOfWeek != "Saturday") && (fruit == "kiwi")){

    amount  = quantity*2.70 ; 
    return amount ;
  }
  if((dayOfWeek != "Sunday" || dayOfWeek != "Saturday") && (fruit == "pineapple")){

    amount  = quantity*5.50 ; 
    return amount ;
  }
  if((dayOfWeek != "Sunday" || dayOfWeek != "Saturday") && (fruit == "grapes")){

    amount  = quantity*3.85 ; 
    return amount ;
  }


  }  

