/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:31:05 by jichew            #+#    #+#             */
/*   Updated: 2023/04/22 01:22:30 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *p;

	if (size != 0 && SIZE_MAX / size >= count)
		return NULL;
	p = malloc(count * size);
	if (p == NULL)
		return NULL;
	ft_bzero(p, count * size);
	return (p);
}
