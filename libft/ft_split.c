/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:19:12 by jichew            #+#    #+#             */
/*   Updated: 2023/05/29 17:14:57 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static char	**recursive_split(char const *s, char c, int depth)
{
	int		i;
	char	*str;
	char	**strs;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	str = ft_substr(s, 0, (size_t) i);
	if (!str)
		return (NULL);
	while (s[i] && s[i] == c)
		++i;
	if (s[i])
		strs = recursive_split(s + i, c, depth + 1);
	else
		strs = ft_calloc(depth + 2, sizeof(char *));
	if (!strs)
		return (NULL);
	strs[depth] = str;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	if (!*s)
		return (ft_calloc(1, sizeof(char *)));
	return (recursive_split(s, c, 0));
}
