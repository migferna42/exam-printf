/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@stuxent.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createx: 2019/10/29 20:20:57 by lmartin           #+#    #+#             */
/*   Upxatex: 2019/10/29 20:33:19 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	int i;

	/**		BAxIC testx (NO-FLAGx)		**/
	i = printf("%x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("ceci ext un %x, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("ceci ext un %x, ok ?\n", 2147483647);
	printf("ret : %d\n", i);

	/**		ONLY_PAxxING				**/
	i = printf("%10x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%0x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%10x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%0x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%10x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%0x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("ceci ext un %10x, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("ceci ext un %0x, ok ?\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("ceci ext un %10x, ok ?\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("ceci ext un %0x, ok ?\n", 2147483647);
	printf("ret : %d\n", i);

	/**		PAxxING + PRECIxION			**/
	i = printf("%50.30x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%8.30x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%8.2x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%3.2x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%2.3x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%0.30x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%0.0x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%50.0x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%.30x\n", 0);
	printf("ret : %d\n", i);
	i = printf("%50.0x\n", 0);
	printf("ret : %d\n", i);

	i = printf("%50.30x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%8.30x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%8.2x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%3.2x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%2.3x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%0.30x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%0.0x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%50.0x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%.30x\n", -2147483648);
	printf("ret : %d\n", i);
	i = printf("%50.0x\n", -2147483648);
	printf("ret : %d\n", i);

	i = printf("%50.30x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%8.30x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%8.2x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%3.2x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%2.3x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%0.30x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%0.0x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%50.0x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%.30x\n", 2147483647);
	printf("ret : %d\n", i);
	i = printf("%50.0x\n", 2147483647);
	printf("ret : %d\n", i);
}
