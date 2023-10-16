#include<iostream>
using namespace std ;


 float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology) ;

 string calculateGrade(float average) ;




int main()
{
    string name ;
    float marksEnglish;
     float marksMaths;
      float marksChemistry;
       float marksSocialScience ;
       float marksBiology ;
       float average ;

cout<<"Enter student name: ";
cin>> name ;
cout<<"Enter marks for English: ";
cin>> marksEnglish ;
cout<<"Enter marks for Maths: ";
cin>> marksMaths ;
cout<<"Enter marks for Chemistry: ";
cin>> marksChemistry ;
cout<<"Enter marks for Social Science: ";
cin>> marksSocialScience ;
cout<<"Enter marks for Biology: ";
cin>> marksBiology ;

average = calculateAverage(marksEnglish, marksMaths,
marksChemistry, marksSocialScience, marksBiology) ;

string result = calculateGrade( average) ;

cout<<"Student Name: " << name <<endl ;

cout<<"Percentage: " << average << "%" <<endl ;




cout << "Grade: " <<result ;


}
                
   
 float calculateAverage(float marksEnglish, float marksMaths, float
marksChemistry, float marksSocialScience, float marksBiology) 


{   
    float totalmarksobt ;
        totalmarksobt = marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology ;
        float avg =  totalmarksobt/5 ;

    return avg ;
    }



string calculateGrade(float average) 
{
    string grade ; 

    if(average < 40 )
    { 
            grade = "F" ;

    }

    if(average >= 40 && average < 50)
    {

        grade = "D" ;

    }
    if(average >= 50 && average < 60)
    {

        grade = "C" ;

    }
    if(average >= 60 && average < 70)
    {

        grade = "B" ;

    }
    if(average >= 70 && average < 80)
    {

        grade = "B+" ;

    }
    if(average >= 80 && average < 90)
    {

        grade = "A" ;

    }
    if(average >= 90 && average < 100)
    {

        grade = "A+" ;

    }




    return grade ;

}












