# Duplas de tênis

Quatro amigos combinaram de jogar tênis em duplas. Cada um dos amigos tem um nível de jogo, que é representado por um número inteiro: quanto maior o número, melhor o nível do jogador.

Os quatro amigos querem formar as duplas para iniciar o jogo. De forma a tornar o jogo mais interessante, eles querem que os níveis dos dois times formados sejam o mais próximo possível. O nível de um time é a soma dos níveis dos jogadores do time.

Embora eles sejam muito bons jogadores de tênis, os quatro amigos não são muito bons em algumas outras coisas, como lógica ou matemática. Você pode ajudá-los e encontrar a menor diferença possível entre os níveis dos times que podem ser formados?

### Entrada

A entrada contém quatro linhas, cada linha contendo um inteiro A, B, C e D, indicando o nível de jogo dos quatro amigos.

### Saída

Seu programa deve produzir uma única linha, contendo um único inteiro, a menor diferença entre os níveis dos dois times formados.

### Restrições

*   0 ≤ A ≤ B ≤ C ≤ D ≤ 104

### Exemplos

| **Entrada**

4
7
10
20


 | **Saída**

7
	

 |

| **Entrada**

0
0
1
1000


 | **Saída**

999
	

 |

| **Entrada**

1
2
3
4


 | **Saída**

0
	

 |




---

# Lista palíndroma

Uma palavra é chamada de palíndromo se a primeira letra da palavra é igual à última letra da palavra, a segunda letra é igual à penúltima letra, a terceira letra é igual à antepenúltima letra, e assim por diante. Por exemplo, as palavras _osso_ e _sopapos_ são palíndromos.

Nesta tarefa estamos interessados não em palavras, mas em listas de números inteiros. Nesse caso, vamos definir que uma lista é palíndroma se L\[i\] = L\[N-i+1\], onde L\[i\] representa o i-ésimo elemento da lista (note que nesta notação o índices variam de 1 a N).

Você pode modificar uma lista usando a operação de _contração_, que é definida da seguinte forma: escolha dois elementos adjacentes da lista e substitua os dois elementos por um único elemento de valor igual à soma dos elementos substituídos. Note que ao efetuar uma operação de contração o número de elementos da lista decresce de um elemento.

Dada uma lista de números inteiros, você deve escrever um programa para determinar o menor número de operações de contração que devem ser realizadas de modo que a lista resultante seja palíndroma.

### Entrada

A primeira linha da entrada contém um inteiro N, o número de elementos da lista. A segunda linha contém N inteiros Li, os elementos da lista.

### Saída

Seu programa deve produzir uma única linha, contendo um único inteiro, o menor número de operações de contração necessárias para tornar a lista palíndroma.

### Restrições

*   1 ≤ N ≤ 106
*   1 ≤ Li ≤ 109, para 1 ≤ i ≤ N

### Informações sobre a pontuação

*   Para um conjunto de casos de testes valendo 30 pontos, N ≤ 10.
*   Para um conjunto de casos de testes valendo outros 30 pontos N ≤ 103.
*   Para um conjunto de casos de testes valendo outros 40 pontos, nenhuma restrição adicional.

### Exemplos

| **Entrada**

5
10 60 20 40 10


 | **Saída**

1
	

 |

| **Entrada**

5
999 1 999 1 999


 | **Saída**

0
	

 |

| **Entrada**

4
10 40 30 20


 | **Saída**

2
	

 |




---

# Caixeiro Viajante

Paulo é um _caixeiro viajante_, que visita clientes nas cidades do reino da Nlogônia para demonstrar novos produtos da empresa para a qual trabalha.

Paulo está organizando uma viagem para visitar cada uma das N cidades do reino. A Nlogônia é imensa, as cidades são distantes, de forma que Paulo vai sempre usar transporte aéreo para ir de uma cidade a outra. Paulo conhece o tempo de vôo entre cada par de cidades, mas não gosta de viajar de avião e quer minimizar o tempo de vôo total para a viagem. No entanto, Paulo tem uma demanda peculiar quanto à ordem das cidades que vai visitar.

