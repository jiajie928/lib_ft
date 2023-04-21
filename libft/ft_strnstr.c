/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:08:43 by jichew            #+#    #+#             */
/*   Updated: 2023/04/21 18:39:59 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	fail;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (*haystack && i < len)
	{
		fail = 0;
		while (haystack[fail] == needle[fail])
		{
			if (fail + i > len - 1)
				break;
			fail++;
		}
		if (needle[fail] == '\0')
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return(NULL);
}

int main(void)
{
	const char *largestring = "haystack";
	const char *smallstring = "stack";
	char *ptr;

    ptr = strnstr(largestring, smallstring, 8);
	printf("%s\n", ptr);
}