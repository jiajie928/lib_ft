/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:07:56 by jichew            #+#    #+#             */
/*   Updated: 2023/04/03 19:08:10 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	main(void)
{
	int	test1;
	int	test2;
	int	test3;
	int	test4;

	test1 = 'a';
	test2 = 'Z';
	test3 = '1';
	test4 = '[' - 1;
	printf("test1 = %d\n", ft_isalpha(test1));
	printf("test2 = %d\n", ft_isalpha(test2));
	printf("test3 = %d\n", ft_isalpha(test3));
	printf("test4 = %d\n", ft_isalpha(test4));
}
