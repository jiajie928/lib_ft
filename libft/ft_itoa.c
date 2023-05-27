/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:56:40 by jichew            #+#    #+#             */
/*   Updated: 2023/05/27 17:50:05 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (2);
	if (n == -2147483648)
		return (12);
	else if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

static void	move_in(char *str, int n)
{
	int	i;

	i = get_size(n) - 2;
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
	{
		str[0] = '-';
		str[i] = '8';
		n = 214748364;
		i--;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
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

	toa = ft_calloc(get_size(n), sizeof(char));
	if (!toa)
		return (NULL);
	else
		move_in(toa, n);
	return (toa);
}

// int main (void)
// {
// 	int i;
// 	i = 2147483647;

// 	printf("%s", ft_itoa(2147483647));
// }