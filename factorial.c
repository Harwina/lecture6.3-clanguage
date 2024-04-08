// Write a Program to print the factorial of all numbers from 1 to N using for loop.
#include<stdio.h>

int main() {
    int i, n, mp = 1;

    printf("Enter the end value: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) 
    {
        mp=mp*i;
    }

    printf("factorial of %d number= %d\n",n,mp);

}
