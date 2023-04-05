/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:24:18 by jichew            #+#    #+#             */
/*   Updated: 2023/04/05 21:27:46 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	const char	*s;
	char		*d;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	while (n-- && ft_strlen(s))
	{
		d[i] = s[i];
		i ++;
	}
	return ((void *)d);
}

// #include <stdio.h>
#include <string.h>

// struct {
//   char name[40];
//   int age;
// } person, person_copy;

// int main ()
// {
//   char myname[] = "Pierre de Fermat";

//   /* using memcpy to copy string: */
//   memcpy ( person.name, myname, strlen(myname)+1 );
//   person.age = 46;

//   /* using memcpy to copy structure: */
//   memcpy ( &person_copy, &person, sizeof(person) );

//   printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age );

//   return 0;
// }

// int main(void)
// {
	// char ori[100] = "i am going to sleep tomorrow hehehehehhe 12314";
    // char *src = ori + 6;
    // // src = am going to sleep;
    // char *dst = ori + 6;
    // // dst = oing to sleep;
    // memcpy(dst, src, 15);
    // printf("%s\n",ori);

	// char ori1[100] = "i am going to sleep tomorrow hehehehehhe 12314";
    // char *src1 = ori1 + 3;
    // // src = am going to sleep;
    // char *dst1 = ori1 + 5;
    // // dst = oing to sleep;
    // // memcpy(dst1, NULL, 15);
    // // printf("%s",ori1);
	struct {
  char name[40];
  int age;
} person, person_copy;

int main ()
{
  char myname[] = "Pierre de Fermat";

  /* using memcpy to copy string: */
  ft_memcpy ( person.name, myname, strlen(myname)+1 );
  person.age = 46;

  /* using memcpy to copy structure: */
  ft_memcpy ( &person_copy, &person, sizeof(person) );

  printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age );

  return 0;
}
// }