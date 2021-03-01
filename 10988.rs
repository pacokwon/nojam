pub fn main() {
    let mut buffer = String::new();

    std::io::stdin().read_line(&mut buffer);
    buffer.pop();

    let is_palindrome = buffer.chars()
        .zip(buffer.chars().rev())
        .all(|(a, b)| a == b);

    println!("{}", if is_palindrome { 1 } else { 0 });
}
