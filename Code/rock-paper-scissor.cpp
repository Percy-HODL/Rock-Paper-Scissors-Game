#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    char computer;
    char player;
    u_int32_t computer_score = 0; // To track computer's score
    u_int32_t player_score = 0; // To track player's score
    char playmore;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Welcome to Rock, Paper and Scissors Game" << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Note: " << endl;
    cout << "\t\t\t\t";
    cout << "\t\t r : Rock" << endl << "\t\t\t\t" << "\t\t p - Paper" << endl << "\t\t\t\t" << "\t\t s - scissor" << endl << "\t\t\t\t"<< endl << endl;
    cout << "\t\t\t\t";
    for(int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << endl;
    do{
        int number = 0;
        srand(time(0));        // initialized time to 0
        number = rand() % 3 + 1; // will choose a number in range 1 - 3 
        // r - for rock
        // p - for paper
        // s - for scissors
        if (number == 1)
        {
            computer = 'r';
        }
        else if (number == 2)
        {
            computer = 's';
        }
        else
        {
            computer = 'p';
        }
        // cout << "Note: \"r\" for \"Rock\", \"p\" for \"Paper\", \"s\" for \"Scissor\"." << endl;
        cout << "\t\t\t\t";
        cout << "Enter your choice: ";
        cin >> player;
        switch(player){
            case 'r':
                if(computer == 'r'){
                    cout << "\t\t\t\t";
                    cout << "Woah, that's a tie!\n";
                }
                if (computer =='p'){
                    cout << "\t\t\t\t";
                    cout << "You lose!\n";
                    computer_score+=1;
                }
                if (computer == 's'){
                    cout << "\t\t\t\t";
                    cout << "You win\n";
                    player_score+=1;
                }
                break;
            case 'p':
                if(computer == 'r'){
                    cout << "\t\t\t\t";
                    cout << "You win!\n";
                    player_score +=1;
                }
                if (computer =='p'){
                    cout << "\t\t\t\t";
                    cout << "Woah, thats a tie !\n";
                    
                }
                if (computer == 's'){
                    cout << "\t\t\t\t";
                    cout << "You lose \n";
                    computer_score+=1;
                }
                break;
            case 's':
                if(computer == 'r'){
                    cout << "\t\t\t\t";
                    cout << "You lose!\n";
                    computer_score+=1;

                }
                if (computer =='p'){
                    cout << "\t\t\t\t";
                    cout << "You win!\n";
                    player_score+=1;
                }
                if (computer == 's'){
                    cout << "\t\t\t\t";
                    cout << "Woah, thats a tie\n";
                    player_score+=1;
                }
                break;


        }
        cout << "\t\t\t\t";
        cout << "Do you want to Play Again?" << endl;
        cout << "\t\t\t\t";
        cout << "Note: Press 'n' to exit! Press Anything to continue: ";
        cin >> playmore;
        cout << "\t\t\t\t";
        for(int i = 0; i < 50; i++){
            cout << "-";
        }
        cout << endl;
    }while(playmore != 'n');
    if(player_score > computer_score){
        cout << "You win with a score of " << player_score << " whilst the computer only got " << computer_score << endl;
    }
    if(player_score < computer_score){
        cout << "You lose with a score of " << player_score << " whilst the computer got " << computer_score << endl;
    }
    if(player_score == computer_score){
        cout << "Woah, thats a tie, both sides scored " << player_score << endl;
    }
    return 0;



}

