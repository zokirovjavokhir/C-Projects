#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Caesar_Encryption(int len, int key, char input_text[], char ciphertext[]);
void Caesar_Decryption(int len, int key, char plaintext[], char ciphertext[]);

void main()
{
	char *ciphertext;
  char *plaintext;
  char input_text[500];
	int Caesar_key, len;

	printf("Caesar Cipher\n");
	printf("Enter a string : ");
  gets(input_text);
	printf("Enter a key : ");
	scanf("%d", &Caesar_key);
len = strlen(input_text);
	ciphertext = (char *)malloc(len * sizeof(char));
	plaintext = (char *)malloc(len * sizeof(char));
  Caesar_Encryption(len, Caesar_key, input_text, ciphertext);
  printf("Caesar ciphertext : %s\n", ciphertext);
  Caesar_Decryption(len, Caesar_key, plaintext, ciphertext);
	printf("Caesar plaintext : %s\n", plaintext);
  free(plaintext);
  free(ciphertext);
}
void Caesar_Encryption(int len, int key, char input_text[], char ciphertext[]){
int i;

	for(i = 0; i < len; i++)
	{
		if(input_text[i] >= 'a' && input_text[i] <= 'z')
		{
			ciphertext[i] = 'a' + (input_text[i] - 'a' + key) % 26;
	}
		else if(input_text[i] >= 'A' && input_text[i] <= 'Z')
		{
			ciphertext[i] = 'A' + (input_text[i] - 'A' + key) % 26;
	}
		else
		{
			ciphertext[i] = input_text[i];
	}
}
	ciphertext[i] = '\0';

}
void Caesar_Decryption(int len, int key, char plaintext[], char ciphertext[]){
int i;

	for(i = 0; i < len; i++)
	{
		if(ciphertext[i] >= 'a' && ciphertext[i] <= 'z')
		{
			plaintext[i] = 'a' + (ciphertext[i] - 'a' + (26 - key)) % 26;
	} else if(ciphertext[i] >= 'A' && ciphertext[i] <= 'Z')
		{
			plaintext[i] = 'A' + (ciphertext[i] - 'A' + (26 - key)) % 26;
		}
		else
		{
			plaintext[i] = ciphertext[i];
	}
}
	plaintext[i] = '\0';
}