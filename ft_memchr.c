/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:53:03 by dacastil          #+#    #+#             */
/*   Updated: 2024/10/01 18:59:13 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pr;

	i = 0;
	pr = (unsigned char *)s;
	while (i < n)
	{
		if (pr[i] == (unsigned char)c)
		{
			return (pr + i);
		}
		i++;
	}
	return (NULL);
}
