#include <iostream>
#include <windows.h>
using namespace std ;

     int fX = 25 ;
    int fY = 22 ;
    int sX1 = 4  , sY1 = 4 ;
    int sX2 = 40 , sY2 = 2 ;
    int sX3 = 60, sY3 = 15 ;

char getCharAtxy(short int x, short int y) ;
void moveFarmerLeft() ;
void moveFarmerRight() ;
void moveFarmerUp() ;     
void moveFarmerDown() ;      
void erasefarmer() ; 
void printfarmer() ;
void movesnakeV1(string) ;
string cdirV1(string);
void printsnakeV1() ;
void erasesnakeV1() ;
void movesnakeD1() ;
void printsnakeD1() ;
void erasesnakeD1() ;
void movesnakeH1(string) ;
string cdirH1(string);
void printsnakeH1() ;
void erasesnakeH1() ;
void gotoxy(int x, int y);
void printMaze();





main() {
    system("cls") ;
     int fX = 25 ;
    int fY = 22 ;
    printMaze();
    printfarmer() ;
    printsnakeV1() ;
    printsnakeH1() ;
    movesnakeD1() ; 
    string dirV1 = "down";
    string dirH1 = "right";


    while(true){
        
        dirV1 = cdirV1(dirV1);
       movesnakeV1(dirV1) ;
       Sleep(100) ;
       dirH1 = cdirH1(dirH1);
        movesnakeH1(dirH1) ; 
        Sleep(100) ;
        movesnakeD1() ;
        Sleep(100) ;
     


      if(GetAsyncKeyState(VK_RIGHT))
{
    moveFarmerRight()  ;
}
    if(GetAsyncKeyState(VK_LEFT))
{  
    moveFarmerLeft()  ;
    }
     if(GetAsyncKeyState(VK_UP))
{
    moveFarmerUp()   ;     
} 
    if(GetAsyncKeyState(VK_DOWN))
{  
    moveFarmerDown()  ;
    }
	   
    }


}

void moveFarmerRight() {

     if (getCharAtxy(fX + 1 , fY) == ' ')
    {
    erasefarmer() ;
    fX = fX + 1 ;
    printfarmer() ;
  }
}

void moveFarmerLeft() {

    
    if (getCharAtxy(fX - 1 , fY) == ' ')
    {
    erasefarmer() ;
    fX = fX - 1 ;
       
    printfarmer() ;
     }
}


  void moveFarmerDown() 
    {
        if (getCharAtxy(fX  , fY + 11) == ' ')
    {
    erasefarmer() ;
    fY = fY + 1 ;
       
    printfarmer() ;
     }
    }


 void moveFarmerUp() 
    {
        if (getCharAtxy(fX  , fY - 1) == ' ')
    {
    erasefarmer() ;
    fY = fY - 1 ;
       
    printfarmer() ;
    }

    
    
    }


    void movesnakeV1(string dirV1)
{
 
    erasesnakeV1() ; 

     if (dirV1 == "down"){
        sY1 = sY1 +1;
     }
        if (dirV1 == "up"){
            sY1 = sY1 -1;
        }
      printsnakeV1() ;
}

string cdirV1(string dirV1){

    if (dirV1 == "down" && sY1 >= 27){
            dirV1 = "up";
    }
        if (dirV1 == "up" && sY1 <= 4){
            dirV1 = "down";
    }
    return dirV1;
}

void printsnakeV1() {
    
    system("color 04") ;

    gotoxy(sX1 , sY1) ;

    cout << "   /\\_/\\ "  ;
    gotoxy(sX1,sY1 + 1)   ;
    cout << "  ( o o ) "   ;
    gotoxy(sX1,sY1 + 2)  ;
    cout << "   (   )  "   ;
    gotoxy(sX1,sY1 + 3) ;
    cout << "    (_)   "  ;

}

void erasesnakeV1() {

    gotoxy(sX1,sY1) ;

    cout << "             "  ;
    gotoxy(sX1,sY1 + 1) ;
    cout << "          "  ;
    gotoxy(sX1,sY1 + 2) ;
    cout << "          "   ;
    gotoxy(sX1,sY1 + 3) ;
    cout << "          "  ;

}


        void movesnakeH1(string dirH1)
    {
        erasesnakeH1() ;
       if (dirH1 == "right"){
        sX2 = sX2 +2;
       }
        if (dirH1 == "left"){
            sX2 = sX2 -2;
        }
        printsnakeH1() ;
    
    }

    string cdirH1(string dirH1){

        if (dirH1 == "right" && sX2 >= 70){
            dirH1 = "left";
        }
            if (dirH1 == "left" && sX2 <= 40){
            dirH1 = "right";
        }
        return dirH1;
    }


