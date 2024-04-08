// Write a Program to print the sum of all numbers from 1 to N using for loop.
#include<stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the end value: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) 
    {
        sum=sum+i;
    }

    printf("Sum of %d number= %d\n",n, sum);

}
