# Como un define para no escribirlo tantas veces.
DEPS = io.h

main: main.o io.o
	g++ main.o io.o -o Mastermind

# Si main.o es más antiguo que main.cpp compila.
main.o: main.cpp $(DEPS)
	g++ -c main.cpp

# Si suma.o es más antiguo que suma.cpp compila.
io.o: io.cpp $(DEPS)
	g++ -c io.cpp

#No mires el tiempo si te dice make clean, lo haces.
.PHONY: clean

clean:
	#$(RM) Se pone para que borre tanto Windows como Linux.
	$(RM) *.o
