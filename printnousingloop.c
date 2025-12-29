#include <stdio.h>
int main() {
    //Name-Aditya kumar ERP ID -10086
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}