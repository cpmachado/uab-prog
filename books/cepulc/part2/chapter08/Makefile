include ../../config.mk


SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}
BIN = \
	program-8-1\
	program-8-2

include ../../util.mk

program-8-1: program-8-1.o
program-8-2: program-8-2.o
