include ../../config.mk


SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}
BIN = \
	program-5-1\
	program-5-2

include ../../util.mk

program-5-1: program-5-1.o
program-5-2: program-5-2.o
