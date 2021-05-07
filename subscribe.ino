int led1 = D2;
int led2 = D5;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT); 
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
}


void loop() {
    
}

void myHandler(const char *event, const char *data)
{

  if (strcmp(data,"wave")==0) {
    // if your buddy's beam is intact, then turn your board LED off
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
  }
  else if (strcmp(data,"pat")==0) {
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
      
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
      delay(500);
    
  }
}

