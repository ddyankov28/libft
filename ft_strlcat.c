/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:11:09 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:49:03 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ind;

	i = 0;
	ind = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[ind] && ind < size)
		ind++;
	while (src[i] && (ind + i + 1) < size)
	{
		dst[ind + i] = src[i];
		i++;
	}
	if (ind < size)
		dst[ind + i] = '\0';
	return (ind + ft_strlen(src));
}