Na Nlogônia os "nomes" das cidades são números inteiros de 1 a N. Paulo deseja que a ordem das cidades que vai visitar obedeçam à seguinte regra: quando Paulo visitar a cidade K, ou todas as cidades de nomes menores do que K já foram visitadas ou todas serão visitadas após K.

Por exemplo, se N é igual a três, Paulo pode visitar as cidades nas ordens 1,2,3 ou na ordem 3,2,1 ou na ordem 2,1,3, mas não pode visitá-las na ordem 1,3,2, pois quando visita a cidade 3, como 1 já foi visitada, 2 também deveria ter sido visitada.

Escreva um programa para determinar o tempo mínimo total de vôo para a viagem de Paulo, iniciando em qualquer cidade, terminando em qualquer cidade, mas visitando cada cidade uma única vez.

### Entrada

A primeira linha da entrada contém um inteiro N, o número de cidades. Cada uma das N × (N-1)/2 linhas contém três inteiros A, B e T, indicando que o tempo de vôo da cidade A para a cidade B é T (o tempo de vôo da cidade B para a cidade A também é T).

### Saída

Seu programa deve produzir uma única linha, contendo um único número inteiro, o tempo mínimo total de vôo para a viagem de Paulo.

### Restrições

*   2 ≤ N ≤ 1500
*   1 ≤ A < B ≤ N
*   1 ≤ T ≤ 1000

### Informações sobre a pontuação

*   Para um conjunto de casos de testes valendo 25 pontos, 1 ≤ N ≤ 10.
*   Para um conjunto adicional de casos de testes valendo 50 pontos, 1 ≤ N ≤ 20.
*   Para um conjunto adicional de casos de testes valendo 25 pontos, nenhuma restrição adicional.

### Exemplos

| **Entrada**

3
1 2 5
1 3 2
2 3 4


 | **Saída**

7
	

 |

| **Entrada**

4
1 2 15
1 3 7
1 4 8
2 3 16
2 4 9
3 4 12


 | **Saída**

31
	

 |




---

# Matriz super-legal

Denotando por Ai,j o elemento na i-ésima linha e j-ésima coluna da matriz A, dizemos que uma matriz é "legal" se a condição

A1,1 + Alin,col ≤ A1,col + Alin,1

é verdadeira para todo lin > 1 e col > 1.

Adicionalmente, dizemos que a matriz é "super-legal" se cada uma de suas submatrizes com pelo menos duas linhas e duas colunas é legal. Lembre que uma submatriz S de uma matriz MLxC é uma matriz que inclui todos os elementos Mi,j tais que l1 ≤ i ≤ l2 e c1 ≤ j ≤ c2, para 1 ≤ l1 ≤ l2 ≤ L e 1 ≤ c1 ≤ c2 ≤ C.

A sua tarefa é, dada uma matriz A, determinar a maior quantidade de elementos de uma submatriz super-legal da matriz A.

### Entrada

A primeira linha contém dois inteiros L e C indicando respectivamente o número de linhas e o número de colunas da matriz. Cada uma das L linhas seguintes contém C inteiros Xi representando os elementos da matriz.

### Saída

Seu programa deve produzir uma única linha, contendo uma única linha, com apenas um número inteiro, a maior quantidade de elementos de uma submatriz super-legal da matriz da entrada, ou zero no caso de não existir uma submatriz super-legal.

### Restrições

*   2 ≤ L,C ≤ 1000
*   \-106 ≤ Xi ≤ 106

### Informações sobre a pontuação

*   Para um conjunto de casos de testes valendo 10 pontos, L,C ≤ 3.
*   Para um conjunto de casos de testes valendo outros 50 pontos, L,C ≤ 300.

