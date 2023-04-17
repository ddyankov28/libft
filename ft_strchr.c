/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:45:56 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:47:02 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a != '\0' && *a != (unsigned char)c)
	{	
		a++;
	}
	if (*a == (unsigned char)c)
		return ((char *)a);
	else
		return (NULL);
}
