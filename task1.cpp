#include<iostream>
using namespace std ;


string decideActivity(string temp, string humid);


int main()
{
string temp ;
string humid ;

cout<<"Enter temperature (warm or cold): ";
cin>> temp ;
cout<<"Enter humidity (dry or humid): ";
cin>> humid ;

string result ;
result = decideActivity(temp,humid);

cout << "Recommended activity: " <<result ;

}
                
   string decideActivity(string temp, string humid)

{   
     string res ;

        if(temp == "warm" && humid == "dry")
        {
             res = "Play tennis";
        }

        
        if(temp == "cold" && humid == "dry")
        {
             res = "Play basketball";
             
        }
        if(temp == "warm" && humid == "humid")
        {
             res = "Swim";
             
        }
        if(temp == "cold" && humid == "humid")
        {
             res = "Watch TV";

        }

            return res ;

    }
















