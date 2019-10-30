/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:20:57 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/29 20:27:04 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	int i;

	/**		BASIC TESTS (NO-FLAGS)		**/
	i = printf("%s\n", "");
	printf("ret : %d\n", i);
	i = printf("%s\n", "test");
	printf("ret : %d\n", i);
	i = printf("ceci est un %s, ok ?\n", "test");
	printf("ret : %d\n", i);

	/**		ONLY_PADDING				**/
	i = printf("%10s\n", "");
	printf("ret : %d\n", i);
	i = printf("%0s\n", "");
	printf("ret : %d\n", i);
	i = printf("%10s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%0s\n", "test");
	printf("ret : %d\n", i);
	i = printf("ceci est un %10s, ok ?\n", "test");
	printf("ret : %d\n", i);
	i = printf("ceci est un %0s, ok ?\n", "test");
	printf("ret : %d\n", i);

	/**		PADDING + PRECISION			**/
	i = printf("%10.10s\n", "");
	printf("ret : %d\n", i);
	i = printf("%8.10s\n", "");
	printf("ret : %d\n", i);
	i = printf("%8.2s\n", "");
	printf("ret : %d\n", i);
	i = printf("%3.2s\n", "");
	printf("ret : %d\n", i);
	i = printf("%2.3s\n", "");
	printf("ret : %d\n", i);
	i = printf("%0.10s\n", "");
	printf("ret : %d\n", i);
	i = printf("%0.0s\n", "");
	printf("ret : %d\n", i);
	i = printf("%10.0s\n", "");
	printf("ret : %d\n", i);
	i = printf("%.10s\n", "");
	printf("ret : %d\n", i);
	i = printf("%10.0s\n", "");
	printf("ret : %d\n", i);

	i = printf("%10.10s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%8.10s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%8.2s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%3.2s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%2.3s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%0.10s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%0.0s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%10.0s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%.10s\n", "test");
	printf("ret : %d\n", i);
	i = printf("%10.0s\n", "test");
	printf("ret : %d\n", i);

}
