#include <stdio.h>
#include <stdlib.h>
/**
 * main - objective to use a function pointer to execute a function
 * func - function that prints out elements in an array
 * fp - function pointers that points to func and execute the function
 * returns 0 if successful
 */
void func(char *name)
{
	int i;
	for (i = 0; name[i] != '\0'; i++)
		printf("%c", name[i]);
}
int main()
{
	char name[6] = "james";
	void (*fp)(char *);
	fp = func;
	(*fp)(name);
	return 0;
}
