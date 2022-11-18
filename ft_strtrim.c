/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:26:20 by rcalik            #+#    #+#             */
/*   Updated: 2022/11/18 14:30:09 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1) - 1;
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
int main()
{
    char a[] = "++++---hello_people+---++-";
    char b[] = "+-";
    char *c = ft_strtrim(a, b);
    printf("%s",c);
    return 0;
}
*/