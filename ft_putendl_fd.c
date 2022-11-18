/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:37:09 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 12:39:11 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!fd || !s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &"\n", 1);
}
/*
int main(void)
{
    int filedesc = open("fdtest3.txt", O_WRONLY | O_CREAT | O_APPEND);
 
    if (filedesc < 0) {
        return -1;
    }
 
	char ab[] = "rabia";

   	ft_putendl_fd(ab, filedesc);
 
    return 0;
}
*/