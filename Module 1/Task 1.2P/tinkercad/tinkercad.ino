const int pir = 2;
volatile bool led_state = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(pir, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

  attachInterrupt(digitalPinToInterrupt(pir), toggle, CHANGE);
}

void loop() {
  if (led_state== HIGH){
    Serial.println("Motion Detected");
    }
    else{
      Serial.println("Motion Not Detected");
    }
  }
  delay(1000);
}

void toggle(){
  
  led_state = !led_state;
  digitalWrite(13, led_state);
  
}