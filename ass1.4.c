/*4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius. */

#include<stdio.h>
int main()
{
    int R;
    float A;

    printf("\n\nEnter the value of R radius: ");
    scanf("%d", &R);

    A=3.14*R*R;

    printf("\nArea of circle is %f having radius %d\n", A, R);
}