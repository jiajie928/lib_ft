/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:21:23 by jichew            #+#    #+#             */
/*   Updated: 2023/04/14 19:30:21 by jichew           ###   ########.fr       */
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

int main ()
{
   const char str[100] =  "http://www.tutorialspoint.com"; 
   const char ch = '.'; 
   char *p = strchr(str, ch);
   printf("%s\n", p);

//    char *p = "http://www.tutorialspoint.com";
   char *q;
   q = ft_strchr(str, ch);
   printf("%s\n", q);
   return 0;
}