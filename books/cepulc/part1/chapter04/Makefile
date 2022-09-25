include ../../config.mk


SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}
BIN = \
	program-4-1 \
	program-4-2 \
	program-4-3

include ../../util.mk

program-4-1: program-4-1.o
program-4-2: program-4-2.o
program-4-3: program-4-3.o
