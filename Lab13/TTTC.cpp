//TTTC = Tic Tac Toe with Computer

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE=3;

// declare all the functions here
void InitializeBoard(char gameBoard [][SIZE]);
void Display(char gameBoard [][SIZE]);
bool BoardIsFull(char gameBoard [][SIZE]);
bool Assign(char gameBoard [][SIZE], int, int, char);
char CheckWon(char gameBoard [][SIZE]);

int main()
{
    //Variable declaration
    char turn;
    char player = 'X';
    char comp = 'O';
    int printOneTime = 1; //so the output display one time
    int x, y;
    char gameBoard[SIZE][SIZE];

    // Call the function InitializeBoard to Initialize the game board pieces to blanks
    InitializeBoard(gameBoard);
   
    // Randomly determine who is to start the game
    int t=rand()%2;
    if (t == 1)
        turn='X';
    else
        turn='O';
    cout << "Game Starts!" << endl;

    // Display the initial game board on screen
    Display(gameBoard);

    // The game is played between two players until one of two cases occurs:
    //  (1) the board is completely filled with pieces from the player, and no winner is determined. 
    //  (2) one player wins the game
    while (!BoardIsFull(gameBoard) && (CheckWon(gameBoard)=='n'))
    {
   	    // Prompt the player to enter the position to play the next move
	    // The move is validated in the inner loop. 
	    // Only if a move is valid, it will be assigned to the gameboard
        do
        {
            do {
                if (turn == 'X'){
                    cout << endl << endl;
                    cout << "Player " << turn << " makes the next move."<<endl;
                    cout << "Enter the x, y location, 0<=x<3, 0<=y<3:";
                    cin >> x >> y;
                }
                else if (turn == 'O'){
                    x = rand() % 4;
                    y = rand() % 4;
                    if (printOneTime == 1){
                        cout << endl << endl;
                        cout << "Computer " << turn << " makes the next move."<<endl;
                        printOneTime = 0;
                    } 
                }
          } while (x>2 || x<0 || y>2 || y<0);
        
            printOneTime = 1;

       } while (!Assign(gameBoard, x, y, turn));
       
    // The Assign function will attempt to assign a move from a player to the gameboard. IF there is already a piece at that location, Assign function will not put the piece at that location and it returns false. Otherwise, it will put the piece at that location and return true. 
    // Show the updated game board
    Display(gameBoard);

	// determines the player for the next move
    if (turn == 'X')
        turn = 'O';
    else
        turn = 'X';
    }

    cout << endl;
    
    // Display the result of the game
    if (CheckWon(gameBoard) == 'X')
        cout << "Player wins!" << endl;
    else if (CheckWon(gameBoard) == 'O')
        cout << "Computer wins! Try again next time" << endl;
    else
        cout << "This is a Draw game!" << endl;

    return 0;
}

// This function initializes all the elements of the game board to blank characters ' '
void InitializeBoard(char gameBoard [][SIZE])
{
    for (int row = 0; row < SIZE; row++){
        for (int colomn = 0; colomn < SIZE; colomn++){
            gameBoard[row][colomn] = ' ';
        }
    }
}

// This function displays the game board as a 3 by 3 board
void Display(char gameBoard[][SIZE])
{
    for (int row = 0; row < SIZE; row++){
        for (int colomn = 0; colomn < SIZE; colomn++){
            cout << left << setw(3) << gameBoard[row][colomn];
            if(colomn < SIZE - 1){
                cout << "|";
            }
        }
        if (row < SIZE - 1){
            cout << endl;
            cout << "-----------";
            cout << endl;
        }
    }
}

// This function checks to see if all the elements of the game board have been filled
bool BoardIsFull(char gameBoard[][SIZE])
{
    for (int row = 0; row < SIZE; row++){
        for (int colomn = 0; colomn < SIZE; colomn++){
            if (gameBoard[row][colomn] == ' '){
                return false;
                break;
            }
        }
    }
  
    return true;
}

// This function assigns character p to location (x, y) on the game board
// p is either 'X' or 'O'
// If the location (x, y) already has a piece/character there, do not assign p to that location, returns the boolean value false
// If the location (x, y) does not have any piece/character, assign p to that location and return true
bool Assign(char gameBoard[][SIZE], int x, int y, char p)
{
    if (gameBoard[x][y] == ' '){
        gameBoard[x][y] = p;
        return true;
    } else
        return false;
}

// check to see if the game is over by checking
// if any row, column or diagonal has the same character
// if 'X' is on all elements of a row, column, or diagonal, 'X' is returned
// if 'O' is ............................................., 'O' is returned
// otherwise, 'n' is returned.
char CheckWon(char gameBoard[][SIZE])
{
    char won = 'n';

    // write multiway if statement to check whether a win condition is met
    // Case 1: the 3 elements on the i-th row of the array are the same, assign the array element value to variable "won"
    for (int row = 0; row < SIZE; row++){
        char element = gameBoard[row][0];
        if (element != ' '){
            if (element == gameBoard[row][1] && element == gameBoard[row][2]){
                won = element;
            }        
        }
    }

    // Case 2: the 3 elements on the j-th column of the array are the same, assign value to variable "won" 
    for (int colomn = 0; colomn < SIZE; colomn++){
        char element = gameBoard[0][colomn];
        if (element != ' '){
            if (element == gameBoard[1][colomn] && element == gameBoard[2][colomn]){
                won = element; 
            }
        }
    }

    // Case 3: the 3 elements on the diagonal of the array are the same, assign value to variable "won"
    if (gameBoard[0][0] != ' '){
        if ((gameBoard[0][0] == gameBoard[1][1]) && (gameBoard[0][0] == gameBoard[2][2])){
            won = gameBoard[0][0];
        }
    }

    // Case 4: the 3 elements of the second diagonal of the array are the same, assign value to variable "won"
    if (gameBoard[0][2] != ' '){
        if ((gameBoard[0][2] == gameBoard[1][1]) && (gameBoard[0][2] == gameBoard[2][0])){
            won = gameBoard[0][2];
        }
    }
  return won;
}