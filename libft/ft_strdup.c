/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:28:31 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/14 11:40:09 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	int		i;
	char	*copy;

	i = 0;
	length = 0;
	while (s1[length])
		length++;
	copy = (char *)malloc(sizeof(char) * length + 1);
	if (copy == 0)
		return (0);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
