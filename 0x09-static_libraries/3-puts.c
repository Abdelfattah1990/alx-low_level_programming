#include "main.h"



/**
 *
 *  * _puts - prints a string 
 *
 *   * @str: String to be printed out 
 *
 *    *
 *
 *     * Return: void
 *
 *      */

void _puts(char *str)

{

		int i;



			i = 0;

				while (str[i] != '\0')

						{

									_putchar(str[i]);

											i++;

												}

					_putchar('\n');

}
