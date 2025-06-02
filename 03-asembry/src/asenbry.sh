# 最初に
# `chmod +x run.sh`


# コンパイル方法
# ```
# bash asembry.sh sample.c

# ```

#!/bin/bash

# $1は入力ソースファイル（例：sample.c）
input_file="$1"
base_name="${input_file%.*}"  # 拡張子なしのファイル名（例：sample）

# アセンブリ出力
gcc -S "$input_file" -o "${base_name}.s"

if [ $? -eq 0 ]; then
  echo "アセンブリを出力しました: ${base_name}.s"
else
  echo "コンパイルエラー"
fi
