/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:45:18 by jichew            #+#    #+#             */
/*   Updated: 2023/05/25 22:33:41 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}

int main (int argc, char *argv[])
{
    int fd1;
    char buf[128];
    fd1 = open(argv[1], O_WRONLY);
    // if (fd1 == -1) {
    //     perror(argv[1]);
    //     return EXIT_FAILURE;
    // }

    /* Enter the data to be written into the file */
    scanf("%127s", buf);

	printf("%d\n",fd1);

    close(fd1);

    return 0;
}