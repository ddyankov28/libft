/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:57:03 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:50:15 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ind;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	ind = 0;
	while (ind < (size - 1) && src[ind])
	{
		dst[ind] = src[ind];
		ind++;
	}
	dst[ind] = '\0';
	return (i);
}
