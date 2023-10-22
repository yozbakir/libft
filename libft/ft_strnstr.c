/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:23:36 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/21 15:56:18 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == 0)
		return ((char *) haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && ((i + j) < len)
			&& (needle[j] != '\0'))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
