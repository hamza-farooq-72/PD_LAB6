#include<iostream>
using namespace std ;


   string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) ;





int main(){


int examHour ;
int examMinute ;
int studentHour ;
int studentMinute ;

cout<<"Enter Exam Starting Time (hour): " ;
cin>> examHour ;


cout<<"Enter Exam Starting Time (minutes): " ;
cin>> examMinute  ;

cout<<"Enter Student hour of arrival: " ;
cin>> studentHour ;

cout<<"Enter Student minutes of arrival: " ;
cin>> studentMinute  ;

string res ;
 res = checkStudentStatus(examHour,examMinute,studentHour,studentMinute);

cout << res  ;


}


   string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) {

    string result ;
    int difference ;
    int examTotalHour = examHour*60 + examMinute ;
    int studentTotalMins = studentHour*60 + studentMinute ;
    int hoursDifference = examHour - studentHour ;
    int minsDifference = examMinute - studentMinute ;
     difference = examTotalHour - studentTotalMins ;


        if((studentTotalMins > examTotalHour) && (-difference > 60)){


                    result = "Late\n" + to_string(-hoursDifference) + ":"  + to_string(-minsDifference) + " hours after the start";  

                    return result ;
                }

         if((studentTotalMins > examTotalHour) && (-difference < 60)){

                    result = "Late\n" + to_string(-difference) + " minutes after the start";  
                    return result ;

                }
                

                
             

        if(examTotalHour == studentTotalMins){

                 if(difference == 0){

                    result = "On time"   ;
                    return result ;
                }
        }
                 if(difference >= 1 && difference <= 30){

                    result = "On time\n" + to_string(difference) + " minutes befure the start"; 

                    return result ; 
                } 
                
        

           if(examTotalHour > studentTotalMins) {

                if(difference < 60){

                    result = "Early\n" + to_string(difference) + " minutes before the start";  
                    return result ;
                }
                if(difference >= 60){

                    result = "Early\n" + to_string(hoursDifference) + ":"  + to_string(minsDifference) + " hours before the start";  
                    return result ; 
                    }
                }

           }