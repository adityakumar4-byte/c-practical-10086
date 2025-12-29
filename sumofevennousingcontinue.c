#include <stdio.h>
int main() {
    //Name-Aditya kumar ERPID-10086
    int n, sum = 0;
    printf("Enter limit: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }

    printf("Sum of even numbers = %d", sum);
    return 0;
}