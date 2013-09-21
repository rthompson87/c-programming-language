#include <stdio.h>

/* Experiment to find out what happens when printf's argument string contains
   \c, where c is some character not listed above. */
main()
{
	printf("The following \\characters would not compile: c, d, g, i, j, k, l, m, o, p, q, s, u, w, x, y, z\n");
	printf("\\a - hello world\a\n");
	printf("\\b - hello world\b\n");
	printf("\\e - hello world\e\n");
	printf("\\f - hello world\f\n");
	printf("\\n - hello world\n\n");
	printf("\\r - hello world\r\n");
	printf("\\t - hello world\t\n");
	printf("\\v - hello world\v\n");
	printf("\\\\ - hello world\\\n");
}