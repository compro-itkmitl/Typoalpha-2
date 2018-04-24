#include <stdio.h>
#include <stdlib.h>

int score = 5;  //Score Variable.
int timer = 60; //Timer Variable.
char type[] = "Typo Test Typing."; //String Variable of given word.
int main()
{
    printf("\tScore\t\t\t\tTimer\n\n");
    printf("\t  %d\t\t\t\t %d\n\n\n", score, timer);
    printf("\t\t -----------------\n");
    printf("\t\t|%s|\n", type);
    printf("\t\t -----------------\n\n");
    printf("\t\t -----------------\n");
    printf("\t\t ");
    scanf("%s");
    printf("\t\t -----------------\n");
    return 0;
}
