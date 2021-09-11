is_armstrong_number : main.o 
	gcc main.o -o is_armstrong_number -lm 
main.o : main.c
	gcc -c main.c
clean:
	rm main.o is_armstrong_number 
cppcheck:
	@cppcheck --enable=all --inconclusive --language=c *.c
cppcheck-xml:
	@cppcheck *.c --xml --xml-version=2 --enable=all --inconclusive --language=c 2>reports/cppcheck/report.xml
