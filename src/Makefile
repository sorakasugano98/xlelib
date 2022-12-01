all:
	g++ -c xlelib.cpp table.cpp ttable.cpp
ifeq ($(OS),Windows_NT)
	del xlelib.a
	rmdir /s /q ..\build
	mkdir ..\build
	mkdir ..\build\lib
	mkdir ..\build\include
	copy *.hpp ..\build\include
else
	rm -f xlelib.a
	rm -r ../build
	mkdir -p ../build/lib
	mkdir ../build/include
	cp *.hpp ../build/include
endif
	ar -cvq ../build/lib/xlelib.a *.o
ifeq ($(OS),Windows_NT)
	del *.o
else
	rm *.o
endif
