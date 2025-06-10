# Rust

## 環境構築・ビルド・実行方法

### 環境構築

```bash
$ cargo new myproj # プロジェクトの作成
$ cd myproj
```

- 以下のようなディレクトリが作成される

```bash
.
├── src
│   └── main.rs
└── Cargo.toml
```

### ビルド

```bash
$ cargo build
```

- これにより、実行に必要な情報が`target`に生成される

### 実行
```bash
$ cargo run
```

