#include <string.h>

#include "main.h"



/**
 *
 *  * rev_string - reverse string
 *
 *   * @str: string reversed
 *
 *    */

void rev_string(char *str)

{

		int i = strlen(str) - 1, j = 0;

			char tmp;



				while (i > j)

						{

									tmp = str[i];

											str[i] = str[j];

													str[j] = tmp;

															i--;

																	j++;

																		}

}
