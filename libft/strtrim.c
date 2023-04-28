/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:54:01 by jichew            #+#    #+#             */
/*   Updated: 2023/04/28 16:02:39 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char me, char const *set)
{
	while (*set)
	{
		if (me == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	get_actual_len(char const *str, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str) - 1;
	while (check_set(str[i], set) && str[i])
		i++;
	while (check_set(str[len], set) && len > i)
		len--;
	len++;
	return (len - i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	len = get_actual_len(s1, set);
	tmp = (char *) malloc (len * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (check_set(*s1, set) && s1)
		s1++;
	while (len - 1 > 0)
	{
		tmp[i++] = *s1++;
		len--;
	}
	tmp[i] = '\0';
	return (tmp);
}

int main(void)
{
	char s1[] = "\tHello \tPlease Trim me !";
	char s2[] = "e";
	printf("%s\n%d",ft_strtrim(s1, s2), get_actual_len(s1, s2));
	return (0);
}