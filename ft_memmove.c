/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:25:12 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/17 14:52:02 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(tmp + i) = *(const char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(tmp + i);
		i++;
	}
	free(tmp);
	return (dst);
}
/*
int main()
{
    char a[] = "Aticleworld";
    char b[16] = {0};
    
    ft_memmove(b, a, 5);
    printf("%s\n",b);
    ft_memmove(a, a+3, 5);
    printf("%s\n",b);
    ft_memmove(a+3, a, 5);
    printf("%s",b);
    return 0;
}
*/