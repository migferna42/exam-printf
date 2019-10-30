/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mine_system_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:20:57 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/29 22:35:40 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "training.h"

void	system_d()
{
	int i;

	/**		BAdIC testd (NO-FLAGd)		**/
	i = ft_printf("%d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci edt un %d, ok ?\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci edt un %d, ok ?\n", 2147483647);
	ft_printf("ret : %d\n", i);

	/**		ONLY_PADDING				**/
	i = ft_printf("%10d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci edt un %10d, ok ?\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci edt un %0d, ok ?\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci edt un %10d, ok ?\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci edt un %0d, ok ?\n", 2147483647);
	ft_printf("ret : %d\n", i);

	/**		PADDING + PRECIdION			**/
	i = ft_printf("%50.30d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.30d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.30d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.30d\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0d\n", 0);
	ft_printf("ret : %d\n", i);

	i = ft_printf("%50.30d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.30d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.30d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.30d\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0d\n", -2147483648);
	ft_printf("ret : %d\n", i);

	i = ft_printf("%50.30d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.30d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.30d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.30d\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0d\n", 2147483647);
	ft_printf("ret : %d\n", i);
}
