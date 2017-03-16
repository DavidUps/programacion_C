# Como un define para no escribirlo tantas veces.
DEPS = aritmetica.h

# Si suma es más antiguo que antiguo que main.o o suma.o compila.
suma: main.o suma.o
	g++ main.o suma.o -o suma

# Si main.o es más antiguo que main.cpp compila.
main.o: main.cpp $(DEPS)
	g++ -c main.cpp

# Si suma.o es más antiguo que suma.cpp compila.
suma.o: suma.cpp $(DEPS)
	g++ -c suma.cpp

#No mires el tiempo si te dice make clean, lo haces.
.PHONY: clean

clean:
	#$(RM) Se pone para que borre tanto Windows como Linux.
	$(RM) *.o
