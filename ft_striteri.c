/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:37:48 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 14:38:59 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	ft_test(unsigned int i, char * c)
{
	printf("%p\n", c);
}

int	main()
{
	char ab[] = "abc";
	ft_striteri(ab, ft_test);
	//printf("abc > ABC : %s\n", ab);
}
*/