#include <iostream>
using namespace std; 
#include <cstdlib>
#include <ctime>



void moveHare (int &harePos, const int arrH[10], int &hareMove) {
    //srand(time(0));
hareMove = rand()%10;
    
    if (arrH[hareMove] == 0) {
        // Sleep, no move
    } else if (arrH[hareMove] == 1) {
        harePos += 9;  // Big hop
    } else if (arrH[hareMove] == 2) {
        harePos -= 12;  // Big slip
    } else if (arrH[hareMove] == 3) {
        harePos += 1;  // Small hop
    } else if (arrH[hareMove] == 4) {
        harePos -= 2;  // Small slip
    }

    if (harePos < 1) {
        harePos = 1;
    }
    if (harePos > 70) {
        harePos = 70;
    }


}



void moveTortoise(int &tortoisePos, const int arrT[10], int &tortoiseMove) {
    //srand(time(0));
    tortoiseMove = rand()%10;

    if (arrT[tortoiseMove] == 0) {
        // No move or slow plod, same effect
        tortoisePos += 1;  // Slow plod
    } else if (arrT[tortoiseMove] == 1) {
        tortoisePos += 3;  // Fast plod
    } else if (arrT[tortoiseMove] == 2) {
        tortoisePos -= 6;  // Slip
    }

    if (tortoisePos < 1) {
        tortoisePos = 1;
    }
    if (tortoisePos > 70) {
        tortoisePos = 70;
    }

      
         
}


void drawingposition(int tortoisePos, int harePos) {
    for (int i = 1; i <= 70; ++i) {
        if (i == tortoisePos && i == harePos) {
            cout << "OUCH!!!";
            i += 5;  // Skip the next 5 positions since "OUCH!!!" is 6 characters long
        } else if (i == tortoisePos) {
            cout << 'T';
        } else {
            cout << '-';
        }
    }
    cout << endl;

    for (int i = 1; i <= 70; ++i) {
        if (i == harePos) {
            cout << 'H';
        } else {
            cout << '-';
        }
    }
    cout << endl;
}

int main() {
  
string answer;
int harePos{0};
int tortoisePos{0};
int hareMove, tortoiseMove;
//int Hadd{0};
//int Tadd{0};
  

    srand(time(0));

    int arrH[10] = {0,0,1,1,2,3,3,3,4,4};
    int arrT[10] ={0,0,0,0,0,1,1,2,2,2};
    
    
cout << "Hello Welcome to the Tortoise and the Hare\n\n\n\n";
cout << "\n\nAre you ready to play? (Y/N) ";
  cin >> answer;

  if (answer == "Y" || answer == "y") {

cout << "\n\n\n\nBANG!!!!!! \n\n\n\nAND THEY ARE OFF!!!!!\n\n";


while (tortoisePos < 70 && harePos < 70) {
   
    moveTortoise(tortoisePos, arrT, tortoiseMove);
    moveHare(harePos, arrH, hareMove);
    drawingposition(tortoisePos, harePos);
    cout << "\n\n\n";  

   // cout << "Tortoise random move number: " << tortoiseMove << endl;
   // cout << "Hare random move number: " << hareMove << endl;
 


}

      if (tortoisePos >= 70 && harePos >= 70) {
          cout << "It's a tie!\n";
      } else if (tortoisePos >= 70) {
          cout << "Tortoise wins!\n";
      } else {
          cout << "Hare wins!\n";
      }
      


      


      
  } else if (answer == "N" || answer == "n") {
  
cout << "inside the No";
    }

  
}