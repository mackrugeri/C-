#include <stdio.h>
#include <stdlib.h>
#include "hello.h"
#include "prod.h"


int main(int argc, char* argv[])
{
	puts("!!!Let's do  HW3!!!"); /* prints !!!Hello World!!! */
	if(testing())
	{
		puts("About to run production.");
		#ifndef ADJMAT_H_
		#define ADJMAT_H_
		production(argc, argv);
		#endif
	}
	else
	{
		 puts("Tests did not pass.");
		 production(argc, argv);
	}
	return EXIT_SUCCESS;
}
