message ?=## commitメッセージ

.PHONY:push ## リモートリポジトリにpush
push:
	git add .
	git commit -m "$(message)"
	git push origin master

.PHONY:fpull ## リモートリポジトリからの強制pull
fpull:
	git fetch origin master
	git reset --hard origin/master
