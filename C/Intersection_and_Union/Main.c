#include<stdio.h>

#define ARR1_NUM 50
#define ARR2_NUM 50
#define UNION_NUM 100
#define INTERSECTION_NUM 100

int main() {

    int arr1[ARR1_NUM];
    int arr2[ARR2_NUM];
    int union_arr[UNION_NUM];
	  int intersection_arr[INTERSECTION_NUM];
    int i, j, len1, len2;
	  int union_ctr, intersection_ctr = 0;

    printf("Enter the size of the 1st array: ");
    scanf("%d", &len1);

    printf("Enter the 1st array elements: ");
    for (i = 0; i < len1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the 2nd array: ");
    scanf("%d", &len2);

    printf("Enter the 2nd array elements: ");
    for (i = 0; i < len2; i++) {
        scanf("%d", &arr2[i]);
    }
	union_ctr = len1;
		for(i = 0; i < len2; i++)
{
	int flag = 0;
		for(j = 0; j < len1; j++)
{
	if(arr2[i] == arr1[j])
{
		flag = 1;
break;
}
}
	if(!flag)
{
		union_arr[union_ctr++] = arr2[i];
}
}
	for(i = 0; i < len1; i++)
{
	for(j = 0; j < len2; j++)
{
	if(arr1[i] == arr2[j])
{
	intersection_arr[intersection_ctr++] = arr1[i];
break;
}
}
}
printf("Number of elements with Union: %d\n", union_ctr);
	  printf("Number of elements with Intersection: %d", intersection_ctr);

    return 0;
}