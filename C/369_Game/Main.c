#include <stdio.h>

int count_claps(int n);

int main() {
	int n;
	printf("Enter the number for playing a 369 game : ");
	scanf("%d", &n);

	int claps = count_claps(n);

	printf("%d\n", claps);

return 0;
}

int count_claps(int n) {
 int count = 0;
	for (int i = 1; i <= n; i++) {
	int j = i;
	while (j > 0) {
	int digit = j % 10;
	if (digit == 3 || digit == 6 || digit == 9) {
	count++;
}
	j /= 10;
  }
}
return count;
}
