/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozabara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:41:18 by ozabara           #+#    #+#             */
/*   Updated: 2016/12/03 12:58:52 by ozabara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	while (*src != (char)c)
	{
		if (*src == '\0')
			return (NULL);
		src++;
	}
	return ((char*)src);
}