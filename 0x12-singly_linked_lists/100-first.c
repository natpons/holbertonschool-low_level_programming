#include "lists.h"

/**
 * premain - method-function, launched before the main application
 *
 * prints the phrase before the main function is executed
 *
 */

void __attribute__ ((constructor)) premain()
{
	/*Solution : https://issue.life/questions/8713470*/
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
