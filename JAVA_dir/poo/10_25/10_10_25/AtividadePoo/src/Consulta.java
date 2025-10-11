/**
 * Consulta
 *
 * A clínica realiza consultas veterinárias, que são
agendadas para um animal e realizadas por um veterinário. O sistema registra
informações como a data da consulta e um relato sobre o atendimento.
 */
public class Consulta {

  private String data;
  private String relato;
  private Animal animal;
  private MedVet veterinario;

  Consulta(){}

  Consulta(String data, String relato, Animal animal, MedVet veterinario){
    this.data = data;
    this.relato = relato;
    this.animal = animal;
    this.veterinario = veterinario;
  }

  // ----- setters e getters ------ //

  public void setData(String data) {
    this.data = data;
  }
  public String getData() {
    return data;
  }

  public void setRelato(String relato) {
    this.relato = relato;
  }
  public String getRelato() {
    return relato;
  }

  public void setAnimal(Animal animal) {
    this.animal = animal;
  }
  public Animal getAnimal() {
    return animal;
  }

  public void setVeterinario(MedVet veterinario) {
    this.veterinario = veterinario;
  }
  public MedVet getVeterinario() {
    return veterinario;
  }
  
}
