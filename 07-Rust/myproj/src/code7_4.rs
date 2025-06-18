fn main() {
    let number = 50; // i32型
    let text = "Hello World!"; // &str型
    let numbers = vec![1, 2, 3]; // Vec<i32>型
    let first = numbers.first(); // Option<&i32>型
    let add_one = |x| x+1; // 下のコードの右辺から |x:i23|->|i32|
    let result = add_one(5); 
}