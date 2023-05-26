/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:52:58 by jichew            #+#    #+#             */
/*   Updated: 2023/05/25 12:32:51 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	testing_01(unsigned int i, char *address)
{
	*address += i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}



int main(void)
{
	char	str[] = "abcdefghijkl";
	printf("before : %s\n", str);
	ft_striteri(str, testing_01);
	printf("after : %s\n", str);
	return (0);
}