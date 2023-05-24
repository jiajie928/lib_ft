/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 00:51:02 by jichew            #+#    #+#             */
/*   Updated: 2023/05/24 12:05:32 by jichew           ###   ########.fr       */
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
	{
		n = 214748364;
		size = 2;
	}
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

static void	move(char *str, int n)
{
	int	index;

	index = get_size(n) - 2;
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
	{
		str[0] = '-';
		str[index] = '8';
		n = 214748364;
		index--;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[index] = n % 10 + '0';
		n /= 10;
		index--;
	}
}

char	*ft_itoa(int n)
{
	char	*toa;

	toa = (char *)ft_calloc(get_size(n), sizeof(char));
	if (!toa)
		return (NULL);
	move(toa, n);
	return (toa);
}

 int	main(void)
{
	printf("itoa = %s\n", ft_itoa(1));
	return (0);
}
