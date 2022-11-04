include ../../config.mk


SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}
BIN = \
	program-11-1\
	program-11-2

include ../../util.mk

program-11-1: program-11-1.o
program-11-2: program-11-2.o
