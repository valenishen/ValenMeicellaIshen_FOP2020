#include <iostream>
using namespace std;

int main ()
{
  //Declare alphabet to char
  char alphabet;

  //Display request to input an alphabet and assign to alphabet variable
  cout << "Let's guess what's your Alphabet's type!\n" 
       << "What alphabet do you want? ";
  cin >> alphabet;

  //Make condition with switch
  switch (alphabet)
  {
    //vowel : a i u e o
    case 'a': case 'i': case 'u': case 'e': case 'o':
    cout << "It's a Vowel" << endl;
    break;

    //consonant : neither a i u e o
    case 'b': case 'c': case 'd': case 'f': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p':  case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z':
    cout << "It's a Consonant" << endl;
    break;

    //Display this if the input was not an alphabet
    default: 
    cout << "I don't think that's an alphabet!" << endl;
    break; 
  }
return 0;
}