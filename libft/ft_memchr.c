/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:05:15 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/17 16:12:58 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*sp;

	i = 0;
	sp = (char *) s;
	while (i < n)
	{
		if (sp[i] == (char ) c)
		{
			return (&sp[i]);
		}
		i++;
	}
	return (0);
}
