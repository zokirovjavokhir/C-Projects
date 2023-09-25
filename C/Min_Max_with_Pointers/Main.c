#include <stdio.h>

// Function prototype
void find_min_max(int*, int*, int*, int* max, int* min);

int main() {
	  int a, b, c;
    int max, min;
	
	  // Taking three integers
    printf("Enter three integers: \n");
	  scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);

find_min_max(&a, &b, &c, &max, &min);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
	
}
void find_min_max(int* a, int* b, int* c, int* max, int* min)
{
	*min = *a;
	*max = *a;

	if(*max < *b)
	{
		*max = *b;
}
	if(*max < *c)
	{
		*max = *c;
}
	if(*min > *b)
	{
		*min = *b;
}
	if(*min > *c)
	{
		*min = *c;
	}
}