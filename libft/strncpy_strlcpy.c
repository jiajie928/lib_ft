/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:57:25 by jichew            #+#    #+#             */
/*   Updated: 2023/04/12 16:35:12 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[20] = "0123456789";
	char src[20] = "jiajie_";
	char d[20] = "0123456789";
	char s[20] = "jiajie_";

	printf("strncpy : \nbefore :\nsrc = %s\ndst = %s\n", src ,dest);
	printf("before :\nsrc add = %p\ndst add = %p\n", &src ,&dest);
	strncpy(dest, src, 7);
	printf("\nafter :\nsrc = %s\ndst = %s\n", src, dest);
	printf("=========================================\n");
	printf("strlcpy : \nbefore :\nsrc = %s\ndst = %s\n", s ,d);
	printf("before :\nsrc add = %p\ndst add = %p\n", &s ,&d[11]);
	strlcpy(d, s, 7);
	printf("\nafter :\nsrc = %s\ndst = %s\n", s, d);
	printf("%p\n%c", &d[9] ,d[9]);
	return (0);
}

