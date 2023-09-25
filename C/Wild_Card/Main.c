#include <string.h>
#include <stdio.h>

#define MAXLEN 100
#define WILDCARD '?'
#define FALSE 0 
#define TRUE 1 
#define NO_WILDCARD -1 

int is_equal(char* former, char* letter);

int main() {
	char former[MAXLEN] = {0, };
	char latter[MAXLEN]	= {0, }; 
	
	printf("String#1: ");
	scanf("%s", former);
	printf("String#2: ");
	scanf("%s", latter); 
	
	if(is_equal(former, latter))
		printf("Equal!\n");
	else 
		printf("Not equal!\n"); 
	
	return 0;
}

int is_equal(char* former, char* latter) {
	int i, len1, len2;
	len1 = strlen(former);
	len2 = strlen(latter);

if(len1 != len2)
	{
		return FALSE;
	}

for (i = 0; i < len1; i++) {
	if(former[i] != latter[i] && former[i] != WILDCARD)
	{
		return FALSE;
	}
}

return TRUE;
}
