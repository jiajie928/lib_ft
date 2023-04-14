#include "libft.h"

int main(void)
{
	char str1[7] = "aabbcc";

	printf( "The string: %s\n", str1 );
    memcpy( str1 + 2, str1, 4 );
    printf( "New string: %s\n", str1 );

}