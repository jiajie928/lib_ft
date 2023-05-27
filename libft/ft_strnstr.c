/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:08:43 by jichew            #+#    #+#             */
/*   Updated: 2023/05/26 20:06:25 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	fail;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (i < len && *haystack)
	{
		fail = 0;
		while (haystack[fail] == needle[fail] && needle[fail] && haystack[fail])
		{
			if (fail + i > len - 1)
				break ;
			fail++;
		}
		if (needle[fail] == '\0')
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *largestring = "haystack";
// 	const char *smallstring = "stack";
// 	char *ptr;

//     ptr = strnstr(largestring, smallstring, 8);
// 	printf("%s\n", ptr);
// }