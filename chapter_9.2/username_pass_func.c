#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(void)
{
        float cash=5000, x; 
        char username[20];
        int password=9090;
        int option;
        double account_number; 
        

        printf("Welcome To Berkant PROGRAMMING ");
        printf("Please enter your username: ");
        scanf("%d",&username);
        gets(username);
        printf("Please enter your password: ");
        scanf("%d", &password);
        
        while(password!=9090)
        {
                printf("Wrong Password. Try again... ");
                printf("Please enter your password: ", password); 
                scanf("%d", &password);                           
                if (password==9090)
                {
                        break;
                }
        }
                
                return 0;
        }
