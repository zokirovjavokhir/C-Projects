#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_vowels(int , char []);

int main(){
	  char* input_text_1;
    char* input_text_2;
    int sum_len = 0;
    int result = 0;
    char tmp_1[100];
    char tmp_2[100];
		int (*vowl)(int, char *) = &count_vowels;
	
		printf("Input string 1\n");
    gets(tmp_1);
    printf("Input string 2\n");
    gets(tmp_2);
sum_len = strlen(tmp_1) + strlen(tmp_2);
	input_text_1 = (char*)malloc((strlen(tmp_1) + 1) * sizeof(char));
	input_text_2 = (char*)malloc((strlen(tmp_2) + 1) * sizeof(char));

	strcpy(input_text_1, tmp_1);
	strcpy(input_text_2, tmp_2);

	result = vowl(sum_len, strcat(input_text_1, input_text_2));

    printf("Total len + number of vowels = %d", \
            (result + sum_len));
}
int count_vowels(int size, char arr[]){
int count = 0;
	for(int i = 0; i < size; i++)
	{
		switch (arr[i])
		{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				// case 'A':
				// case 'E':
				// case 'I':
				// case 'O':
				// case 'U':
					count++;
				break;
	}
}
	return count;
}