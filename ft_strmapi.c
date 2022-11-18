/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:35:20 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 14:37:06 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (!s)
		return (0);
	new_str = (char *)malloc (ft_strlen(s) + 1);
	if (!new_str)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char	test(unsigned int i, char c)
{
	i = 0;
	return (c - 32);
}

int	main()
{
	printf("abc > ABC : %s\n", ft_strmapi("abc", test));
}
*/