#include <stdio.h>


//ft_strlcpy
int main()
{
	char src1[] = "Hallooo";
	char dest1[6]; 
	char src2[] = "Hallooo";
	char dest2[6]; 
	printf("%i, %s\n", (int) ft_strlcpy(dest1, src1, 0), dest1);
	//printf("%i, %s\n", (int) strlcpy(dest2, src2, 0), dest2);
} // -> fertig getestet