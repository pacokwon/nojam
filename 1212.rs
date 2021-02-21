use std::io;

fn oct_to_bin(val: char) -> String {
    // println!("{} came in", num);

    match val {
        '0' => "0",
        '1' => "1",
        '2' => "10",
        '3' => "11",
        '4' => "100",
        '5' => "101",
        '6' => "110",
        '7' => "111",
        _ => "",
    }
    .to_string()
}

pub fn main() {
    let mut buffer = String::new();
    io::stdin().read_line(&mut buffer).expect("Wrong input");

    let trimmed = buffer.trim_end();
    if trimmed == "" {
        print!("0");
    }

    for (index, c) in trimmed.chars().enumerate() {
        if index == 0 {
            print!("{}", oct_to_bin(c));
        } else {
            print!("{:0>3}", oct_to_bin(c));
        }
    }
}
