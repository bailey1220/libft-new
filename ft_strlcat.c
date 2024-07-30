/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:25:56 by bachai            #+#    #+#             */
/*   Updated: 2024/07/05 13:46:39 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// contencates a string from the end of another, ensuring null -terminated
// prevent buffer overflow
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	if (!dest && size == 0)
		return (ft_strlen(src));
	if (!dest && !src)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main(void)
// {
//     char dest[30] = "Hel";
//     char *src = "AAAAAA";
// 	printf("%zu\n", ft_strlcat(dest, src, sizeof(dest)));
// 	printf("%s\n", dest);
// }
