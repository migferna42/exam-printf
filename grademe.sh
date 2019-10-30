# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    grademe.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 21:24:29 by lmartin           #+#    #+#              #
#    Updated: 2019/10/30 02:23:00 by lmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#! /bin/bash
#!/usr/bin/osascript

gcc -Wall -Wextra -Werror -c ../ft_printf.c > /dev/null 2>&1
gcc -c main.c mine_system_d.c mine_system_s.c mine_system_x.c > /dev/null 2>&1
gcc -o test_printf ft_printf.o main.o mine_system_d.o mine_system_s.o mine_system_x.o > /dev/null 2>&1

tester () {
	./test_printf "$1" > this_out
	#TIMING=$( (time ./test_printf "$1" > this_out_$1) | grep "real" | cut -f 2)
	if [ -n "$(cmp --silent "$1" "this_out")" ]
	then
  	printf "$1 \e[31m[FAILED]\e[0m\n"
	else
  	printf "$1 \e[92m[OK]\e[0m\n"
	fi
	#echo "done testing \"$1\": "
	#printf "[OK] %-25s (%s)\n" "\"$1\"" "$TIMING"
}

grademe() {
	printf "============================================================\n"
	touch "this_out"
	tester "system_d"
	tester "system_s"
	tester "system_x"
	echo "============================================================"
	rm "this_out"
	rm "main.o"
	rm "mine_system_d.o"
	rm "mine_system_s.o"
	rm "mine_system_x.o"
	rm "ft_printf.o"
	echo "done testing"
	rm "test_printf"
}
printf "\e[34m                               \e[0m\n"
printf "\e[34m           :::      ::::::::   \e[0m\n"
printf "\e[34m         :+:      :+:    :+:   \e[0m\n"
printf "\e[34m       +:+ +:+         +:+     \e[0m\n"
printf "\e[34m     +#+  +:+       +#+        \e[0m\n"
printf "\e[34m   +#+#+#+#+#+   +#+           \e[0m\n"
printf "\e[34m        #+#    #+#             \e[0m\n"
printf "\e[34m       ###   ########.fr       \e[0m\e[36mby @lmartin #Night-Squad\e[0m\n"
printf "\e[34m                               \e[0m\n"
printf "\e[100m            ~ TRAINING PRINTF FOR EXAM RANK 02 ~            \e[0m\n"
printf "Your file must be in ../ to be corrected, and named ft_print\n.c otherwise, you will get \e[31m[COMPILATION FAILED]\e[0m flag\n"
printf "============================================================\n"

if [ ! -f test_printf ]; then
	printf "\e[31m[COMPILATION FAILED]\e[0m\n"
	printf "============================================================\n"
	exit
fi
printf "If you want to start the test, type '\e[92myes\e[0m', a 120mn countdown\n will start.\n"
read yes
printf "============================================================\n"
if [ "$yes" != "yes" ]; then
	printf "OK BYE.\n"
	exit
fi
printf "\e[35msubject.en.txt (and fr) is available in /subjects\e[0m\n\n"
cat	subjects/subject.en.txt
printf "============================================================\n"
hour=2
min=0
sec=0
while [ $hour -ge 0 ]; do
	while [ $min -ge 0 ]; do
		while [ $sec -ge 0 ]; do
			timer="0$hour:"
			if ((min < 10)); then
				timer="${timer}0$min:"
			else
				timer="${timer}$min:"
			fi
			if ((sec < 10)); then
				timer="${timer}0$sec"
			else
				timer="${timer}$sec"
			fi
			printf "\r\e[33m[\e[0m\e[92m$timer\e[0m\e[33m]\e[0m>"
			let "sec=sec-1"
			read -t 1 -n 1 input
		    if [[ $input = "q" ]] || [[ $input = "Q" ]]; then
				# The following line is for the prompt to appear on a new line.
		        clear
		        exit
		    fi
		done
		sec=59
		let "min=min-1"
	done
	min=59
	let "hour=hour-1"
done
printf "DONE"
