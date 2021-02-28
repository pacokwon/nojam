pub fn main() {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Wrong input");

    let x: String = buffer.split('-').map(|w| w.chars().nth(0).unwrap()).collect();
    println!("{}", x);
}
