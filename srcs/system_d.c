/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:20:57 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/29 20:40:58 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	int i;

	/**		BAdIC testd (NO-FLAGd)		**/
	i = printf("%d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("ceci edt un %d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("ceci edt un %d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);

	/**		ONLY_PADDING				**/
	i = printf("%10d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%0d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%10d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%0d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%10d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%0d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("ceci edt un %10d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("ceci edt un %0d, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("ceci edt un %10d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("ceci edt un %0d, ok ?\n", 2147483647);
	printf("ret : %d\n", i);

	/**		PADDING + PRECIdION			**/
	i = printf("%50.30d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%8.30d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%8.2d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%3.2d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%2.3d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%0.30d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%0.0d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%50.0d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%.30d\n", 0);
	printf("ret : %d\n", i);
	i = printf("%50.0d\n", 0);
	printf("ret : %d\n", i);

	i = printf("%50.30d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%8.30d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%8.2d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%3.2d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%2.3d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%0.30d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%0.0d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%50.0d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%.30d\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%50.0d\n", -2147483648);
	printf("ret : %d\n", i);

	i = printf("%50.30d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%8.30d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%8.2d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%3.2d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%2.3d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%0.30d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%0.0d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%50.0d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%.30d\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%50.0d\n", 2147483647);
	printf("ret : %d\n", i);
}
