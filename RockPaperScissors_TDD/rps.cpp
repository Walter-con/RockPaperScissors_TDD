#include <string.h>

char* rockPaperScissors(char player1[], char player2[])
{
    if ((strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) ||
        (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0))
    {
        return (char*)"Invalid";
    }

    if (strcmp(player1, player2) == 0)
    {
        return (char*)"Draw";
    }

    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0))
    {
        return (char*)"Player1";
    }

    return (char*)"Player2";
}