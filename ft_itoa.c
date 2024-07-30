/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:17:40 by bachai            #+#    #+#             */
/*   Updated: 2024/07/01 12:43:19 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// convert integer to string

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	num;
	char			*str;
	int				i;

	len = num_len(n);
	num = n;
	i = len - 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[i--] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		str[i--] = (num % 10) + '0';
		num /= 10;
	}
	str[len] = '\0';
	return (str);
}
// int	main(void)
// {
// 	// ft_itoa(-2147483648);
// 	printf("%s\n", ft_itoa(-2147483648));
// }