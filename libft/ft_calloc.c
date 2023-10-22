/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:19:55 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/17 17:29:58 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*d;
	size_t	i;

	d = (char *)malloc(count * size);
	if (d == 0)
		return (0);
	i = 0;
	while (i < count * size)
	{
		d[i] = 0;
		i++;
	}
	return ((void *)d);
}
