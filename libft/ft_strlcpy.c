/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:36:10 by jichew            #+#    #+#             */
/*   Updated: 2023/05/22 16:00:50 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize -1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
int	main(void)
{
	// char	dst[] = "0123456789";
	// char	*src;

	// printf("before :\nsrc = %s\ndst = %s\n", src, dst);
	// printf("%d", (int) ft_strlcpy(dst, src, 0));
	// printf("\n\nafter :\nsrc = %s\ndst = %s\n", src, dst);
	// printf("dst[4] = %c", dst[3]);
	// printf("\n===========");

	char d[] = "0123456789";
	char *s;
	printf("\n\nbefore :\nsrc = %s\ndst = %s\n", s, d);
	printf("%d", (int) strlcpy(d, s, 0));
	printf("\n\nafter :\nsrc = %s\ndst = %s\n", s, d);
	
	printf("d[4] = %c", d[3]);
	printf("\ndst");
	return (0);
}
*/