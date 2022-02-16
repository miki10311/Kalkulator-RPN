all:
	clear
	/bin/bash Instrukcja.sh
	gcc -Wall -pedantic main.c stos.c stos.h struktura.h opcje.c opcje.h