/*the following is the final code for the main file
do allow only minor tweaks into the code.

Cyril, the main file is in perfect condition.
only a little spacing is required which I will do later
please find a way to get the random function to work on the data file

                                            -Akash*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "data.c"

void start()
{
    int option;
    system("clear");
    printf("\n\n    Select a Category      \n\n");
    printf("          1) General Knowledge\n          2) Science\n          3) Technology\n          4) Geography\n          5) Indian History\n\n Input any other key to go to Start Menu\n\n\n");
    printf("          Enter Category number: ");
    scanf("%d",&option);
    switch(option)
    {
        case 1: topic0();
                break;
        case 2: topic1();
                break;
        case 3: topic2();
                break;
        case 4: topic3();
                break;
        case 5: topic4();
                break;
        default:printf("\n");
    }
}

void credits()
{
    char a;
    printf("\n\n\n\t\t\t\t  ~~~~~~~~~~~Credits~~~~~~~~~~~\n\n\n\n");
    printf("\t\t\t\t  ~~~~~Database Collection~~~~~\n\t\t\t\t\t   Subramanium\n\t\t\t\t\t     Aadarsh\n\n");
    printf("\t\t\t\t      ~~~~~Programming~~~~~\n\t\t\t\t\t      Akash\n\t\t\t\t\t      Cyril\n\t\t\t\t\t      Varkey\n\n");
    printf("\t\t\t\t     ~~~~~User Interface~~~~~\n\t\t\t\t\t      Cyril\n\t\t\t\t\t      Akash");
    printf("\n\n\n\t\t\t\t ~~~~~Press ENTER to return~~~~~\n");
    getchar(); //let this statement be
    scanf("%c",&a); //this too
}


void main()
{
  char con;
  int inp;
  while(inp!=3) //loops the whole menu until 3 or any no other than 1 or 2 is pressed
  {
    void topic0();
    void topic1();
    void topic2();
    void topic3();
    void topic4();
    system("clear");
    printf("\n\n");
    printf("\t ▄▄▄           █████   █    ██  ██▓▒███████▒     ▄████  ▄▄▄       ███▄ ▄███▓▓█████ \n");
    printf("\t▒████▄       ▒██▓  ██▒ ██  ▓██▒▓██▒▒ ▒ ▒ ▄▀░    ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀ \n");
    printf("\t▒██  ▀█▄     ▒██▒  ██░▓██  ▒██░▒██▒░ ▒ ▄▀▒░    ▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███   \n");
    printf("\t░██▄▄▄▄██    ░██  █▀ ░▓▓█  ░██░░██░  ▄▀▒   ░   ░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄ \n");
    printf("\t ▓█   ▓██▒   ░▒███▒█▄ ▒▒█████▓ ░██░▒███████▒   ░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒\n");
    printf("\t ▒▒   ▓▒█░   ░░ ▒▒░ ▒ ░▒▓▒ ▒ ▒ ░▓  ░▒▒ ▓░▒░▒    ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░\n");
    printf("\t  ▒   ▒▒ ░    ░ ▒░  ░ ░░▒░ ░ ░  ▒ ░░░▒ ▒ ░ ▒     ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░\n");
    printf("\t  ░   ▒         ░   ░  ░░░ ░ ░  ▒ ░░ ░ ░ ░ ░   ░ ░   ░   ░   ▒   ░      ░      ░   \n");
    printf("\t      ░  ░       ░       ░      ░    ░ ░             ░       ░  ░       ░      ░  ░\n");
    printf("\t\t\t\t  A C programming Assignment\n\n\n\n\t\t\t\t\t  1.Start\n\t\t\t\t\t 2.Credits\n\t\t\t\t\t  3.Exit\n");
    printf("\n\n\n\n\t\t\t\t    Select your Option = ");
    scanf("%d",&inp);
    switch(inp)
    {
      case 1:start();
             break;
      case 2:credits(system("clear"));
             break;
      case 3:return;
             break;
      default: printf("\n\t\t\t\t       Invalid option\n\t\t\t\t\t   Bye Bye\n\n\n"); //exits the program
               return;
    }
  }
  return;
}
