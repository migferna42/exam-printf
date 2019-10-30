/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mine_system_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:20:57 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/29 21:33:55 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "training.h"

void	system_s()
{
	int i;

	/**		BASIC TESTS (NO-FLAGS)		**/
	i = ft_printf("%s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci est un %s, ok ?\n", "test");
	ft_printf("ret : %d\n", i);

	/**		ONLY_PADDING				**/
	i = ft_printf("%10s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci est un %10s, ok ?\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci est un %0s, ok ?\n", "test");
	ft_printf("ret : %d\n", i);

	/**		PADDING + PRECISION			**/
	i = ft_printf("%10.10s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.10s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.10s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10.0s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.10s\n", "");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10.0s\n", "");
	ft_printf("ret : %d\n", i);

	i = ft_printf("%10.10s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.10s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.10s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10.0s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.10s\n", "test");
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10.0s\n", "test");
	ft_printf("ret : %d\n", i);

}
