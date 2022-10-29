/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:32:24 by rcalik            #+#    #+#             */
/*   Updated: 2022/10/27 17:47:20 by rcalik           ###   ########.tr       */
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
