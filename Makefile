./bin/main: ./obj/main.o ./obj/sqr.o
	gcc ./obj/main.o ./obj/sqr.o -o ./bin/main -lm -Wall

dotest: ./bin/test
	./bin/test

./bin/test: ./obj/main_test.o ./obj/sqr.o ./obj/test.o
	gcc -o ./bin/test ./obj/main_test.o ./obj/sqr.o ./obj/test.o -lm -Wall

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -o ./obj/main.o -Wall

./obj/sqr.o: ./src/sqr.c
	gcc -c ./src/sqr.c -o ./obj/sqr.o -Wall

./obj/main_test.o: ./test/main.c
	gcc -c ./test/main.c -o ./obj/main_test.o -I thirdparty/ -Wall

./obj/test.o: ./test/test.c
	gcc -c ./test/test.c -o ./obj/test.o -I thirdparty/ -I src/ -Wall

.PHONY: clean
clean:
	rm -rf ./obj/* ./bin/*
