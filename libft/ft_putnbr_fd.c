/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:08:51 by jichew            #+#    #+#             */
/*   Updated: 2023/05/26 13:55:06 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nb;

	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n / 10 > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		nb = n % 10 + '0';
		write (fd, &nb, 1);
	}
	else
	{
		nb = n % 10 + '0';
		write (fd, &nb, 1);
	}
}