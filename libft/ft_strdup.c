/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:27:57 by jichew            #+#    #+#             */
/*   Updated: 2023/05/22 16:07:04 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	int		i;

	if (s1 == NULL)
		return (NULL);
	c = (char *)malloc(ft_strlen(s1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		c[i] = s1[i];
	c[i] = '\0';
	return (c);
}
