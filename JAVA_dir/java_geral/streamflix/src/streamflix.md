# 🎬 Desafio Prático: Sistema StreamFlix

**Objetivo:** Implementar um sistema de gestão de assinaturas utilizando Herança, Classes Abstratas e Polimorfismo.

---

### 1. Classe Abstrata: `Assinatura`
- [ ] Definir a classe como `abstract`.
- [ ] **Atributos:**
    - `tipo` (String)
    - `precoMensal` (double)
- [ ] **Construtor:** Inicializar os atributos.
- [ ] **Método Abstrato:** `public abstract double calcularPreco();`
- [ ] **Método Concreto:** `exibirDetalhes()` que imprime o tipo e o preço base.

### 2. Classe Filha: `PlanoBasico`
- [ ] Herdar de `Assinatura`.
- [ ] **Construtor:** Usar `super` para repassar os dados.
- [ ] **Sobrescrita (`@Override`) de `calcularPreco()`:**
    - Retornar o preço mensal sem alterações.
- [ ] **Sobrescrita de `exibirDetalhes()`:**
    - Chamar o método da mãe (`super.exibirDetalhes()`).
    - Adicionar print: "Resolução: HD (720p)".

### 3. Classe Filha: `PlanoPremium`
- [ ] Herdar de `Assinatura`.
- [ ] **Novo Atributo:** `bonusDesconto` (double).
- [ ] **Construtor:** Receber tipo, preço e o desconto (repassar necessários para o `super`).
- [ ] **Sobrescrita de `calcularPreco()`:**
    - Fórmula: `(precoMensal * 1.10) - bonusDesconto`.
- [ ] **Sobrescrita de `exibirDetalhes()`:**
    - Chamar `super`.
    - Adicionar print: "Resolução: 4K + Download Offline".
    - Exibir o valor do desconto.

### 4. Execução: `Main` (O Teste de Polimorfismo)
- [ ] Criar uma lista do tipo genérico: `ArrayList<Assinatura>`.
- [ ] Adicionar objetos variados à lista:
    - Pelo menos 2 instâncias de `PlanoBasico`.
    - Pelo menos 2 instâncias de `PlanoPremium`.
- [ ] **Loop Polimórfico:**
    - Percorrer a lista com um `for` ou `foreach`.
    - Para cada item: chamar `exibirDetalhes()` e imprimir o resultado de `calcularPreco()`.
