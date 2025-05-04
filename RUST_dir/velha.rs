use std::io;

fn exibir_tabuleiro(tabuleiro: &[[char; 3]; 3]) {
    println!();
    for i in 0..3 {
        for j in 0..3 {
            print!(" {} ", tabuleiro[i][j]);
            if j < 2 {
                print!("|");
            }
        }
        println!();
        if i < 2 {
            println!("---|---|---");
        }
    }
    println!();
}

fn verificar_vitoria(tabuleiro: &[[char; 3]; 3]) -> Option<char> {
    let linhas = [
        [(0, 0), (0, 1), (0, 2)],
        [(1, 0), (1, 1), (1, 2)],
        [(2, 0), (2, 1), (2, 2)],
        [(0, 0), (1, 0), (2, 0)],
        [(0, 1), (1, 1), (2, 1)],
        [(0, 2), (1, 2), (2, 2)],
        [(0, 0), (1, 1), (2, 2)],
        [(0, 2), (1, 1), (2, 0)],
    ];

    for linha in linhas.iter() {
        let [a, b, c] = linha;
        if tabuleiro[a.0][a.1] == tabuleiro[b.0][b.1]
            && tabuleiro[a.0][a.1] == tabuleiro[c.0][c.1]
        {
            return Some(tabuleiro[a.0][a.1]);
        }
    }

    None
}

fn main() {
    let mut tabuleiro = [['1', '2', '3'], ['4', '5', '6'], ['7', '8', '9']];
    let mut jogador = 1;
    let mut jogadas = 0;

    loop {
        exibir_tabuleiro(&tabuleiro);

        let simbolo = if jogador % 2 != 0 { 'X' } else { 'O' };
        println!("Jogador {} [{}], escolha uma posição (1-9):", jogador, simbolo);

        let mut entrada = String::new();
        io::stdin().read_line(&mut entrada).unwrap();
        let escolha: u32 = match entrada.trim().parse() {
            Ok(num) if num >= 1 && num <= 9 => num,
            _ => {
                println!("Entrada inválida! Tente novamente.");
                continue;
            }
        };

        let linha = (escolha - 1) / 3;
        let coluna = (escolha - 1) % 3;

        if tabuleiro[linha as usize][coluna as usize] == 'X'
            || tabuleiro[linha as usize][coluna as usize] == 'O'
        {
            println!("Posição ocupada! Escolha outra.");
            continue;
        }

        tabuleiro[linha as usize][coluna as usize] = simbolo;
        jogadas += 1;

        if let Some(vencedor) = verificar_vitoria(&tabuleiro) {
            exibir_tabuleiro(&tabuleiro);
            println!("Jogador '{}' venceu!", vencedor);
            break;
        }

        if jogadas == 9 {
            exibir_tabuleiro(&tabuleiro);
            println!("Empate!");
            break;
        }

        jogador = if jogador == 1 { 2 } else { 1 };
    }
}
