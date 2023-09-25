#include <stdio.h>

int main() {
	int total_num;
	int num_arr[100];
	printf("Enter the total number: ");
	scanf("%d", &total_num);

for(int i = 0; i < total_num; i++) {
	scanf("%d", &num_arr[i]);
}

	int max_value = num_arr[0];
	int max_index = 0;

	for(int i = 1; i < total_num; i++) {
		if(num_arr[i] > max_value) {
			max_value = num_arr[i];
			max_index = i;
}
}

	printf("%d %d\n", max_value, max_index+1);

return 0;
}