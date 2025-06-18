fn main() {
    let my_vec = vec![1, 2, 3, 4, 5];
    consume_vector(my_vec); //my_vecの所有権が移動

    // println!("{:?}", my_vec) // コンパイルエラー
}

fn consume_vector(v: Vec<i32>) {
    println!("Consumeing vector: {:?}", v);
    // vのスコープが終了すると自動的にドロップ
}