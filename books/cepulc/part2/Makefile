.PHONY: all clean
.DEFAULT: all

CHAPTERS = chapter05 chapter06 chapter07 chapter08 chapter09

all:
	@echo building chapters
	@$(foreach chapter,${CHAPTERS}, ${MAKE} -C ${chapter};)

clean:
	@echo cleaning chapters
	@$(foreach chapter,${CHAPTERS}, ${MAKE} -C ${chapter} clean;)

lint:
	cpplint --recursive ${CHAPTERS}
