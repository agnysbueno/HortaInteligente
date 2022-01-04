/*Declarando as variáveis */
int ledVermelho = 8;  //led conectado na porta digital 8
int sensor = A0;     //sensor de umidade do solo conectado na porta analógica 0
int nivel_umidade;   //variável que vai guardar o nível de umidade

void setup() {
  pinMode(ledVermelho, OUTPUT); //definindo o led como dispositivo de saída
  pinMode(sensor, INPUT);       //definindo o sensor de umidade como dispositivo de entrada 
}

void loop() {
  nivel_umidade = analogRead(sensor); //lê o valor que o sensor de umidade captou e guarda na variável nivel_umidade

  /* Criando uma condição para verificar se o nível de umidade é maior que 600, ou seja, se o solo está seco */
  /* O sensor de umidade capta valores de 0 a 1023, sendo 1023 um estado completamente ausente de umidade */
  if(nivel_umidade > 600) {
    digitalWrite(ledVermelho, HIGH); //acende o led se o solo estiver seco
  } else {
    digitalWrite(ledVermelho, LOW); //apaga o led se o solo estiver úmido
  }
  
  delay(1000); //espera um segundo
}
