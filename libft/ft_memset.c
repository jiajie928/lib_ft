/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:26:25 by jichew            #+#    #+#             */
/*   Updated: 2023/05/26 19:35:45 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*s;
	unsigned char	cc;

	i = 0;
	s = b;
	cc = c;
	while (i < len)
	{
		s[i] = cc;
		i++;
	}
	return ((void *) s);
}

// int main(void)
// {
// 	char str[] = "dfghjkl";
// 	char *g = ft_memset(str + 2, '/', 3);
// 	printf("%s",g);
// 	return (0);
// }