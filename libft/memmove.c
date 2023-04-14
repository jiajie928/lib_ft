#include "libft.h"

int	main(void)
{
	char str1[20] = "0123456789";
	char *src = str1 + 3;
	char *dst = str1 + 5;

	printf("%s\n", dst);
	printf("%s\n", src);
	printf("%s", memmove(dst, src, 8));
}

