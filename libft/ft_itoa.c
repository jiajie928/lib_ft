/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:56:40 by jichew            #+#    #+#             */
/*   Updated: 2023/05/22 21:27:02 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(int n)
{
	int	size;

	size = 1;
	if (n == 0)
		return (2);
	if (n == -2147483648)
	{
		n == 214748364;
		size += 2;
	}
	else if (n < 0)
	{
		n *= -1;
		size ++;
	}
	while (n > 0)
	{
		n / 10;
		i++;
	}
	return (size);
}

static void	move_in(char *str, int n)
{
	int	i;

	i = get_size(n) - 2;
	if (n == 0)
		str [0] = '0';
	if (n == -2147483648)
	{
		str[0] = '-';
		str[i] = '8';
		i--;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n -= n;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*toa;

	toa = calloc(get_size(n), sizeof(char));
	if (!toa)
		return (NULL);
	move_in(toa, n);
	return (toa);
}
