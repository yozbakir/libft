/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:38:49 by yozbakir          #+#    #+#             */
/*   Updated: 2023/10/21 20:43:53 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	find_digit(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			digit;
	char		*string;
	long		num;

	num = (long)n;
	digit = find_digit(num);
	if (num < 0)
	{
		num *= -1;
		digit += 1;
	}
	string = (char *)malloc(sizeof(char) * digit + 1);
	if (!string)
		return (NULL);
	string[digit] = '\0';
	while (digit > 0)
	{
		string[--digit] = (num % 10) + 48;
		num /= 10;
	}
	if (n < 0)
		string[0] = '-';
	return (string);
}
