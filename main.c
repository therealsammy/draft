#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void myFunction(char name[50]) {
    printf("Hello %s", name);
}

int main()
{
   int sum1 = 100 + 200;

   printf("%d\n", sum1);

   if (20 > 18) {
    printf("true\n");
}

int myNum;
char name[50];

printf("Enter your first name:\n");

scanf("%s", name);

printf("Type your age and press enter: \n");

scanf("%d", &myNum);

printf("Hello %s, you are %d years old.\n", name, myNum);

int* ageAddress = &myNum;

printf("%p\n", &ageAddress);

myFunction(name);
    return 0;
}


