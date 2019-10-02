
    void parar(int temp){
        digitalWrite(input1,LOW); //DESABILITANDO OS PINOS DO MOTOR PARA ELE PARAR
        digitalWrite(input2,LOW);
        digitalWrite(input3,LOW);
        digitalWrite(input4,LOW);
      delay(temp);
    }
    void frente(int temp){
        analogWrite(input1,180);  
        analogWrite(input2,0); 
        digitalWrite(input3,HIGH); 
        digitalWrite(input4,LOW); 
      delay(temp);
    }
    void re(int temp){
        digitalWrite(input1,LOW);  
        digitalWrite(input2,HIGH); 
        digitalWrite(input3,LOW); 
        digitalWrite(input4,HIGH);
      delay(temp);   
      }
    void viraDireita(int temp){
        digitalWrite(input1,HIGH);  
        digitalWrite(input2,LOW); 
        digitalWrite(input3,LOW); 
        digitalWrite(input4,LOW);
      delay(temp); 
      }
    void viraEsquerda(int temp){
        digitalWrite(input1,LOW);  
        digitalWrite(input2,LOW); 
        digitalWrite(input3,HIGH); 
        digitalWrite(input4,LOW); 
      delay(temp);
      }

void setup() {
#define input1 10 //motor esquerdo
#define input2 9 //motor esquerdo
#define input3 10  //motor direito
#define input4 11 //motor direito
 int temp;        //tempo que sera mandado em milisegundos
#define enable1 6  //motor esquerdo
#define enable2 7  //motor direito


void setup() {
  Serial.begin(9600);
  pinMode(input1,OUTPUT);  //declarando todos os pinos como saida de corrente
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
  digitalWrite(enable1,HIGH);
  digitalWrite(enable2,HIGH);
  
}


void loop() {
    frente(1000);
    parar(2000);
    
  }