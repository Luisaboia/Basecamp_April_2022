#!/bin/sh
cat << "EOF"
──────────────────────
─────█─▄▀█──█▀▄─█─────
────▐▌──────────▐▌────    Estou fazendo
────█▌▀▄──▄▄──▄▀▐█────    seu serviço, ok?
───▐██──▀▀──▀▀──██▌───
──▄████▄──▐▌──▄████▄──
──────────────────────
EOF

echo "=== Preparando seus processos... ==="

echo "-- NORMINETTE --"
norminette -RCheckForbiddenHeader

echo "-- Enviando os mains... --"
mv /home/coder/corretor/ex00.c /home/coder/avaliacao/ex00
mv /home/coder/corretor/ex01.c /home/coder/avaliacao/ex01
mv /home/coder/corretor/ex02.c /home/coder/avaliacao/ex02
mv /home/coder/corretor/ex03.c /home/coder/avaliacao/ex03
mv /home/coder/corretor/ex04.c /home/coder/avaliacao/ex04
mv /home/coder/corretor/ex05.c /home/coder/avaliacao/ex05
mv /home/coder/corretor/ex06.c /home/coder/avaliacao/ex06
mv /home/coder/corretor/ex07.c /home/coder/avaliacao/ex07
mv /home/coder/corretor/ex08.c /home/coder/avaliacao/ex08
mv /home/coder/corretor/ex09.c /home/coder/avaliacao/ex09
mv /home/coder/corretor/ex10.c /home/coder/avaliacao/ex10
mv /home/coder/corretor/ex11.c /home/coder/avaliacao/ex11
mv /home/coder/corretor/ex12.c /home/coder/avaliacao/ex12

echo "-- GCC --"
echo "- ex00 -"
gcc ex00/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex01 -"
gcc ex01/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex02 -"
gcc ex02/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex03 -"
gcc ex03/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex04 -"
gcc ex04/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex05 -"
gcc ex05/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex06 -"
gcc ex06/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex07 -"
gcc ex07/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex08 -"
gcc ex08/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex09 -"
gcc ex09/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex10 -"
gcc ex10/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex11 -"
gcc ex11/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado
echo "- ex12 -"
gcc ex12/*.c -Wall -Wextra -Werror -o resultado && ./resultado && rm resultado

echo "-- Voltando os mains... --"

mv /home/coder/avaliacao/ex00/ex00.c /home/coder/corretor
mv /home/coder/avaliacao/ex01/ex01.c /home/coder/corretor
mv /home/coder/avaliacao/ex02/ex02.c /home/coder/corretor
mv /home/coder/avaliacao/ex03/ex03.c /home/coder/corretor
mv /home/coder/avaliacao/ex04/ex04.c /home/coder/corretor
mv /home/coder/avaliacao/ex05/ex05.c /home/coder/corretor
mv /home/coder/avaliacao/ex06/ex06.c /home/coder/corretor
mv /home/coder/avaliacao/ex07/ex07.c /home/coder/corretor
mv /home/coder/avaliacao/ex08/ex08.c /home/coder/corretor
mv /home/coder/avaliacao/ex09/ex09.c /home/coder/corretor
mv /home/coder/avaliacao/ex10/ex10.c /home/coder/corretor
mv /home/coder/avaliacao/ex11/ex11.c /home/coder/corretor
mv /home/coder/avaliacao/ex12/ex12.c /home/coder/corretor