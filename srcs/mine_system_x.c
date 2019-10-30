/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mine_system_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:01:29 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/29 21:33:57 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "training.h"

void	system_x()
{
	int i;

	/**		BAxIC testx (NO-FLAGx)		**/
	i = ft_printf("%x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci ext un %x, ok ?\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci ext un %x, ok ?\n", 2147483647);
	ft_printf("ret : %d\n", i);

	/**		ONLY_PAxxING				**/
	i = ft_printf("%10x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%10x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci ext un %10x, ok ?\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci ext un %0x, ok ?\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci ext un %10x, ok ?\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("ceci ext un %0x, ok ?\n", 2147483647);
	ft_printf("ret : %d\n", i);

	/**		PAxxING + PRECIxION			**/
	i = ft_printf("%50.30x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.30x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.30x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.30x\n", 0);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0x\n", 0);
	ft_printf("ret : %d\n", i);

	i = ft_printf("%50.30x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.30x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.30x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.30x\n", -2147483648);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0x\n", -2147483648);
	ft_printf("ret : %d\n", i);

	i = ft_printf("%50.30x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.30x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%8.2x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%3.2x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%2.3x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.30x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%0.0x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%.30x\n", 2147483647);
	ft_printf("ret : %d\n", i);
	i = ft_printf("%50.0x\n", 2147483647);
	ft_printf("ret : %d\n", i);
}
