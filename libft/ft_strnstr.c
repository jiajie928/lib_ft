/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:08:43 by jichew            #+#    #+#             */
/*   Updated: 2023/04/19 21:56:29 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	fail;

	if (!*needle)
		return ((char *)haystack);
	// while (*haystack != '\0')

	return((char *)needle);
	
}

int main(void)
{
	const char *largestring;
	const char *smallstring;
	char *ptr;

    ptr = strnstr(largestring, smallstring, 10);
	printf("%s\n", ptr);
}