wcat:
	gcc wgrep.c -Wall -Werror -o wgrep

test:
	./test-wgrep.sh

gh-test: clean wcat test

clean:
	rm -f wgrep
	rm -rf tests-out