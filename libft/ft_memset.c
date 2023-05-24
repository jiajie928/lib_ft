/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:26:25 by jichew            #+#    #+#             */
/*   Updated: 2023/05/24 12:14:28 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;
	unsigned char	cc;

	if (len == 0)
		return (b);
	if (!b)
		return (NULL);
	i = 0;
	s = b;
	cc = c;
	while (i < len)
	{
		s[i] = cc;
		i++;
	}
}

// int main(void)
// {
// 	char str[] = "dfghjkl";
// 	char *g = ft_memset(str + 2, '/', 3);
// 	printf("%s",g);
// 	return (0);
// }