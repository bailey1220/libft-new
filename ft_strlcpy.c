/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:26:58 by bachai            #+#    #+#             */
/*   Updated: 2024/07/01 12:49:44 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// copies a string to a destination buffer, ensuring null terminated
// handle buffer overflow
int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	dst[] = "Hell0";
// 	char	src[5];
// 	unsigned int size = 10;

// 	printf("%d\n", ft_strlcpy(src, dst, size));
// 	printf("%s", src);
// }