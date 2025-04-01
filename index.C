#include <stdio.h>

int main() {
    printf("Hello World!\n");
    printf("Nice!\n");
    
    //Array

    char myFood[][50] = {"Hamburger", "Kjøtkaker"};
    printf("%s", myFood[0]);
    return 0;
}
