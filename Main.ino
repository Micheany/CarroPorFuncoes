
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
