#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_printf.h"

int     main(void)
{
		int     minint = -2147483648;
		char c1 = '!';
		int count = 1;
		int num = 1234;

		printf("\nchar\n");
		count = printf("\t1234567890qwertyuiop_%c_%%_post", c1);
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t1234567890qwertyuiop_%c_%%_post", c1);
		printf("\n\tsize =: %i\n", count);

		printf("\n\nstring\n");
		count = printf("\t_%s_%c_post", "qwertyuiop", '!');
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t_%s_%c_post", "qwertyuiop", '!');
		printf("\n\tsize =: %i\n", count);
		count = printf("\t_%s", NULL);
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t_%s", NULL);
		printf("\n\tsize =: %i\n", count);

		printf("\n\nhex, HEX\n");
		count = printf("\t_%x_%X_", 456747754, 456747754); //<<<<-------

		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t_%x_%X_", 456747754, 456747754);
		printf("\n\tsize =: %i\n", count);

		printf("\n\nPointer\n");
		count = printf("\t_%p_", NULL); //<<<<-------
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t_%p_", NULL);
		printf("\n\tsize =: %i\n", count);
		count = printf("\t_%p_", &num); //<<<<-------
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t_%p_", &num);
		printf("\n\tsize =: %i\n", count);

		printf("\n\nUnsigned int\n");
		count = printf("\t_%u_", (unsigned int)3000000000); //<<<<-------
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t_%u_", (unsigned int)3000000000);
		printf("\n\tsize =: %i\n", count);

		printf("\n\nInteger and Digital\n");
		count = printf("\t_%d_%i_", minint, -123); //<<<<-------
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t_%d_%i_", minint, -123);
		printf("\n\tsize =: %i\n", count);

		printf("\n\n Percent Sign \n\n");
		count = printf("\t%% %% %%");
		printf("\n\tsize =: %i\n", count);
		count = ft_printf("\t%% %% %%");
		printf("\n\tsize =: %i\n", count);
		printf("\n\n");
		//char *str = (char *)malloc(sizeof(char) * 15);
		printf(" Leak Check\n\n");
		return (0);
}