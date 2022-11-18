/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:40:17 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 11:41:57 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
 char str1[ ] = "oguzhan";
 char str2[ ] = "oguzawa";

 printf("str1 = %s\n", str1);
 printf("str2 = %s\n", str2);

 printf("\nmemcmp( str1, str2, 5 ) = %d\n", memcmp( str1, str2, 5 ));
 printf("\nmemcmp( str1, str2, 15 ) = %d\n", memcmp( str1, str2, 15 ));
 printf("\nmemcmp( str2, str1, 15 ) = %d\n", memcmp( str2, str1, 15 ));

 return 0;
}
*/