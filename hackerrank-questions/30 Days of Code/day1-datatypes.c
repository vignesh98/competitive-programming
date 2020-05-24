#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a;
    int sum =0;
    double b;
    char c[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d \n",&a);
    scanf("%lf \n",&b);
    fgets(c,sizeof c,stdin);
    sum = i+a;
    double double_sum = d + b;
    char result[100];
    strcpy(result,s);
    strcat(result,c);
    // Print the sum of both integer variables on a new line.
    printf("%d \n",sum);
    // Print the sum of the double variables on a new line.
    printf("%0.1lf \n",double_sum);
    // Concatenate and print the String variables on a new line
    printf("%s", result);
    // The 's' variable above should be printed first.
    return 0;