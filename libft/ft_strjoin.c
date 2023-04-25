/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:48:39 by jichew            #+#    #+#             */
/*   Updated: 2023/04/25 19:09:44 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sj;
	int		len;
	int		i;
	int 	j;
	
	len = ft_strlen(s1) + ft_strlen(s2);
	sj = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sj)
		return (NULL);
	i = -1;
	while (s1[++i])
		sj[i] = s1[i];
	j = -1;
	while (s2[++j])
		sj[i++] = s2[j];
	return (sj);
}

int main (void)
{
	printf("%s", )
}