#include <stdio.h>
#include <string.h>
#include <locale.h>

char* revert(char *string);
void zero(unsigned int m, int *ptr);
int main(char argc, int argv[])
{
	setlocale(LC_ALL, "");
	char string[150];
	printf("Digite uma frase qualquer: ");
	fgets(string, 150, stdin);
	printf("A frase digitada e: %s\n", string);
	printf("A frase invertida ficou assim: %s\n", revert(string));
	return (0);
}
void zero(unsigned int m, int *ptr)
{
	unsigned int i;
	for (i = 0; i < m; i++)
	{
		*ptr = '\0';
		ptr++;
	}
}
char* revert(char* string)
{
	char stringrevert[150];
	int tamanho;
	tamanho = strlen(string);
	int i;
	for (i = 0; i < tamanho; i++)
	{
		stringrevert[i] = string[tamanho - (i + 1)];
	}
	stringrevert[tamanho] = '\0';
	memcpy(string, stringrevert, tamanho);
	return(string);
}