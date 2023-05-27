/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:19:12 by jichew            #+#    #+#             */
/*   Updated: 2023/05/26 20:25:52 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

// static char	**recursive_split(char const *s, char c, int dept)
// {
// 	int		i;
// 	char	*split;
// 	char	**comb;

// 	i = 0;
// 	comb = NULL;
// 	while (s[i] && s[i] != c)
// 		i++;
// 	split = ft_substr(s, 0, (size_t) i);
// 	if (!split)
// 		return (NULL);
// 	while (s[i] && s[i] == c)
// 		i++;
// 	if (s[i])
// 		recursive_split(s + i, c, dept + 1);
// 	else
// 		comb = ft_calloc(dept + 2, sizeof(char *));
// 	if (!comb)
// 		return (NULL);
// 	comb[dept] = split;
// 	return (comb);
// }

// char	**ft_split(char const *s, char c)
// {
// 	if (!s)
// 		return (NULL);
// 	if (*s && *s == c)
// 		s++;
// 	if (!*s)
// 		return (ft_calloc(1, sizeof(char *)));
// 	return (recursive_split(s, c, 0));
// }

static int	is_sep(char s, char c)
{
	return (s == c);
}

static int	get_num_row(char const *str, char sep)
{
	int	i;
	int	row;

	i = 0;
	row = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			++i;
		if (str[i] && !is_sep(str[i], sep))
			row++;
		while (str[i] && !is_sep(str[i], sep))
			++i;
	}
	return (row + 1);
}

static int	get_num_col(char const *str, char sep, int curr_row)
{
	int	i;
	int	k;
	int	row;

	i = 0;
	row = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			++i;
		if (str[i] && !is_sep(str[i], sep))
			row++;
		while (str[i] && !is_sep(str[i], sep))
		{
			if (row == curr_row)
				++k;
			++i;
		}
		if (row == curr_row)
			break ;
	}
	return (k + 1);
}

static void	ft_copy(char *s, char const *str, char sep, int curr_row)
{
	int	i;
	int	k;
	int	row;

	i = 0;
	row = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			++i;
		if (str[i] && !is_sep(str[i], sep))
			row++;
		while (str[i] && !is_sep(str[i], sep))
		{
			if (row == curr_row)
				s[k++] = str[i];
			++i;
		}
		s[k] = 0;
		if (row == curr_row)
			return ;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (!s)
		return (0);
	arr = malloc(sizeof(char *) * get_num_row(s, c));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < get_num_row(s, c) - 1)
	{
		arr[i] = malloc(sizeof(char) * get_num_col(s, c, i + 1));
		if (!arr[i])
			return (NULL);
		ft_copy(arr[i], s, c, i + 1);
		++i;
	}
	arr[i] = 0;
	return (arr);
}
