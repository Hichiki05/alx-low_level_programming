#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc:int
 * @argv:array of strings
 *
 * Return:always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
