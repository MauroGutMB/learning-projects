/**
 * MedVet
 *
 * Os profissionais que atendem na clínica são
cadastrados com dados como nome, endereço, CEP, telefone e e-mail. Cada
veterinário é responsável por realizar consultas e, eventualmente, orientar
tratamentos.
 */
public class MedVet {

  private String nome;
  private String endereco;
  private String cep;
  private String telefone;
  private String email;

  MedVet(){}

  MedVet(String nome, String endereco, String cep, String telefone, String email){
    this.nome = nome;
    this.endereco = endereco;
    this.cep = cep;
    this.telefone = telefone;
    this.email = email;
  }

  // ----- setters e getters ------ //

  public void setNome(String nome) {
    this.nome = nome;
  }
  public String getNome() {
    return nome;
  }

  public void setEndereco(String endereco) {
    this.endereco = endereco;
  }
  public String getEndereco() {
    return endereco;
  }

  public void setCep(String cep) {
    this.cep = cep;
  }
  public String getCep() {
    return cep;
  }

  public void setTelefone(String telefone) {
    this.telefone = telefone;
  }
  public String getTelefone() {
    return telefone;
  }

  public void setEmail(String email) {
    this.email = email;
  }
  public String getEmail() {
    return email;
  }
  
}
