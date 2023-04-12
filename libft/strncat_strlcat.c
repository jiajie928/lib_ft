/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:00:52 by jichew            #+#    #+#             */
/*   Updated: 2023/04/12 18:53:20 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[20] = "0123456789";
	char src[20] = "jiajie_";
	char d[20] = "0123456789";
	char s[20] = "jiajie_";

	printf("strncat : \nbefore :\nsrc = %s\ndst = %s\n", src ,dest);
	printf("before :\nsrc add = %p\ndst add = %p\n", &src ,&dest);
	strncat(dest, src, 10);
	printf("\nafter :\nsrc = %s\ndst = %s\n", src, dest);
	printf("=========================================\n");
	printf("strlcat : \nbefore :\nsrc = %s\ndst = %s\n", s ,d);
	printf("before :\nsrc add = %p\ndst add = %p\n", &s ,&d);
	printf("\nlen = %d", (int) strlcat(d, s, 5));
	printf("\nafter :\nsrc = %s\ndst = %s\n", s, d);
	printf("src add = %p\ndest add = %p", &s, &d);
	return (0);
}