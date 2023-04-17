/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:48:45 by ddyankov          #+#    #+#             */
/*   Updated: 2023/04/17 22:40:22 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*newhead;

	if (lst && del)
	{
		while (*lst)
		{
			newhead = (*lst)->next;
			ft_lstdelone((*lst), del);
			*lst = newhead;
		}
		*lst = NULL;
	}
}
