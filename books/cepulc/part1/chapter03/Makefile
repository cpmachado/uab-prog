include ../../config.mk


SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}
BIN = \
	program-3-1 \
	program-3-2

include ../../util.mk

program-3-1: program-3-1.o
program-3-2: program-3-2.o
