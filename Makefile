message ?= ## commitメッセージ
base ?= test_field## 基準にするbase.cppの場所

.PHONY:help ## ヘルプを見ることができる
help:
	@echo "変数 一覧 :"
	@grep -E '^[a-zA-Z_-]+ \?=.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = "( .= )|(## )"}; {printf "\033[31m%-12s\033[0m %s (default : %s)\n", $$1, $$3, $$2}'
	@echo ""
	@echo "target 一覧 :";
	@grep -E '^\.[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sed 's/.PHONY://g' | awk 'BEGIN {FS = " ## "}; {printf "\033[36m%-12s\033[0m %s\n", $$1, $$2}'

.PHONY:push ## リモートリポジトリにpush
push:
	git add .
	git commit -m "$(message)"
	git push origin master

.PHONY:auto ## 日付と時間をメッセージとしてリモートリポジトリにpush
auto:
	git add .
	date | xargs -IXX git commit -m "XX"
	git push origin master

.PHONY:fpull ## リモートリポジトリからの強制pull
fpull:
	git fetch origin master
	git reset --hard origin/master

.PHONY:bset ## 更新したbase.cppをすべてのbase.cppに適応
bset:
	@cp ./$(base)/base.cpp ./contest/base.cpp
	@cp ./$(base)/base.cpp ./simu/base.cpp
#@cp ./$(base)/base.cpp ./algorithms/base.cpp
#@cp ./$(base)/base.cpp ./test_field/base.cpp

