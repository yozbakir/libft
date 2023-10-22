/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:14:12 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/17 16:20:28 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;
	size_t	i;

	i = 0;
	p1 = (char *) s1;
	p2 = (char *) s2;
	while (i < n)
	{
		if ((unsigned char)p1[i] == (unsigned char)p2[i])
		{
			i++;
		}
		else
			return ((unsigned char)p1[i] - (unsigned char)p2[i]);
	}
	return (0);
}
