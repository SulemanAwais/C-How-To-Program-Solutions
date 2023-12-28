/*
(Turtle Graphics) 
The Logo language made the concept of turtle graphics famous. Imagine
a mechanical turtle that walks around the room under the control of a C program. The turtle holds
a pen in one of two positions, up or down. While the pen is down, the turtle traces out shapes as it
moves; while the pen is up, the turtle moves about freely without writing anything. In this problem
you’ll simulate the operation of the turtle and create a computerized sketchpad as well. 
Use a 50-by-50 array floor which is initialized to zeros. Read commands from an array that
contains them. Keep track of the current turtle position at all times and whether the pen is currently up or down.
Assume that the turtle always starts at position 0, 0 of the floor with its pen up.
The set of turtle commands your program must process are shown in Fig. 6.25. Suppose that the
turtle is somewhere near the center of the floor. The following “program” would draw and print a
12-by-12 square:
2
5,12
3
5,12
3
5,12
3
5,12
1
6
9
As the turtle moves with the pen down, set the appropriate elements of array floor to 1s. When the
6 command (print) is given, wherever there’s a 1 in the array, display an asterisk, or some other
character you choose. Wherever there’s a zero, display a blank. Write a program to implement the
turtle graphics capabilities discussed here. Write several turtle graphics programs to draw interesting shapes.
Add other commands to increase the power of your turtle graphics language.

*/
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