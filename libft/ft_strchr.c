/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:21:23 by jichew            #+#    #+#             */
/*   Updated: 2023/04/07 23:29:46 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*src;

	src = (char *)s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (c == src[i])
			break ;
		i++;
	}
	return (src + i);
}	

#include <stdio.h>
#include <string.h>

int main () {
   const char str[80]; 
   const char ch; 
   char *p;
   p = strchr(str, ch);
   printf("%d\n", *p);

   char *q;
   q = ft_strchr(str, ch);
   printf("%d\n", *q);
   return 0;
}