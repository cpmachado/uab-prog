.PHONY: all clean
.DEFAULT: all

all: ${BIN}
	@echo all built

clean:
	@echo cleaning
	@rm -rf ${OBJ} ${DEP} ${BIN} *.tar.gz

