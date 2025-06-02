# 最初に
# `chmod +x run.sh`


# コンパイル方法
# ```
# bash run.sh sample.c

# ```

#!/bin/bash

# $1は最初の引数（ファイル名）
gcc "$1" -o output
if [ $? -eq 0 ]; then
  ./output
else
  echo "コンパイルエラー"
fi
# コンパイルが成功した場合、実行ファイルを削除
rm -f output

