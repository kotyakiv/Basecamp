/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 06:58:02 by ykot              #+#    #+#             */
/*   Updated: 2021/06/10 09:11:16 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef	struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_list_last(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);
#endif
