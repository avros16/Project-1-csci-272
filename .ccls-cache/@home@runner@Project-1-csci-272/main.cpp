#include <iostream>
using namespace std; 
#include <cstdlib>
#include <ctime>



int HarePos (int arrH[10]) {
    //srand(time(0));
int Randomnum = rand()%10;


    if(arrH[Randomnum] == 0) {
         cout << "Hare landed on 'sleep' and has advanced 0 moves";
     } else if (arrH[Randomnum]==1) { 
         cout << "Hare landed on 'big hop' and has advanced 9 squares to the right";
     } else if (arrH[Randomnum] ==2) {
         cout << "Hare landed on 'big slip' and has advanced 12 squares to the left";

     } else if (arrH[Randomnum] ==3) {
         cout << "Hare landed on 'small hop' and has advanced 1 move to the right";
     } else if (arrH[Randomnum]== 4) {
         cout << "Hare landed on 'small slip' and has advanced 2 squares to the left";
     }

    
    
  return  0;
      ;
}



int TurtlePos(int arrT[10]) {
    //srand(time(0));
    int Randomnum = rand()%10;

    if(arrT[Randomnum] == 0) {
         cout << "Tortoise landed on 'fast plod' and has advanced 3 squares to the right";
     } else if (arrT[Randomnum]==1) { 
         cout << "Tortoise landed on 'slip' and has advanced 6 squares to the right";
     } else if (arrT[Randomnum]==2) {
         cout << "Tortoise landed on 'slow plod' and has advanced 1 squares to the right";
        
}
     return 0; 
         ;
}






int main() {
  
string answer;
string answer1;
int Hpos{0};
int Tpos{0};
int Hadd{0};
int Tadd{0};
  

    srand(time(0));

    int arrH[10] = {0,0,1,1,2,3,3,3,4,4};
    int arrT[10] ={0,0,0,0,0,1,1,2,2,2};
    
    
cout << "Hello Welcome to the Tortoise and the Hare\n\n\n\n";
cout << "\n\nAre you ready to play? (Y/N) ";
  cin >> answer;

  if (answer == "Y" || answer == "y") {

cout << "\n\n\n\nBANG!!!!!! \n\n\n\nAND THEY ARE OFF!!!!!\n\n";


while (Tpos < 70 && Hpos <70) {
    
Hadd = HarePos(arrH);
Tadd = TurtlePos(arrT);
Hpos= Hpos + Hadd;
Tpos= Tpos + Tadd;
    
    cout << "Score for Hare: " << Hpos << "\nScore for Turtle: " << Tpos;

    


 


}


      




      
  } if (answer == "N" || answer == "n") {
  
cout << "inside the No";
    }

  
}