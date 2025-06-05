#include <stdio.h>
#include <string.h>

/*
Author: Sol medeiros de faria
Pronouns: It/Its
Date: 2024, after password manager project
Project name: AskName
Purpose: Get name from user and print it to a command line without using scanf, cuz it's unsafe
*/

int main()
{
    char name[25];

    printf("What's your name?");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    printf("hello %s", name);

    while(strlen(name) == 0)
    {
        printf("\nYou didn't type anything\n." "What's your name?");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
        printf("hello %s", name);
    }
return 0;
}