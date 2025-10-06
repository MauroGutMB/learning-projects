Modelagem de um Sistema de Biblioteca em Java

Sua tarefa é projetar e implementar em Java a estrutura de classes para um sistema de
gerenciamento de biblioteca, utilizando os conceitos de Orientação a Objetos. O objetivo é que você
interprete os requisitos a seguir para criar um modelo coeso.
O sistema deve gerenciar Livros, cada um com código, título, autor, ano de publicação, valor e
estoque. Todo livro deve ser classificado em uma Categoria, que possui apenas um código e um
nome (ex: "Ficção").
Será preciso cadastrar os Clientes (alunos, professores ou externos) com seus dados principais:
código, nome, email, telefone e endereço.
A funcionalidade central é o Empréstimo, que deve registrar um código, o cliente que está pegando
os livros, uma lista com os livros emprestados, a data do empréstimo e a data prevista para a
devolução.
Por fim, o sistema precisa controlar as Multas por atraso. Uma multa deve estar associada a um
cliente e conter um código, o valor, a data em que foi gerada e um status (pendente ou pago).
Com base nesta descrição, implemente as classes Java correspondentes, definindo seus atributos e
os relacionamentos entre elas.

Adiciona:
- Enums em Java (ex.: status pendente e pago)
- LocalDate (data), LocalDateTime (data e hora)
