#include <stdio.h>
void before_main(void) attribute((constructor));


/**
 * before_main - Prints something before main
 * Return: Null Void
 */

void before_main(void)


{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");

}
