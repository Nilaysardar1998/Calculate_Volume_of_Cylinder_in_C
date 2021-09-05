#include <stdio.h>

int main() {
    printf("Q.3) Write a program to calculate volume of cylinder ?\n");
    printf("Answer:- \n");
    double radius, height, pie = 3.14;

    printf("Enter the Radius of a Cylinder: ");
    scanf_s("%lf", &radius);
    printf("\nEnter the Height of a Cylinder: ");
    scanf_s("%lf", &height);

    double volume = pie * radius * radius * height;
    printf("\nVolume of Cylinder: %.2lf", volume);

    return 0;
}
