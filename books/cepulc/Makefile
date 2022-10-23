PARTS = part1 part2

all:
	@echo building parts
	$(foreach part,${PARTS}, ${MAKE} -C ${part};)

clean:
	@echo cleaning parts
	$(foreach part,${PARTS}, ${MAKE} -C ${part} clean;)

lint:
	cpplint --recursive ${PARTS}
