#include <iostream>

#include<ctime>
#include <string>


using namespace std;

const int MAX_TRIES = 5;
int letterFill(char, string, string&);


 
int main()
{

 
  string name;
  string yes_or_no;
  char letter;
  int num_of_wrong_guesses = 0;
  string hint;

  string word;
  string words[] =
  {
    "mexico",
    "france",
    "italy",
    "southafrica",
    "japan",
    "australia",
    "egypt",
    "singapore",
    "china",
    "turkey"
  };
  string teams[]=
  {
    "manchestercity",
    "realmadrid",
    "barcelona",
    "manchesterunited",
    "arsenal"
  }
  string 
  srand(time(NULL));
  int n = rand() % 10;  
  word = words[n]; 


  switch (n) 
  {
  case 0: 
    hint = "Hint: This country shares a border with the USA";
    break;

  case 1:  
    hint = "Hint: This country has the Eiffel tower";
    break;

  case 2: 
    hint = "Hint: This country has the city called Rome";
    break;

  case 3: 
    hint = "Hint: The country in which nelson Mandela was born (Do not enter a space for this one)";
    break;


  case 4: 
    hint = "Hint: The country in which anime was created";
    break;


  case 5:  
    hint = "Hint: This country has kangaroos";
      break;

  case 6:    
  hint = "Hint: This country has giant pyramids";
    break;


  case 7: 
    hint = "Hint: This country has a amazing airport called  Changi Airport";
    break;

  case 8:  
    hint = "Hint: This country has a place called Beijing.";
    break;

  case 9: 
    hint = "Hint: This country has a place called Istanbul.";
    break;
  }


  
  string unknown(word.length(), ('_'));  

  // start the game
  cout << "\n\nWelcome to the guessing game...Made by moustapha"; 
  cout << "\n\nEach letter is represented by a star."; 
  cout << "\n\nYou have to type only one letter in one try";   
  cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.";   
  cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
  
 
  while (num_of_wrong_guesses < MAX_TRIES)
  {
    cout << endl << hint << endl;
    cout << "\n\n" << unknown;        
    cout << "\n\nGuess a letter: ";    
    cin >> letter;                      

    
    if (letterFill(letter, word, unknown) == 0) 
    {
      cout << endl << "\n\Whoops! That letter isn't in there!" << endl;   
      num_of_wrong_guesses++; 
    }
    else
    {
      cout << endl << "\n\You found a letter! Isn't that exciting!" << endl; 
    }
    
    cout << "\n\You have " << MAX_TRIES - num_of_wrong_guesses; 
    cout << " guesses left." << endl; 
    
    if (word == unknown)
    {
      cout << word << endl; 
      cout << "\n\Yeah! You got it!" << endl;
      cout << "\n\Would like to play another round of guessing?" << endl;
      cout << "\n\Enter yes or no" << endl; 

      cin >> yes_or_no;

      if (yes_or_no == "yes") 
      {
        main(); 
      }


      if (yes_or_no == "no") 
      {
        cout << "Closing program" << endl;
        return 0; 
        
      }
      break;
    }
  }
  if (num_of_wrong_guesses == MAX_TRIES) 
  {
    cout << "\n\Sorry, you lose." << endl;
    cout << "\n\The word was " << word << endl;
    cout << "\n\Would like to play another round of guessing?" << endl;
    cout << "\n\Enter yes or no" << endl;

    cin >> yes_or_no;

    if (yes_or_no == "yes")  
    {
      main();
    }

    if (yes_or_no == "no") 
    {
      cout << "Closing program" << endl;
        return 0; 
       
    }

  }
  return 0; 
  
 
}



int letterFill(char guess, string secretword, string& guessword)
{
  int i;
  int matches = 0;
  int len = secretword.length();
  for (i = 0; i < len; i++)
  {
   
    if (guess == guessword[i])
      return 0;
   
    if (guess == secretword[i])
    {
      guessword[i] = guess;
      matches++;
    }
  }
  return matches;
}
