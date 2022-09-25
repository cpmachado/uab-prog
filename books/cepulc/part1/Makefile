.PHONY: all clean
.DEFAULT: all

CHAPTERS = chapter01 chapter02 chapter03 chapter04

all:
	@echo building chapters
	@$(foreach chapter,${CHAPTERS}, ${MAKE} -C ${chapter};)

clean:
	@echo cleaning chapters
	@$(foreach chapter,${CHAPTERS}, ${MAKE} -C ${chapter} clean;)

lint:
	cpplint --recursive ${CHAPTERS}
