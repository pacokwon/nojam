pub fn main() {
    let mut _buffer = String::new();
    std::io::stdin().read_line(&mut _buffer).expect("Wrong Input");
    let buffer = _buffer.trim_end();

    println!("{}", buffer.len());
}
