#include <stdlib.h>
#include <libc.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	int a;

	a = isascii(120);
	printf("%i", a);
	return(0);
}
