#include "monty.h"
/**
 * main - entry point for the program.
 * Initializes a bus_t variable and passes it to someFunction.
 * Return: Always 0 (Success)
 */
int main(void)
{
	bus_t bus = {NULL, NULL, NULL, 0};

	someFunction(&bus);

	return (0);
}
