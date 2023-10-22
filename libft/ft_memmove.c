/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:57:10 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/17 16:03:44 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*sp;
	char		*dp;
	size_t		i;

	dp = (char *) dst;
	sp = (const char *) src;
	i = 0;
	if (dp == sp)
		return (dp);
	else if (dp > sp)
	{
		while (len-- > 0)
			dp[len] = sp[len];
	}
	else
	{
		while (i < len)
		{
			dp[i] = sp[i];
			i++;
		}
	}
	return (dp);
}
