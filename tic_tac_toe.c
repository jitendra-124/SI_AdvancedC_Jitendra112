#include <stdio.h>

int main() {
    char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int choice;
    int turn,winner=0;
    char mark;
    for (turn=1;turn<=9;turn++) {
        
        // Print the current game grid
        printf("\n%c,%c,%c\n",board[1],board[2],board[3]);
        printf("%c,%c,%c\n",board[4],board[5],board[6]);
        printf("%c,%c,%c\n\n",board[7],board[8],board[9]);
        if (turn % 2 != 0) {
            mark = 'X';
            printf("Player 1 (X), enter choice (1-9): ");
        } else {
            mark = 'O';
            printf("Player 2 (O), enter choice (1-9): ");
        }

        scanf("%d", &choice);

        // Put the mark on the board if the spot is valid and available
        if (choice >= 1 && choice <= 9 && board[choice] != 'X' && board[choice] != 'O') {
            board[choice] = mark;
        } else {
            printf("Invalid move! You lose your turn.\n");
        }

        if (board[1] == board[2] && board[2] == board[3]) winner = 1;
        if (board[4] == board[5] && board[5] == board[6]) winner = 1;
        if (board[7] == board[8] && board[8] == board[9]) winner = 1;

   
        if (board[1] == board[4] && board[4] == board[7]) winner = 1;
        if (board[2] == board[5] && board[5] == board[8]) winner = 1;
        if (board[3] == board[6] && board[6] == board[9]) winner = 1;

        if (board[1] == board[5] && board[5] == board[9]) winner = 1;
        if (board[3] == board[5] && board[5] == board[7]) winner = 1;

        if (winner == 1) {
            break;
        }
    }
    printf("\n%c,%c,%c\n", board[1], board[2], board[3]);
    printf("%c,%c,%c\n", board[4], board[5], board[6]);
    printf("%c,%c,%c\n\n", board[7], board[8], board[9]);
    if (winner == 1) {
        printf("Game Over! Player with '%c' wins!\n", mark);
    } else {
        printf("Game Over! It's a Draw!\n");
    }

    return 0;
}