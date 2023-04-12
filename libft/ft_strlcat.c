/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:52:25 by jichew            #+#    #+#             */
/*   Updated: 2023/04/12 09:48:22 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	j;
	size_t	src_len;

	if ((!dest && !dstsize) || ft_strlen(dest) >= dstsize)
		return (ft_strlen(src) + dstsize);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = 0;
	while (src[j] && j < dstsize - dest_len - 1)
	{
		dest[dest_len + j] =src[j];
		j ++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char	dst[] = "0123456789";
	char	src[] = "qwertyuiop";

	printf("before :\nsrc = %s\ndst = %s\n", src, dst);
	ft_strlcat(dst, src, 20);
	printf("\n\nafter :\nsrc = %s\ndst = %s\n", src, dst);
	printf("dst");

	char d[] = "0123456789";
	char s[] = "qwertyuiop";
	printf("\nbefore :\nsrc = %s\ndst = %s\n", s, d);
	ft_strlcat(dst, src, 15);
	printf("\n\nafter :\nsrc = %s\ndst = %s\n", s, d);
	printf("dst");
	return (0);
}