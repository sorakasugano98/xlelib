all:
	g++ -c table.cpp ttable.cpp
ifeq ($(OS),Windows_NT)
	if exist libxlelib.a del libxlelib.a
	if exist ..\build rmdir /s /q ..\build
	mkdir ..\build
	mkdir ..\build\lib
	mkdir ..\build\include
	mkdir ..\build\include\xlelib
	copy *.hpp ..\build\include\xlelib
else
	rm -f xlelib.a
	rm -r ../build
	mkdir -p ../build/lib
	mkdir -p ../build/include/xlelib
	cp *.hpp ../build/include/xlelib
endif
	ar -cvq ../build/lib/libxlelib.a *.o
ifeq ($(OS),Windows_NT)
	del *.o
else
	rm *.o
endif
