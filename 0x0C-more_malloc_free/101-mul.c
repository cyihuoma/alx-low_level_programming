#include "main.h"
/**
 * is_digit_string - function that checks if a string consists of only strings
 * @str: input string to check
 *
 * Return: 1 if the string consists of only digits, 0 otherwise
 */
int is_digit_string(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiply two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: the product of num1 and num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - entry point of the program
 * @argc: num of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
		printf("%d\n", result);

	return (0);
}
