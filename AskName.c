#include <stdio.h>
#include <string.h>

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