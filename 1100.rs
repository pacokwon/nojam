pub fn main() {
    let mut total = 0;

    for row in 0..8 {
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf);
        // i + j -> even
        let trimmed = buf.trim_end();
        let cnt = trimmed
            .chars()
            .enumerate()
            .filter(|(index, ch)| (row + index) % 2 == 0 && *ch == 'F')
            .count();
        total += cnt;
    }

    println!("{}", total);
}