void printsnakeH1() {
    system("color 05") ;
    gotoxy(sX2 , sY2) ;
    cout << "   /\\_/\\ " ;
    gotoxy(sX2 ,sY2 + 1) ;
    cout << "  ( o o ) " ;
    gotoxy(sX2  ,sY2 + 2)  ;
    cout << "   (   )  ";
    gotoxy(sX2  ,sY2 + 3) ;
    cout << "    (_)   ";
}


    
void erasesnakeH1() {

    gotoxy(sX2 ,sY2) ;
    cout << "            " ;
    gotoxy(sX2 ,sY2 + 1) ;
    cout << "              " ;
    gotoxy(sX2 ,sY2 + 2) ;
    cout << "              " ;
    gotoxy(sX2 ,sY2 + 3) ;
    cout << "              "  ; 

}


        void movesnakeD1()
    {

         erasesnakeD1() ;
        
    sX3 = sX3 +2;
    sY3 = sY3 + 1;
        
       if(sY3 == 24 )
    {
        sX3 = 60 , sY3 = 15 ; }
       printsnakeD1();
    
    }

void printsnakeD1() {
    system("color 03") ;
    gotoxy(sX3, sY3) ;
    cout << " /\\_/\\ " << endl;
    gotoxy(sX3, sY3 + 1)  ;
    cout << "( o o ) " << endl;
    gotoxy(sX3, sY3 + 2) ;
    cout << " (   )  " <<  endl;
     gotoxy(sX3, sY3 + 3) ;
    cout << "  (_)   " << endl;
}


void erasesnakeD1() {

    gotoxy(sX3, sY3) ;
    cout << "           " << endl;
    gotoxy(sX3, sY3 + 1) ;
    cout << "         " << endl;
    gotoxy(sX3, sY3 + 2) ;
    cout << "         " <<  endl;
     gotoxy(sX3 , sY3 + 3) ;
    cout << "         " << endl;
}









void printfarmer() {

    system("color 0B") ;
    gotoxy(fX,fY);
    cout << "  ~~~~~~~~~" <<endl;
    gotoxy(fX,fY+1);
    cout << " |  o  o  |" <<endl;
    gotoxy(fX,fY+2);
    cout << " |   ^    |" <<endl;
    gotoxy(fX,fY+3);
    cout << " |  ---   |" <<endl;
    gotoxy(fX,fY+4);
    cout << "  \\______/" <<endl;
    gotoxy(fX,fY+5);
    cout << "   |    |" <<endl;
    gotoxy(fX,fY+6);
    cout << "  /|\\  /|\\" <<endl;
    gotoxy(fX,fY+7);
    cout << " / | \\/ | \\" <<endl;
    gotoxy(fX,fY+8);
    cout << "    |  |" <<endl;
    gotoxy(fX,fY+9);
    cout << "   /   \\" << endl;
}

void erasefarmer() 
{
    gotoxy(fX,fY);
    cout << "            " <<endl;
    gotoxy(fX,fY+1);
    cout << "              " <<endl;
    gotoxy(fX,fY+2);
    cout << "            " <<endl;
    gotoxy(fX,fY+3);
    cout << "            " <<endl;
    gotoxy(fX,fY+4);
    cout << "             " <<endl;
    gotoxy(fX,fY+5);
    cout << "           " <<endl;
    gotoxy(fX,fY+6);
    cout << "             " <<endl;
    gotoxy(fX,fY+7);
    cout << "              " <<endl;
    gotoxy(fX,fY+8);
    cout << "            " <<endl;
    gotoxy(fX,fY+9);
    cout << "            " << endl; 

}













char getCharAtxy(short int x, short int y)
{   

     CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
:   ' ';
}



void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x ;
coordinates.Y = y ;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}




void printMaze()
{
cout<<"  #########################################################################################   "<<endl;
cout<<"  #---------------------------------------------------------------------------------------#   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  #                                                                                       #   "<<endl;
cout<<"  # --------------------------------------------------------------------------------------#   "<<endl;
cout<<"  #########################################################################################   "<<endl;
}



