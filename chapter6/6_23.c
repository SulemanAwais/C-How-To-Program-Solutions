#include <stdio.h>
void displayFloor(int floor[50][50]) {
    for (int i = 0; i < 50; ++i) {
        for (int j = 0; j < 50; ++j) {
            printf("%c ", floor[i][j] ? '*' : ' ');
        }
        printf("\n");
    }
}
void turtleGraphics(int command, int floor[50][50], int *turtleX, int *turtleY, int *direction, int *penDown) {
    int repeatCount = 0;
    if (repeatCount > 0 && command != 12) {
        for (int r = 0; r < repeatCount; ++r) {
            turtleGraphics(command, floor, turtleX, turtleY, direction, penDown);
        }
        repeatCount = 0;
        return;
    }
    switch (command) {
        case 1:
            printf("Case 1: Pen up\n");
            *penDown = 0;
            break;
        case 2:
            printf("Case 2: Pen down\n");
            *penDown = 1;
            break;
        case 3:
            printf("Case 3: Turn right\n");
            *direction = (*direction + 1) % 4;
            break;
        case 4:
            printf("Case 4: Turn left\n");
            *direction = (*direction + 3) % 4;
            break;
        case 5:
            printf("Case 5: Move\n");
            {
                int spacesToMove;
                printf("Enter spaces to move: ");
                scanf("%d", &spacesToMove);
                for (int step = 0; step < spacesToMove; ++step) {
                    if (*penDown) {
                        floor[*turtleY][*turtleX] = 1;
                    }
                    switch (*direction) {
                        case 0:
                            *turtleX = (*turtleX + 1) % 50;
                            break;
                        case 1:
                            *turtleY = (*turtleY + 1) % 50;
                            break;
                        case 2:
                            *turtleX = (*turtleX - 1 + 50) % 50;
                            break;
                        case 3:
                            *turtleY = (*turtleY - 1 + 50) % 50;
                            break;
                    }
                }
            }
            break;
        case 6:
            printf("Case 6: Display floor\n");
            displayFloor(floor);
            break;
        case 9:
            printf("Case 9: Exit program\n");
            break;
        default:
            printf("Invalid command: %d\n", command);
    }
}
int main() {
    int floor[50][50] = {0};
    int turtleX = 50 / 2, turtleY = 50 / 2;
    int direction = 0;
    int penDown = 0;
    int command;
    do {
        printf("Enter command (1-6, 9): ");
        scanf("%d", &command);
        turtleGraphics(command, floor, &turtleX, &turtleY, &direction, &penDown);
    } while (command != 9);
    return 0;
}