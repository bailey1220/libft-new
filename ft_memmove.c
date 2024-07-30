/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:21:53 by bachai            #+#    #+#             */
/*   Updated: 2024/07/01 12:45:28 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// // copies a block of memory from one location to another
// handles overlapping regions correctly
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;
	size_t	i;

	if (!src && !dst)
		return (NULL);
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	i = 0;
	if (tmp_dst > tmp_src)
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dst);
}
// int	main(void)
// {
// 	char	dest[50] = "World";
// 	char	src[50] = "Hello World";
// 	ft_memmove(dest, src, 5);
// 	printf("%s", dest);
// }