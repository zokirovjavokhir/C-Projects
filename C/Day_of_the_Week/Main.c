#include <stdio.h>

char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", \
								"Thursday", "Friday", "Saturday"};
typedef int Days;

void Today(Days day_idx) {
	if (day_idx >= 1 && day_idx <= 7) {
	printf("%s\n", days[day_idx - 1]);
	}
	else{
			printf("Invalid\n");
	}
}
int main()
{
	Days day_idx;
	printf("Day index? ");
	scanf("%d",&day_idx);
	Today(day_idx);
	return 0;
}