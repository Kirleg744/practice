all: createstaticlib labcompile clean

createstaticlib:
	@gcc -c lib.c
	@ar cr libstatic.a
	@rm -rf *.o

createdynamiclib: clean
	@gcc -c lib.c
	@export LD_LIBRARY_PATH="$$LD_LIBRARY_PATH:$$PWD"
	@gcc -shared -o libdynamic.so lib.o
	@rm -rf *.o

labcompile:
	@if [ $(number) != 3 ] && [ $(number) != 4 ] && [ $(number) != 7 ]; then \
		gcc -c $(number)/main.c; \
		gcc -o temp main.o -L ./ -lstatic -lm; \
		./temp; \
	else \
		echo -n "a or b: "; \
		read letter; \
		gcc -c $(number)/$$letter.c; \
		gcc -o temp $$letter.o -L ./ -lstatic -lm; \
		./temp; \
	fi; \

	@rm -rf *.o
	@rm -rf temp

clean:
	@rm -rf *.o
	@rm -rf temp