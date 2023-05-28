/* Write a program that plays the game "Rock, Paper, Scissors" */
#include "../std_lib_facilities.h"

int main() {
   char inp {0};
   vector<int> rng (10); /* Play 10 games */
   int next {0};
   string move {""};
   int seed {12345};

   cout << "Please type in a number to be used as random seed: ";
   cin >> seed;
   for (int i = 0; i < rng.size(); ++i)
       rng[i] = (seed + i) % 3;

   cout << "Choose (r)ock, (p)aper or (s)cissors: ";
   while (next < rng.size() && cin >> inp) {
       if (rng[next] == 0)
           move = "rock";
       else if (rng[next] == 1)
           move = "paper";
       else if (rng[next] == 2)
           move = "scissors";
       cout << "Computer chose " << move << "!\n";
       
       switch(inp) {
            case 'r':
                if (move == "rock")
                    cout << "Tie! Rocks break each other.\n";
                else if (move == "paper")
                    cout << "You lose! Paper wraps around rock.\n";
                else if (move == "scissors")
                    cout << "You win! Rock breaks scissors.\n";
                break;
            case 'p':
                if (move == "rock")
                    cout << "You win! Paper wraps around rock.\n";
                else if (move == "paper")
                    cout << "It's a tie!\n";
                else if (move == "scissors")
                    cout << "You lose! Scissors cut paper.\n";
                break;
            case 's':
                if (move == "rock")
                    cout << "You lose! Rock breaks scissors.\n";
                else if (move == "paper")
                    cout << "You win! Scissors cut paper.\n";
                else if (move == "scissors")
                    cout << "It's a tie!\n";
                break;
            default:
                cout << "Please choose either rock, paper or scissors.\n";
                break;
       }
       if (next != rng.size() - 1)
           cout << "Your choice: ";
       next++;
   }
   cout << "Thanks for playing!\n";
}

