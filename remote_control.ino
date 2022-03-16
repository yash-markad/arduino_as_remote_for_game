int L_button=3;
int R_button=2;
int Led = 4;

void setup()
{
  pinMode(L_button,INPUT);
  pinMode(R_button,INPUT);
  pinMode(Led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
  int L_state = digitalRead(L_button);
  int R_state = digitalRead(R_button);
  if(L_state==0){
    Serial.println("LEFT");
    delay(10);
  }
  if(R_state==0){
    Serial.println("RIGHT");
    delay(10);
  }
  }
  delay(100);
}
