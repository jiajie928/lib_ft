/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:21:23 by jichew            #+#    #+#             */
/*   Updated: 2023/05/27 18:06:42 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*src;

	src = (char *)s;
	i = 0;
	while (i <= ft_strlen(src))
	{
		if ((char)c == src[i])
			return (src + i);
		i++;
	}
	return (NULL);
}	

// int main ()
// {
//    const char str[100] =  "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *p = strchr(str, ch);
//    printf("%s\n", p);

// //    char *p = "http://www.tutorialspoint.com";
//    char *q;
//    q = ft_strchr(str, ch);
//    printf("%s\n", q);
//    return 0;
// }