#include <stdio.h>
#include <math.h> 

int main()
{
    float radius, diameter, circumference, area;
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * M_PI * radius;
    area = M_PI * (radius * radius);

    printf("Diameter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units ", area);

    return 0;
}
