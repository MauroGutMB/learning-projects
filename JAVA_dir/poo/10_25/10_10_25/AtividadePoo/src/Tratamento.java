/**
 * Tratamento
 *
 * Os tratamentos realizados nos animais têm um
período definido, com datas de início e término. Eles podem incluir consultas e
outros procedimentos necessários para a saúde do animal.
 */
public class Tratamento {

  private String dataInicio;
  private String dataTermino;
  private Consulta consulta;
  private Animal animal;

  Tratamento(){}

  Tratamento(String dataInicio, String dataTermino, Consulta consulta, Animal animal){
    this.dataInicio = dataInicio;
    this.dataTermino = dataTermino;
    this.consulta = consulta;
    this.animal = animal;
  }

  // ----- setters e getters ------ //

  public void setDataInicio(String dataInicio) {
    this.dataInicio = dataInicio;
  }
  public String getDataInicio() {
    return dataInicio;
  }

  public void setDataTermino(String dataTermino) {
    this.dataTermino = dataTermino;
  }
  public String getDataTermino() {
    return dataTermino;
  }

  public void setConsulta(Consulta consulta) {
    this.consulta = consulta;
  }
  public Consulta getConsulta() {
    return consulta;
  }

  public void setAnimal(Animal animal) {
    this.animal = animal;
  }
  public Animal getAnimal() {
    return animal;
  }
  
}