### Exemplos

| **Entrada**

3 3
1 4 10
5 2 6
11 1 3


 | **Saída**

9
	

 |

| **Entrada**

3 3
1 3 1
2 1 2
1 1 1


 | **Saída**

4
	

 |

| **Entrada**

5 6
1 1 4 0 3 3
4 4 9 7 11 13
-3 -1 4 2 8 11
1 5 9 5 9 10
4 8 10 5 8 8


 | **Saída**

15
	

 |




---

# Fuga

Os irmãos Violet e Klaus estão fugindo pelas suas vidas do Conde Olaf, que corre atrás deles dentro de um prédio abandonado. Violet e Klaus acabam de entrar em uma sala retangular de largura N e comprimento M, dividida em N \\cdot M células (i, j) de área 1 (1 ≤ i ≤ N e 1 ≤ j ≤ M). Em algumas células dessa sala, existem armários. Toda célula (i, j) onde i e j são pares contém um armário. A sala tem uma entrada na célula (Xe, Ye) e uma saída na célula (Xs, Ys), que ficam em posições diferentes \\textbfnas bordas da sala. A entrada e a saída nunca são adjacentes a um armário.

A figura a seguir mostra a uma possível configuração da sala, onde N = M = 7, a entrada fica na posição (3,7) (marcada com uma estrela) e a saída fica na posição (5,1) (marcada com um círculo). Os armários estão indicados em quadrados cinzas.

Para atrasar Conde Olaf, que os está perseguindo e entrará na sala em alguns momentos, os irmãos decidiram derrubar armários da sala, de forma a aumentar o tamanho do percurso necessário para ir da entrada até a saída. As células ocupadas por armários caídos ou em pé não podem ser percorridas. Um armário pode ser derrubado em qualquer uma das direções paralelas aos lados da sala e ocupa duas células após cair. Ou seja, um armário na posição (i, j) da sala, ao cair irá ocupar uma das seguintes opções:

*   As células (i, j) e (i, j + 1);
*   As células (i, j) e (i, j - 1);
*   As células (i, j) e (i + 1, j); ou
*   As células (i, j) e (i - 1, j).

Dadas as dimensões da sala e as posições de entrada e de saída, você deve encontrar uma forma de derrubar os armários tal que a distância entre a entrada e a saída da sala seja a maior possível dentre todas as formas de derrubar os armários.

Para o exemplo acima, a figura abaixo é uma solução possível. Os retângulos cinzas representam os armários derrubados e a linha representa o caminho entre a entrada e a saída (que passa por 29 células). Nesse caso, não é possível derrubar os armários de forma que a distância entre a entrada e a saída seja maior que 29.

### Entrada

A primeira linha contém dois inteiros N e M, a largura e o comprimento da sala, respectivamente. A segunda linha contém dois inteiros Xe e Ye, identificando a célula de entrada da sala (Xe, Ye). A terceira linha contém dois inteiros Xs e Ys, identificando a célula de saída da sala (Xs, Ys).

### Saída

Seu programa deve produzir uma única linha, contendo um inteiro, o tamanho do menor caminho (em número de células) da entrada até a saída da sala após derrubar os armários de forma ótima.

### Restrições

*   3 ≤ N, M ≤ 11
*   3 ≤ Xe, Xs ≤ N
*   3 ≤ Ye, Ys ≤ M
*   N, M, Xe, Xs, Ye, Ys são ímpares.

### Informações sobre a pontuação

*   Para um conjunto de casos de testes valendo 40 pontos, 1 ≤ N, M ≤ 7.

### Exemplos

| **Entrada**

7 7
3 7
5 1


 | **Saída**

29
	

 |

| **Entrada**

11 11
11 1
1 11


 | **Saída**

69
	

 |





## Explicação: Duplas de tênis

