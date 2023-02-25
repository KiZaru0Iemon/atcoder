%:
	@g++ $@.cpp -o $@.out && ./$@.out

.PHONY:clean ## 実行ファイルをすべて削除
clean:
	@rm *.out

.PHONY:allclean ## 必要ファイル以外すべて削除
allclean:
	@find -maxdepth 1 -type f | grep -v -e "Makefile" -e "base.cpp" -e "Timer.h" | xargs rm;

.PHONY:merge ## cppファイルをcodesフォルダに移動
merge:
	@find -maxdepth 1 -type f | grep -v -e "Makefile" -e "base.cpp" -e "Timer.h" | xargs -IXX mv XX ./codes;

.PHONY:help ## ヘルプを見ることができる
help:
	@echo "変数 一覧 :"
	@grep -E '^[a-zA-Z_-]+ \?=.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = "( .= )|(## )"}; {printf "\033[31m%-12s\033[0m %s (default : %s)\n", $$1, $$3, $$2}'
	@echo ""
	@echo "target 一覧 :";
	@grep -E '^\.[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sed 's/.PHONY://g' | awk 'BEGIN {FS = " ## "}; {printf "\033[36m%-12s\033[0m %s\n", $$1, $$2}'
