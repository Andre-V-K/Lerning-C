#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
Syntax
type variableName = value;
*/

int main() {
    printf("Hello World!\n");
    printf("Nice!\n");
    
    //Array

    char myFood[][50] = {"Hamburger", "Kjøtkaker"};
    printf("%s\n", myFood[0]);

    //Variables

    int myNum;
    myNum = 20;
    printf("%d\n", myNum + 3);

    //Format specifiers

    int yourNum = 10;
    float yourFlooatNum = 10.99;
    char yourLetter = 'A';
    char firstName[50] = "Anna";
    char lastName[50] = "Mikelsen";
    char fullName[100];
    strcpy(fullName, firstName);
    strcat(fullName, "\t");
    strcat(fullName, lastName);

    printf("%d\n", yourNum);
    printf("%f\n", yourFlooatNum);
    printf("%c\n", yourLetter);
    printf("%s\n", fullName);

    // Declare Multiple Variables

    int x = 3, y = 9, z = 60;
    int a, b, c;
    a = b = c = 80;
    printf("%d\n", x + y + z);
    printf("%d\n", a + b + c);

    /*Variables Examples
    Real Life Examples*/

    int studentID = 15;
    int studentAge = 21;
    double studentFee = 1999.99;
    char studentGrade = 'C';

    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %lf.\n", studentFee);
    printf("Student grade: %c\n", studentGrade);

    /* Calculate the 
    Area of a Rectangle*/

    int length = 10;
    int width = 7;
    int area;
    area = length * width;
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("area of tbe rectangle is: %d\n", area);

    /*Boolean Variables*/
    
    bool isProgrammingFun = true;
    bool iLiveInnSweden = false;
    if (isProgrammingFun == true)
    {
        printf("is programming fun? Yes\n");
    }
    else
    {
        printf("is programming fun? No\n");
    }

        printf("Do you live in Sweden?\t");
    if (iLiveInnSweden == true)
    {
        printf("yes i live in Sweden Yes\n");
    }
    else
    {
        printf("no i dont live in Sweden\n");
    }

    printf("1 is yes: %d\n", isProgrammingFun);
    printf("1 is yes: %i\n", isProgrammingFun);

    bool saraIsCool = true;
    bool gregIsCool = true;

    printf("1 is yes both are correct: %d\n", saraIsCool == gregIsCool);
    printf("1 is yes one is correct: %d\n", saraIsCool && gregIsCool);

    return 0;
}