Esta questão envolve a formação de duplas a partir de quatro jogadores com níveis de jogo distintos, buscando minimizar a diferença entre as somas dos níveis das duas duplas. É um problema de otimização combinatória.

**Conceito Principal:** O problema pode ser resolvido testando todas as combinações possíveis de duplas. Dado que há apenas quatro jogadores (A, B, C, D), o número de combinações é pequeno. As possíveis formações de duplas são:

1.  (A, B) e (C, D)
2.  (A, C) e (B, D)
3.  (A, D) e (B, C)

Para cada combinação, calcula-se a soma dos níveis de cada dupla e, em seguida, a diferença absoluta entre essas somas. A menor diferença encontrada entre todas as combinações é a resposta.

**Algoritmo:**

1.  Leia os quatro níveis de jogo A, B, C, D.
2.  Calcule as três possíveis diferenças de níveis entre os times:
    *   `abs((A + B) - (C + D))`
    *   `abs((A + C) - (B + D))`
    *   `abs((A + D) - (B + C))`
3.  A saída é o menor valor entre essas três diferenças.

**Complexidade:** A complexidade é constante, pois o número de jogadores é fixo (4), e o algoritmo realiza um número fixo de operações, independentemente dos valores dos níveis dos jogadores.






## Explicação: Lista palíndroma

Esta questão aborda a transformação de uma lista de números inteiros em uma lista palíndroma, utilizando a operação de contração. O objetivo é encontrar o menor número de operações de contração necessárias. Este é um problema clássico que pode ser resolvido com a técnica de dois ponteiros.

**Conceito Principal:** A ideia é usar dois ponteiros, um no início da lista (esquerda) e outro no final (direita). Comparamos os elementos apontados por esses ponteiros. Se forem iguais, movemos ambos os ponteiros para o centro. Se forem diferentes, precisamos realizar contrações para igualá-los. A contração sempre envolve a soma de elementos adjacentes.

**Algoritmo:**

1.  Inicialize dois ponteiros, `esquerda` no início da lista e `direita` no final da lista.
2.  Inicialize uma variável `operacoes` para contar o número de contrações, começando em 0.
3.  Enquanto `esquerda` for menor que `direita`:
    *   Se `lista[esquerda]` for igual a `lista[direita]`, avance `esquerda` e recue `direita`.
    *   Se `lista[esquerda]` for menor que `lista[direita]`, contraia o elemento da esquerda com o próximo elemento à direita, ou seja, `lista[esquerda+1] = lista[esquerda] + lista[esquerda+1]`. Avance `esquerda` e incremente `operacoes`.
    *   Se `lista[esquerda]` for maior que `lista[direita]`, contraia o elemento da direita com o próximo elemento à esquerda, ou seja, `lista[direita-1] = lista[direita] + lista[direita-1]`. Recue `direita` e incremente `operacoes`.
4.  A saída é o valor final de `operacoes`.

**Complexidade:** A complexidade de tempo é O(N), onde N é o número de elementos na lista, pois cada elemento é visitado no máximo um número constante de vezes. A complexidade de espaço é O(1) se a modificação for feita in-place, ou O(N) se uma nova lista for criada.






## Explicação: Caixeiro Viajante

Esta questão é uma variação do clássico problema do Caixeiro Viajante (Traveling Salesperson Problem - TSP), mas com uma restrição peculiar na ordem de visita das cidades. O objetivo é encontrar o tempo mínimo total de voo para visitar todas as cidades uma única vez, respeitando a regra de que, ao visitar a cidade K, todas as cidades com nomes menores que K já foram visitadas ou serão visitadas após K.

**Conceito Principal:** A restrição na ordem de visita sugere uma abordagem de programação dinâmica ou busca com poda. A regra "quando Paulo visitar a cidade K, ou todas as cidades de nomes menores do que K já foram visitadas ou todas serão visitadas após K" implica que a sequência de cidades visitadas deve ser monotonicamente crescente ou decrescente, ou que a cidade K é um ponto de inflexão onde a ordem muda. Isso simplifica o problema de TSP, que é NP-completo, para um problema que pode ser resolvido de forma mais eficiente.

