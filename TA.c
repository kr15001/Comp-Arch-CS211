#include <stdio.h>

int main(){
    int integer;
    float num;
    char str[100];
    printf("Enter an Integer.");
    scanf("%d", &integer);
    printf("Enter a floating number");
    scanf("%f", &num);
    printf("Enter a string: ");
    scanf("%s",str);

    printf("Int: %d\nFloat: %f\nString: %s\n", integer, num, str);
    return 0;
}