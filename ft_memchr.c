/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:45:14 by mbarranq          #+#    #+#             */
/*   Updated: 2024/09/12 19:20:58 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	find_char;
	size_t			i;

	str = (unsigned char *)s;
	find_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == find_char)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
