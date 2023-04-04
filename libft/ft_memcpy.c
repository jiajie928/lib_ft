/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:24:18 by jichew            #+#    #+#             */
/*   Updated: 2023/04/04 20:37:07 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int set;
}

#include <string.h>

int main ()
{
   const char src[] = "Heloooo!!";
   char dest[] = "Heloooo!!";
//    strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 9);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
