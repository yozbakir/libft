/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:48:58 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/14 10:11:57 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	size_t	i;

	i = 0;
	dest = (char *) dst;
	source = (char *) src;
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
