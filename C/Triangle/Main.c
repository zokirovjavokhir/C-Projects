#include <stdio.h>
/*
  Triangle Condition(c is the longest side)
		a + b > c 
		where a, b, c (> 0) are the sides of a triangle
		
	Triangle type (c is the longest side)
	1. Acute triangle: a^2 + b^2 > c^2
	2. Right triangle: a^2 + b^2 = c^2
	3. Obtuse triangle: a^2 + b^2 < c^2
*/

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle : ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a+b > c && b+c > a && a+c > b) 
	{
        if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
            printf("Right triangle\n");
        }
        else if (a*a + b*b > c*c && b*b + c*c > a*a && a*a + c*c > b*b) {
            printf("Acute triangle\n");
        }
        else {
            printf("Obtuse triangle\n");
        }
    }
    else {
        printf("Not possible\n");
    }
    
    return 0;
}
