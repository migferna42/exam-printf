/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:24:29 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/29 22:36:39 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "training.h"

int		main(int argc, char *argv[])
{
	(void)argc;
	if (!(strcmp(argv[1],"system_d")))
		system_d();
	else if (!(strcmp(argv[1],"system_x")))
		system_x();
	else if (!(strcmp(argv[1],"system_s")))
		system_s();
	return (0);
}
