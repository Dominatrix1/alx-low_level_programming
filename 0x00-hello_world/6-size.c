#include<stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char:%lu bytes\n", sizeof(a));
printf("Size of a int:%lu bytes\n", sizeof(b));
printf("Size of a long int:%lu bytes\n", sizeof(c));
printf("Size of a long long int:%lu byte\n", sizeof(d));
printf("Size of a float:%lu byte\n", sizeof(e));

return (0);
}
