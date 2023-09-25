#include <stdio.h>

/*
  When writing a program, you may assume the following:
		1 km = 1,000 m
		1 mile = 1.6 km
		0 < D <= 500,000
		0 <= H < 12
		0 <= M < 60
		0 <= S < 60
*/

int main(void) {
	
float distance, hour, minute, second, kph, mph;


    printf("Enter a distance (m): ");
    scanf("%f", &distance);

		printf("Enter an hour: ");
    scanf("%f", &hour);
    
		printf("Enter a minute: ");
    scanf("%f", &minute);
    
		printf("Enter a second: ");
    scanf("%f", &second);

		kph = distance/1000/(second/3600+minute/60+hour);
		printf("Speed (km/hr)  : %.2f \n", kph);
		
		mph = distance/1000/1.6/(second/3600+minute/60+hour);
		printf("Speed (mile/hr): %.2f ", mph);

	    return 0;
}