//Madhav Chhura

#include <iostream> 
using namespace std;

void set_rand_seed(int seed = time(NULL))
{
	srand(seed);
}

int my_random_num()
{
	return rand() % 100 + 1;
}
int main ()
{
  int iSecret, iGuess;
  
  int count = 1;
  set_rand_seed();
  iSecret = my_random_num();
  cout << "The secret number is between 1 and 100.\n";
  cout << "What is your number? ";
  do {
    cin >> iGuess;

    if(count < 5)
    {
   	 	if (iSecret < iGuess) 
    	{
    		cout << "Too high, guess again? ";
    		count++;
    	}
    	if (iSecret > iGuess) 
    	{
    		cout << "Too low, guess again? ";
    		count++;
    	}
    }
    else
    {
    	cout << "You lose. The number is " << iSecret << "\n";
    	return 0;
    }
  } while (iSecret!=iGuess);

  cout << "Right! It took you " << count << " tries\n";
  return 0;
}
/*

OUTPUT
What is your number? 50
Too high, guess again? 40
Too high, guess again? 30
Too low, guess again? 35
Too high, guess again? 22
You lose. The number is 34

What is your number? 50
Too high, guess again? 35
Too high, guess again? 25
Too high, guess again? 15
Too low, guess again? 20
You lose. The number is 17

What is your number? 50
Too low, guess again? 80
Too low, guess again? 90
Too low, guess again? 93
Too low, guess again? 95
Right! It took you four tries.

*/

