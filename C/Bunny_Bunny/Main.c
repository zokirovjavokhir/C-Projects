#include <stdio.h>

const char BUNNY = '@';
const char EMPTY = '.'; 

const int FieldSize = 12;
int current_bunny_pos[2]; 
char Field[12][13] = {0, };


int main() {
	int N; 
	char command; 
	scanf(" %d %d", &current_bunny_pos[0], &current_bunny_pos[1]); 
	scanf(" %d", &N);
	for (int i = 0; i < FieldSize; ++i) {
		for (int j = 0; j < FieldSize; ++j)
			Field[i][j] = '.'; 
	}
for(int i = 0; i < N; ++i)
	{
		scanf(" %c", &command);
		int new_row = current_bunny_pos[0];
		int new_col = current_bunny_pos[1];

	if(command == 'U')
		{
			if(current_bunny_pos[0] > 0)
				new_row = current_bunny_pos[0] - 1;
	}
	else if(command == 'D')
	{
		if(current_bunny_pos[0] < FieldSize - 1)
			new_row = current_bunny_pos[0] + 1;
	}
		else if(command == 'L')
		{
			if(current_bunny_pos[1] > 0)
				new_col = current_bunny_pos[1] - 1;
	}
		else if(command == 'R')
		{
			if(current_bunny_pos[1] < FieldSize - 1)
				new_col = current_bunny_pos[1] + 1;
	}

	if(Field[new_row][new_col] == EMPTY)
		{
			Field[current_bunny_pos[0]][current_bunny_pos[1]] = EMPTY;
				Field[new_row][new_col] = BUNNY;
					current_bunny_pos[0] = new_row;
				current_bunny_pos[1] = new_col;
	}
}


	Field[current_bunny_pos[0]][current_bunny_pos[1]] = '@'; 
	for (int  i = 0; i < FieldSize; ++i) {
			printf("%s\n", Field[i]); 
	}
	
	return 0; 
}
