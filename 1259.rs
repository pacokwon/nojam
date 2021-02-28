use std::io;

pub fn main() {
    loop {
        let mut buffer = String::new();
        io::stdin().read_line(&mut buffer).expect("Wrong input");
        let trimmed = buffer.trim_end();
        if trimmed == "0" {
            break;
        }

        let rev = trimmed.chars().rev().collect::<String>();
        println!("{}", if trimmed == rev { "yes" } else { "no" });
    }
}
