all: msg
msg: 
	echo "Use Cmake instead!"
main: main.cc professor president assistant
	$(CXX) -c main.cc -o main.o
	$(CXX) professor.o president.o employee.o assistant.o main.o -o main.exe
professor: professor.cc employee
	$(CXX) -c professor.cc -o professor.o
president: president.cc employee
	$(CXX) -c president.cc -o president.o
assistant: assistant.cc employee
	$(CXX) -c assistant.cc -o assistant.o
employee: employee.cc
	$(CXX) -c employee.cc -o employee.o
clean:
	rm $(wildcard *.o) $(wildcard *.exe)
