#include WiFi.h
#include ESP32Servo.h
#include WebServer.h

const char* nome = "XXX"
const char* senha = "YYY"

void setup() {
Serial.begin(115200);
pinMode(2, OUTPUT);
Serial.println("Iniciando a conexão WiFi...")
WiFi.begin(nome, senha);
while (WiFi.status() != WL_CONNECTED && WiFi.status() != WL_CONNECT_FAILED){
  Serial.println("Conectando...");
  delay(500);
}
if (WiFi.status() == WL_CONNECT_FAILED){
  while (true){
    Serial.println("ERRO: Falha na conexão");
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(5000);
  }
}
else {
  Serial.println("Conectado com sucesso!");
  Serial.println("Nome da rede: ");
  Serial.print(nome);
  Serial.println("IP local: ");
  Serial.print(WiFi.localIP());
}
}

void loop() {
  

}
