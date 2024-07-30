/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:14:04 by bachai            #+#    #+#             */
/*   Updated: 2024/07/01 12:53:35 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// set all bytes in a block of memory to zeros
void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*(tmp++) = 0;
		n--;
	}
}
/*int	main(void)
{
	char str[] = {0,1,2,3,4,5,6};
	unsigned	int i;
	
	ft_bzero(str, 7);
	i = 0;
	while(i < 7)
	{
	printf("%d", str[i]);
	i++;
	}
}*/