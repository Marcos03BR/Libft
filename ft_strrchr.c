/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:09:40 by mbarranq          #+#    #+#             */
/*   Updated: 2024/09/12 11:39:58 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			result = &s[i];
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return ((char *)result);
}
