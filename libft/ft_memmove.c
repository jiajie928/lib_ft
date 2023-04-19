/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:56:56 by jichew            #+#    #+#             */
/*   Updated: 2023/04/19 13:47:43 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (src <= dst)
	{
		while (len)
		{
			*(char *)(dst + len - 1) = *(char *)(src + len - 1);
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return ((void *)dst);
}

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
