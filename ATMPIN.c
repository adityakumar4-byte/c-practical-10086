#include <stdio.h>
int main() {
    //Name-Aditya kumar ERPID-10086
    int pin, correctPin = 1234;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if(pin == correctPin)
        printf("Access Granted");
    else
        printf("Wrong PIN");

    return 0;
}