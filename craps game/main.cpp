#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice(); // function prototype to sum the dices rolls

int main()
{
   enum Status{WIN,LOSE,CONTINUE}; //enumeration with constant values start with zero.
    int myPoint=0; //variable for indicate the point i Should get to win
    Status gameStatus; //Declaring a variable from the user-defined type (enumeration status).

    srand(time(0)); //Randomizing the rand function.
    int sumOfDice= rollDice();

    switch (sumOfDice)
    {
      case 7:
      case 11:
        gameStatus=WIN;
       break;

      case 2:
      case 3:
      case 12:
        gameStatus=LOSE;
      break;

      default:
        gameStatus=CONTINUE;
        myPoint = sumOfDice; //Indicating the point of continuation
        cout<<"The point is "<<myPoint<<endl;
    }

    while(gameStatus==CONTINUE)
    {
        sumOfDice=rollDice(); //Rolling the dice again

        if(sumOfDice==myPoint)
          gameStatus=WIN;
        else
            if(sumOfDice==7)
            gameStatus=LOSE;
    }

    if(gameStatus==WIN)
        cout<<"The player wins"<<endl;
    else
        cout<<"The player loses"<<endl;
    return 0;
}
//End main body

//Start rollDice function
int rollDice()
{
  int dice1 = 1+ rand()%6; //Declaring a variable with random values changes every second and scaling & shifting the rand function.
  int dice2 = 1+rand()%6;  //Declaring a variable with random values changes every second and scaling & shifting the rand function.
  int sum = dice1 + dice2; // Calculating the sum

  cout<<"The player roll "<<dice1<<" + "<<dice2<<"  So ,the sum is "<<sum<<endl;

  return sum;
// End of function rollDice()
}
