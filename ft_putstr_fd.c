/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:48:17 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 12:49:39 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!fd || !s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int main(void)
{
    int filedesc = open("fdtest2.txt", O_WRONLY | O_CREAT | O_APPEND);
 
    if (filedesc < 0) {
        return -1;
    }

	char	ab[] = "rabia";
 
    ft_putstr_fd(ab, filedesc);
 
    return 0;
}
*/