#include <iostream>
using namespace std; 
#include <cstdlib>
#include <ctime>



int HarePos (int arrH[10]) {
    //srand(time(0));
int Randomnum = rand()%10;


  return arrH[Randomnum];
}




int TurtlePos(int arrT[10]) {
    //srand(time(0));
    int Randomnum = rand()%10;

    return arrT[Randomnum];
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
    
 // if(Tadd == 0) {
 //     cout << "Tortoise landed on 'fast plod' and has advanced 3 squares to the right";
 // } else if (Tadd==1) { 
 //     cout << "Tortoise landed on 'slip' and has advanced 6 squares to the right";
 // } else if (Tadd ==2) {
 //     cout << "Tortoise landed on 'slow plod' and has advanced 1 squares to the left";
    
     



    
cout << "Hello Welcome to the Tortoise and the Hare\n\n\n\n";
cout << "The rules of the game: \n\n\n";
    cout << "There are two characters: The Tortoise and the Hare. Each character has special moves. The Tortoise has: Fast plod, Slip, and Slow Plod. The Hare has: Sleep, big hop, big slip, small hop and small slip. \n\n\n There is no advantage to picking either charatacer. \n\n\n The first character to finish the race and reach square 70 will win the game. \n\n\n The reward for winning is  a pail of fresh carrots and lettuce. \n\n\nWho do you think will win?\n\n\n\nLets begin the game!!";
cout << "\n\nAre you ready to play? (Y/N) ";
  cin >> answer;

  if (answer == "Y" || answer == "y") {

cout << "\n\n\n\nBANG!!!!!! \n\n\n\nAND THEY ARE OFF!!!!!\n\n";


while (Tpos < 70 && Hpos <70) {
    
Hadd = HarePos(arrH);


    if(Hadd == 0) {
         cout << "Hare landed on 'sleep' and has advanced 0 moves";
     } else if (Hadd==1) { 
         cout << "Hare landed on 'big hop' and has advanced 9 squares to the right";
     } else if (Hadd ==2) {
         cout << "Hare landed on 'big slip' and has advanced 12 squares to the left";

     } else if (Hadd ==3) {
         cout << "Hare landed on 'small hop' and has advanced 1 move to the right";
     } else if (Hadd == 4) {
         cout << "Hare landed on 'small slip' and has advanced 2 squares to the left";
     }


Tadd = TurtlePos(arrT);

    if(Tadd == 0) {
         cout << "Tortoise landed on 'fast plod' and has advanced 3 squares to the right";
     } else if (Tadd==1) { 
         cout << "Tortoise landed on 'slip' and has advanced 6 squares to the right";
     } else if (Tadd ==2) {
         cout << "Tortoise landed on 'slow plod' and has advanced 1 squares to the left";
    }

    
Hpos= Hpos + Hadd;
Tpos= Tpos + Tadd;
    cout << "Score for Hare: " << Hpos << "\nScore for Turtle: " << Tpos;

    


 


}


      




      
  } if (answer == "N" || answer == "n") {
  
cout << "inside the No";
    }

  
}