pub fn main() {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer);
    buffer.pop();
    let mut split = buffer.split(' ');

    let num =  split.next().unwrap();
    let base = split.next().unwrap().parse::<u32>().unwrap();

    let dec_sum = num.chars().fold(0, |acc, cur| acc * base + to_digit(cur));
    println!("{}", dec_sum);
}

fn to_digit(letter: char) -> u32 {
    if letter.is_numeric() {
        (letter as u32) - ('0' as u32)
    } else {
        (letter as u32) - ('A' as u32) + 10
    }
}
