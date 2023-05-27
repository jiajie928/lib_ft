/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:56:56 by jichew            #+#    #+#             */
/*   Updated: 2023/05/26 19:48:02 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	if (!s && !d)
		return (NULL);
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	if (!dst && !src)
// 		return (NULL);
// 	if (src <= dst)
// 	{
// 		while (len)
// 		{
// 			*(char *)(dst + len - 1) = *(char *)(src + len - 1);
// 			len--;
// 		}
// 	}
// 	else
// 		ft_memcpy(dst, src, len);
// 	return ((void *)dst);
// }

/*
int main(void)
{
	char ori[] = "i am going to sleep";
	char *src = ori + 3;
	// src = am going to sleep;
	char *dst = ori + 7;
	// dst = oing to sleep;
	ft_memcpy(dst, src, 6);
	printf("%s",ori);

	// char *s = src + n;
	// // *s = 'i';
	// char *d = dst + n;
	// // *d = 't';

	// while (n >= 0)
	// 	d[n] = s[n]
	// 	n--;
	// return (d);
}
*/