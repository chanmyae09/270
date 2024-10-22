
all: ll_program

ll_program: ll_main.o ll.h ll.ipp
	g++ $< -o $@

test: lltest
	LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/cs/cs270/lib ./lltest

lltest: test.o
	g++ $^ -o $@ -lgtest -lpthread -L/cs/cs270/lib

%.o: %.cpp ll.h ll.ipp
	g++ -c $< -o $@ -I/cs/cs270/include

clean:
	rm -f ./*.o lltest ll_program
