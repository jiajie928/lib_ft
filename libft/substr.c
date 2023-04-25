#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    st;
    size_t    i;
    char	*str;

    st = (unsigned int)start;
    if (!s)
        return (NULL);
    if (ft_strlen(s) - start < len)
        len = ft_strlen(s) - start;
    if (start > ft_strlen(s))
        return (calloc(1, sizeof(char)));
    else
        str = (char *) malloc ((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (s[st] && i < len)
        str[i++] = s[st++];
    str[i] = '\0';
    return (str);
}

int main (void)
{
	printf("%s",ft_substr("imac & ipad", 12,5));
	return (0);
}
