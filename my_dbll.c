#include <stdio.h>
#include <stdlib.h>

typdef struct myDbll myDbll_t;
struct myDbll_t
{
	myDbll_t *next;
	myDbll_t *prev;
	void *project;
}