# Como un define para no escribirlo tantas veces.
DEPS = imprime.h

main: main.o imprime.o
	g++ main.o imprime.o -o Mastermind

# Si main.o es más antiguo que main.cpp compila.
main.o: main.cpp $(DEPS)
	g++ -c main.cpp

# Si suma.o es más antiguo que suma.cpp compila.
imprime.o: imprime.cpp $(DEPS)
	g++ -c imprime.cpp

#No mires el tiempo si te dice make clean, lo haces.
.PHONY: clean

clean:
	#$(RM) Se pone para que borre tanto Windows como Linux.
	$(RM) *.o
