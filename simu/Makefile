%:
	@g++ $@.cpp -o $@.out && ./$@.out

.PHONY:clean
clean:
	@rm *.out

.PHONY:allclean
allclean:
	@find -maxdepth 1 -type f | grep -v -e "Makefile" -e "base.cpp" | xargs rm;

.PHONY:merge
merge:
	@find -maxdepth 1 -type f | grep -v -e "Makefile" -e "base.cpp" | xargs -IXX mv XX ./codes;
