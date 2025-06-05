# Elixir

## コンテナ起動方法
```bash
docker compose up -d # コンテナ起動
docker compose exec elixir bash # コンテナ侵入
```

## Elixirバージョン確認方法
```bash
$ elixir --version

Erlang/OTP 27 [erts-15.2.7] [source] [64-bit] [smp:8:8] [ds:8:8:10] [async-threads:1] [jit]

Elixir 1.18.4 (compiled with Erlang/OTP 27)
```

## コンパイル方法
- 拡張子が`.ex`の場合
    - コンパイル後に中間言語を生成する
        - `.beam`ファイルが生成される
    - コンパイル
        - `elixirc ファイル名 `
    - 実行
        - `elixir -e モジュール関数名.関数名`
- 拡張子が`.exs`の場合
    - コンパイル後に中間言語を履かない
    - 実行
        - `elixirc ファイル名 `