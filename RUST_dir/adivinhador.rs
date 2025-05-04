use rand::random_range;
use std::cmp::Ordering;
use std::io;

/*
 Código que eu criei vendo o livro de rust do proprio `rust-lang.org`.
 Só uma aplicação prática do que o livro ensina, como implementação de lógica
 simples de variáveis, entrada do usuário e loops
*/

fn main() {
    println!("Programa em RUST");

    let secret_number = random_range(1..=100);

    loop {
        println!("Insira um número aleatório de 1 a 100.");

        let mut guess = String::new();

        io::stdin()
            .read_line(&mut guess)
            .expect("Falha ao ler linha.");

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        println!("Você chutou: {guess}");

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Muito pequeno!"),
            Ordering::Greater => println!("Muito grande!"),
            Ordering::Equal => {
                println!("Você venceu!");
                break;
            }
        }
    }
}
