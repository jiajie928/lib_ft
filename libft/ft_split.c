/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:19:12 by jichew            #+#    #+#             */
/*   Updated: 2023/05/19 22:46:37 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	**recursive_split(char const *s, char c, int dept)
{
	int	i;
	char	*split;
	char	**comb;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	split = ft_substr(s, 0, (size_t) i);
	if (split == NULL)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	if (s[i])
		recursive_split(s + i, c, dept + 1);
	else 
		comb = ft_calloc (dept + 2, sizeof(char*));
	if (!comb)
		return (NULL);
	comb[dept] = split;
	return (comb);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	if (*s == c)
		s++;
	if (!s)
		return (ft_calloc(1, sizeof(char*)));
	return recursive_split (s, c, 0); 
}