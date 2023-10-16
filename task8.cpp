#include<iostream>
using namespace std ;


  int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);




main(){


string yearType ;
int holidays ;
int hometownWeekends ;
int total ;

cout<<"Enter year type: " ;
cin>> yearType ;


cout<<"Enter number of holidays: " ;
cin>> holidays ;

cout<<"Enter number of weekends: " ;
cin>> hometownWeekends ;

 total =    calculateVolleyballGames(yearType,holidays,hometownWeekends);
 cout << total ;


}


  int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends){
            int oneleap = 49 ;
            int onenormal = 49 ;
            float  playDuringWeekends ;
            float playDuringHolidays ;
            float totalPlay ;
            int res ;
            
        

        
        

        if(yearType == "leap"){

                 playDuringWeekends =  oneleap*(0.75) ;
                 playDuringHolidays =  holidays*(0.66) ;
             totalPlay = playDuringWeekends + playDuringHolidays ;
                totalPlay = totalPlay + totalPlay*(0.15) ;
                res = totalPlay ;
                return res ;
            
        }
            else {
                playDuringWeekends =  onenormal*(0.75) ;
                 playDuringHolidays =  holidays*(0.7) ;
             totalPlay = playDuringWeekends + playDuringHolidays ;
                res = totalPlay  ;
            return res ;

            }

                
  }  