//create a username and password and check it with function

#include <stdio.h>
#include <string.h>
#define user "melal"
#define pass "afyon03"        
int main()
{
    char username[20], password[20];

    //-----LOGIN PHASE-----
    printf("Please Enter username:");
    scanf("%s", &username);

    printf("\nPlease enter password:");
    scanf("%s", &password);
    do
    {

        printf("Wrong username or password try again!\n");

        printf("\nPlease Enter username:");
        scanf("%s", &username);

        printf("\nPlease enter password:");
        scanf("%s", &password);

    }
    while (strcmp(username, user) != 0 && strcmp(password, pass) != 0);

    printf("Correct username and password.\n\nWelcome melal!\n\nWhat would you like to do?");
}
