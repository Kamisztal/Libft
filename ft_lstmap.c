/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:05:16 by pmisztal          #+#    #+#             */
/*   Updated: 2026/10/26 16:05:16 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	newlist = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return ;
	while (lst != NULL)
	{
		newlist = f(lst->content);
		lst = lst->next;
	}
}
