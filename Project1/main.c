#include <string.h>

char* rockPaperScissors(const char* player1, const char* player2) {
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
        return "Player1";
    }
    else if ((strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) ||
        (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0) ||
        (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0)) {
        return "Player2";
    }
    else if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    else {
        return "Invalid";
    }
}
int main() {
    return 0;
}

