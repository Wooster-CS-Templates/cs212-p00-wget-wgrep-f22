wcat:
	gcc wcat.c -Wall -Werror -o wcat

test:
	./test-wcat.sh

gh-test: clean wcat test

clean:
	rm -f wcat
	rm -rf tests-out