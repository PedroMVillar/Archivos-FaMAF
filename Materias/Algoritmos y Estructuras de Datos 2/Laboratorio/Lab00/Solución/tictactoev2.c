#include <stdbool.h>
#include <stdio.h>

#define SIZE 4

bool has_free_cell(char board[SIZE][SIZE]);
bool get_winner(char board[SIZE][SIZE]);

int main(){
    char board[SIZE][SIZE];
    int i = 0;
    while(i < SIZE) {
        int j = 0;
        while(j < SIZE) {
            board[i][j] = '-';
            j++;
        }
        i++;
    }
    // Cruz y círculo para jugar
    char player = 'X';

    while(has_free_cell(board) && !get_winner(board)) {
        // Imprimir el tablero
        i = 0;
        while(i < SIZE) {
            int j = 0;
            while(j < SIZE) {
                printf("%c ", board[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }

        // Pedir la jugada
        int position;
        printf("Jugador %c, ingrese la posición: ", player);
        scanf("%d", &position);

        // Verificar que se inserte una posición válida
        int x = position / SIZE;
        int y = position % SIZE;
        if(x < 0 || x >= SIZE || y < 0 || y >= SIZE || board[x][y] != '-') {
            printf("Posición inválida o ya ocupada, intente de nuevo.\n");
            continue;
        }

        // Realizar la jugada y cambiar de jugador
        board[x][y] = player;
        player = (player == 'X') ? 'O' : 'X';
    }
    
    // Corroborar si hay ganador
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

bool has_free_cell(char board[SIZE][SIZE]) {
    int i = 0;
    while(i < SIZE) {
        int j = 0;
        while(j < SIZE) {
            if(board[i][j] == '-') {
                return true;
            }
            j++;
        }
        i++;
    }
    return false;
}

bool get_winner(char board[SIZE][SIZE]) {
    int i = 0;
    while(i < SIZE) {
        int j = 0;
        char first = board[i][0];
        while(j < SIZE) {
            if(board[i][j] != first || first == '-') {
                break;
            }
            j++;
        }
        if(j == SIZE) {
            return true;
        }
        i++;
    }

    i = 0;
    while(i < SIZE) {
        int j = 0;
        char first = board[0][i];
        while(j < SIZE) {
            if(board[j][i] != first || first == '-') {
                break;
            }
            j++;
        }
        if(j == SIZE) {
            return true;
        }
        i++;
    }

    char first = board[0][0];
    i = 0;
    while(i < SIZE) {
        if(board[i][i] != first || first == '-') {
            break;
        }
        i++;
    }
    if(i == SIZE) {
        return true;
    }

    first = board[0][SIZE - 1];
    i = 0;
    while(i < SIZE) {
        if(board[i][SIZE - 1 - i] != first || first == '-') {
            break;
        }
        i++;
    }
    if(i == SIZE) {
        return true;
    }

    return false;
}