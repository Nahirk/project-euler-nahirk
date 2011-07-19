all:
	g++ $(p).cc
	./$(p)

clean:
	rm $(p)