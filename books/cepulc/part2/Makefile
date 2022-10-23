.PHONY: all clean
.DEFAULT: all

CHAPTERS = chapter05

all:
	@echo building chapters
	@$(foreach chapter,${CHAPTERS}, ${MAKE} -C ${chapter};)

clean:
	@echo cleaning chapters
	@$(foreach chapter,${CHAPTERS}, ${MAKE} -C ${chapter} clean;)

lint:
	cpplint --recursive ${CHAPTERS}
