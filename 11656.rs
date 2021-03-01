pub fn main() {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer);
    buffer.pop();

    let mut words: Vec<&str> = buffer.chars().enumerate().map(|(index, ch)| &buffer[index..]).collect();
    words.sort();
    words.iter().for_each(|el| println!("{}", el));
}
