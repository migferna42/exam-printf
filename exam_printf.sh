# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    exam_printf.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 21:24:29 by lmartin           #+#    #+#              #
#    Updated: 2019/10/30 05:10:18 by lmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#! /bin/bash
#!/usr/bin/osascript

trap ctrl_c INT

function ctrl_c() {
	kill $pid > /dev/null 2>&1
	wait $pid 2>/dev/null
	rm -rf "main.o"
	rm -rf "mine_system_d.o"
	rm -rf "mine_system_s.o"
	rm -rf "mine_system_x.o"
	rm -rf "ft_printf.o"
	rm -rf "test_printf"
	rm -rf "this_out"
    printf "$1 \e[31m[EXIT...]\e[0m\n"
	exit
}

compil ()
{
	gcc -Wall -Wextra -Werror -c ../ft_printf.c > /dev/null 2>&1
	gcc -c ./srcs/main.c ./srcs/mine_system_d.c ./srcs/mine_system_s.c ./srcs/mine_system_x.c > /dev/null 2>&1
	gcc -o ./test_printf ft_printf.o main.o mine_system_d.o mine_system_s.o mine_system_x.o > /dev/null 2>&1
}

start ()
{
	printf "============================================================\n"
	printf "\e[92mType 'grademe' to be graded, good luck.\e[0m\n"
	while true; do
	    read input
	    if [[ $input = "grademe" ]]; then
	        grademe
			break
	    fi
	done
}

tester () {
	./test_printf "$1" > this_out
	#TIMING=$( (time ./test_printf "$1" > this_out_$1) | grep "real" | cut -f 2)
	if [ "$(diff "$1" "this_out")" ]
	then
		rm "this_out"
  		printf "$1 \e[31m[FAILED]\e[0m\n"
		start
	else
		rm "this_out"
  		printf "$1 \e[92m[OK]\e[0m\n"
	fi
	#echo "done testing \"$1\": "
	#printf "[OK] %-25s (%s)\n" "\"$1\"" "$TIMING"
}

grademe() {
	compil
	if [ ! -f test_printf ]; then
		printf "\e[31m[COMPILATION FAILED]\e[0m\n"
		start
	fi
	printf "============================================================\n"
	touch "this_out"
	tester "system_d"
	tester "system_s"
	tester "system_x"
 	printf "============================================================\n"
	printf "\e[92m[CONGRATULATIONS 100]\e[0m\n"
	kill $pid
	wait $pid 2>/dev/null
	rm "main.o"
	rm "mine_system_d.o"
	rm "mine_system_s.o"
	rm "mine_system_x.o"
	rm "ft_printf.o"
	rm "test_printf"
	exit
}
clear
printf "\e[34m                               \e[0m\n"
printf "\e[34m           :::      ::::::::   \e[0m\n"
printf "\e[34m         :+:      :+:    :+:   \e[0m\n"
printf "\e[34m       +:+ +:+         +:+     \e[0m\n"
printf "\e[34m     +#+  +:+       +#+        \e[0m\n"
printf "\e[34m   +#+#+#+#+#+   +#+           \e[0m\n"
printf "\e[34m        #+#    #+#             \e[0m\e[36mby @lmartin &\e[0m\n"
printf "\e[34m       ###   ########.fr       \e[0m\e[36m @mle-floc for Night-Squad\e[0m\n"
printf "\e[34m                               \e[0m\n"
printf "\e[100m            ~ TRAINING PRINTF FOR EXAM RANK 02 ~            \e[0m\n"
printf "Your file must be in ../ to be corrected, and named ft_print\n.c otherwise, you will get \e[31m[COMPILATION FAILED]\e[0m flag\n"
printf "============================================================\n"

printf "If you want to start the test, type '\e[92myes\e[0m', a 120mn countdown\n will start.\n"
read yes
printf "============================================================\n"
if [ "$yes" != "yes" && "$yes" != "y"]; then
	printf "OK BYE.\n"
	exit
fi

python timer.py $$ &
pid=$!
printf "\e[35msubject.en.txt (and fr) is available in /subjects\e[0m\n\n"
cat	subjects/subject.en.txt
start
