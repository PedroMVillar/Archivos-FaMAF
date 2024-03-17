#include <stdio.h>
#include <stdbool.h>

bool has_free_cell(char board[3][3]);
bool get_winner(char board[3][3]);

int main() {
    char board[3][3] = {
        {'-', '-', '-'}, 
        {'-', '-', '-'}, 
        {'-', '-', '-'}};
    // Cruz y círculo para jugar
    char player = 'X';
    
    while (has_free_cell(board) && !get_winner(board)) {
        // Imprimir el tablero
        printf("Tablero:\n");
        int i = 0;
        while (i < 3) {
            int j = 0;
            while (j < 3) {
                printf("%c ", board[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
        // Pedir la jugada
        int pos, x, y;
        printf("Ingrese la posición de la jugada: ");
        scanf("%d", &pos);
        switch (pos)
        {
        case 0:
            x = 0;
            y = 0;
            break;
        case 1:
            x = 0;
            y = 1;
            break;
        case 2:
            x = 0;
            y = 2;
            break;
        case 3:
            x = 1;
            y = 0;
            break;
        case 4:
            x = 1;
            y = 1;
            break;
        case 5:
            x = 1;
            y = 2;
            break;
        case 6:
            x = 2;
            y = 0;
            break;
        case 7:
            x = 2;
            y = 1;
            break;
        case 8:
            x = 2;
            y = 2;
            break;        
        default:
            printf("Posición inválida\n");
        }
        if (board[x][y] != '-') {
            printf("Posición ocupada\n");
            continue;
        }
        board[x][y] = player;
        // Cambiar de jugador
        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }
    } 
    if (get_winner(board)) {
        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }
        printf("¡Felicidades! Ganó el jugador %c\n", player);
    } else {
        printf("¡Empate!\n");
    }

    return 0;
}

bool has_free_cell(char board[3][3]) {
    int i = 0;
    int j = 0;
    while (i < 3) {
        while (j < 3) {
            if (board[i][j] == '-') {
                return true;
            }
            j++;
        }
        i++;
    }
    return false;
}

bool get_winner(char board[3][3]) {
    int i = 0;
    while (i < 3) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '-') {
            return true;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '-') {
            return true;
        }
        i++;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-') {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-') {
        return true;
    }
    return false;
}
