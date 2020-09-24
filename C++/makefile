output:: math.o math_utils.o
	g++ math.o math_utils.o -o math

math.o: math.cpp
	g++ -c math.cpp

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

clean:
	rm *.o