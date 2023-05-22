/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:30:35 by jichew            #+#    #+#             */
/*   Updated: 2023/05/22 15:59:37 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	trimlen(char const *str, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str) - 1;
	while (is_set(str[i], set) && str[i])
		i++;
	while (is_set(str[len], set) && len > i)
		len--;
	len++;
	return (len - i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	int		len;
	int		i;

	if (!s1 || !set)
		return (NULL);
	len = trimlen(s1, set);
	trimstr = (char *) malloc (len * sizeof(char));
	if (!trimstr)
		return (NULL);
	i = 0;
	while (is_set(*s1, set) && s1)
		s1++;
	while (len - 1 > 0)
	{
		trimstr[i++] = *s1++;
		len--;
	}
	trimstr [i] = '\0';
	return (trimstr);
}

// int main (void)
// {
// 	char s1[] = "Hello \t Please Trim meeeee ";
// 	char s2[] = "\t He";
// 	printf("%s\n%d", ft_strtrim(s1,s2), trimlen(s1,s2));
// 	return (0);
// }