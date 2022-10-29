/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:57:30 by rcalik            #+#    #+#             */
/*   Updated: 2022/10/27 17:41:17 by rcalik           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!n || src == dest)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	const char src[7] = "kalem";
	char dest[6];
	strcpy(dest, "kagit");
	printf("<HEDEF = %s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("> HEDEF = %s\n", dest);
	return (0);
}
*/
