include ../../config.mk


SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}
BIN = \
	program-10-1\
	program-10-2\
	program-10-3

include ../../util.mk

program-10-1: program-10-1.o
program-10-2: program-10-2.o
program-10-3: program-10-3.o
