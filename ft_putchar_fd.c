/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:33:32 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 12:37:03 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (!fd)
		return ;
	write(fd, &c, 1);
}
/*
int main(void)
{
    int filedesc = open("fdtest.txt", O_WRONLY | O_CREAT | O_APPEND);
 
    if (filedesc < 0) {
        return -1;
    }
 
    ft_putchar_fd('c', filedesc);
 
    return 0;
}
*/