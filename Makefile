OBJECTS = main.o unindent.o indent.o

main: main.o unindent.o indent.o
	g++ -o main $(OBJECTS)

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h unindent.h

main.o: main.cpp indent.h unindent.h

clean:
	rm -f main $(OBJECTS) newtext.txt
help:
	@echo "Targets:"
	@echo " main"
	@echo 

