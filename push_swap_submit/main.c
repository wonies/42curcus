/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:53:21 by wonhshin          #+#    #+#             */
/*   Updated: 2023/05/14 18:53:55 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_info	info;
	char	**get;

	a = NULL;
	b = NULL;
	get = NULL;
	if (ac < 2)
		print_error(-42);
	get = parsing(&a, ac, av);
	if (!get)
		return (0);
	pushswap_start(a, b, &info);
}
