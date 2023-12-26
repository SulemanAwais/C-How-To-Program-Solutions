/*
(Recursive main) 
Can main be called recursively? Write a program containing a function
main. Include static local variable count initialized to 1. Postincrement and print the value of count
each time main is called. Run your program. What happens?
*/
#include <stdio.h>
int main() {
    static int count = 1;
    printf("main called %d times\n", count++);
    main();
    return 0;
}
