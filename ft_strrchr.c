/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:05:07 by damachad          #+#    #+#             */
/*   Updated: 2023/04/12 12:05:37 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		l;
	char	*ptr;

	ptr = (char *)str;
	l = ft_strlen(ptr);
	if (c == '\0')
	{
		return (ptr + l);
	}
	while (l > 0)
	{
		if (ptr[l - 1] == c)
			return (ptr + l - 1);
		l--;
	}
	return (0);
}
