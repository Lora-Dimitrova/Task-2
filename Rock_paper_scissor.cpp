#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int sistemchoice = rand() % 3;

    int scissors = 0;
    int rock = 1;
    int paper = 2;

    int userchoice;
    cout<<"Input 0, 1 or 2 (scissors (0), rock (1), paper (2)) : ";
    cin>>userchoice;

           if (userchoice == 0 and sistemchoice == 1){
    cout<<"You're scissors. The computer is rock. You lost.";
    } else if (userchoice == 0 and sistemchoice == 2) {
    cout<<"You're scissors. The computer is paper. You won.";
    } else if (userchoice == 1 and sistemchoice == 0){
    cout<<"You're rock. The computer is scissors. You won.";
    } else if (userchoice == 1 and sistemchoice == 2){
    cout<<"You're rock. The computer is paper. You lost.";
    } else if (userchoice == 2 and sistemchoice == 0){
    cout<<"You're paper. The computer is scissors. You lost.";
    } else if (userchoice == 2 and sistemchoice == 1){
    cout<<"You're paper. The computer is rock. You won.";
    } else
    cout<<"It's a draw!";

    return 0;
}
