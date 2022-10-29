/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:06:37 by rcalik            #+#    #+#             */
/*   Updated: 2022/10/29 14:16:30 by rcalik           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*
int main()
{
	const char s[] = "rabia.test";
	const char c = '.';
	char *ret;

	ret = ft_strchr(s, c);
	printf("|%c| > |%s|", c, ret);
	return (0);
}
*/
