// Q.3 Triangle Angle Finder
// Write a program to find the third angle of a right triangle when two other angles are given.
// angle3 = 90 − (angle1 + angle2)

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);


    angle3 = 90 - (angle1 + angle2);

    printf("The third angle of the right triangle is: %d degrees\n", angle3);

    return 0;
}