**Algoritmo (Simplificado para N pequeno, como nos exemplos):**

Para N pequeno, podemos considerar todas as permutações válidas e calcular o custo. No entanto, para N maior, uma abordagem de programação dinâmica seria necessária. A restrição significa que, se você está na cidade `k`, as cidades `1` a `k-1` devem estar todas de um lado (já visitadas ou a serem visitadas) e as cidades `k+1` a `N` do outro. Isso limita as transições possíveis.

Uma abordagem possível é usar programação dinâmica com estado `dp[mask][last_city][direction]`, onde `mask` representa o conjunto de cidades visitadas, `last_city` é a última cidade visitada, e `direction` indica se estamos visitando cidades em ordem crescente ou decrescente de seus IDs.

**Complexidade:** A complexidade exata depende da implementação da programação dinâmica, mas será significativamente menor que a do TSP geral devido à restrição. Para N = 1500, uma solução de programação dinâmica com complexidade polinomial em N seria necessária, provavelmente envolvendo técnicas de otimização de grafos.






## Explicação: Fuga

Esta questão apresenta um problema de busca em grafo em um ambiente de grade (grid), com a particularidade de que armários podem ser derrubados para alterar o percurso. O objetivo é maximizar a distância entre a entrada e a saída, derrubando armários de forma ótima.

**Conceito Principal:** O problema pode ser modelado como encontrar o caminho mais longo em um grafo, onde os nós são as células da sala e as arestas são os movimentos possíveis entre as células. A complexidade reside na decisão de quais armários derrubar, pois isso altera a estrutura do grafo e, consequentemente, os caminhos possíveis. Como o número de armários e as dimensões da sala são pequenos (N, M ≤ 11), é possível explorar as diferentes configurações de armários derrubados.

**Algoritmo:**

1.  **Representação do Labirinto:** A sala pode ser representada como uma matriz 2D. As células com armários (i, j) onde i e j são pares são inicialmente bloqueadas.
2.  **Derrubar Armários:** Para cada armário, existem 4 maneiras de derrubá-lo, ocupando duas células. Além disso, um armário pode não ser derrubado. Isso gera um grande número de combinações de armários derrubados. No entanto, a restrição de N, M ≤ 11 limita o número de armários, tornando a exploração viável.
3.  **Caminho Mais Curto em Grafo:** Para cada configuração de armários derrubados, o problema se reduz a encontrar o caminho mais curto entre a entrada e a saída em um grafo não ponderado. Isso pode ser feito usando algoritmos de busca em largura (BFS).
4.  **Maximizar a Distância:** O objetivo é maximizar o caminho mais curto. Isso significa que, para cada configuração de armários derrubados, calculamos o caminho mais curto usando BFS e, em seguida, escolhemos a configuração que resulta no maior caminho mais curto.

**Complexidade:** A complexidade é dominada pela enumeração das configurações de armários e pela execução de BFS para cada configuração. Se houver `K` armários, e cada um pode ser derrubado de 4 maneiras ou não derrubado, teríamos `5^K` configurações. Para N, M ≤ 11, o número de armários é limitado, mas ainda pode ser grande. A BFS em um grid N x M tem complexidade O(N*M). Portanto, a complexidade total seria `O(5^K * N * M)`. Para N, M = 11, K pode ser até (11/2)*(11/2) = 25 armários, o que tornaria 5^25 inviável. A restrição de N, M ímpares e armários em (i,j) onde i e j são pares significa que o número de armários é menor. Para N=7, M=7, há 3*3=9 armários. 5^9 é um número grande, mas talvez com podas ou observações adicionais seja possível. A questão sugere que a solução é viável para N, M <= 7, o que implica 3*3=9 armários.



