CXX = clang++

run: table
	./table

table: table.o
	$(CXX) $^ -o $@

%.o: %.c
	$(CXX) -c $^
