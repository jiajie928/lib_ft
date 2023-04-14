/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:26:25 by jichew            #+#    #+#             */
/*   Updated: 2023/04/14 21:54:05 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	if (len == 0)
		return (b);
	// if (!b)
	// 	return (NULL);
	i = 0;
	s = (char *) b;
	while (len--)
		*s++ = c;
	return ((void *) s);
}

// #include <string.h>

// int main () {
//    char str[50];

//    strcpy(str,"This");
//    printf("%s\n",str);

//    printf("%s\n",ft_memset(str,'$',2));
//    puts(str);
//    return(0);
// }
