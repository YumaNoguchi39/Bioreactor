int pHpin=A1; //pH vars
int acid_LED=39;
int base_LED=40;
int pHs = 7
float F=9.6485309e4;
float R=8.314510;
int T=290;
float V_supply=0.66;
float C=2.30258509299;
float pH;
float a;
float b;
float pHmin = 6.5;
float pHmax = 7.5;


void setup() {
  pinMode(pHpin, INPUT);
  Serial.begin(9600);
}

void getpH(){
  int sensorValue = analogRead(A1);
  float V_curr = sensorValue * (5.0 / 1023.0);
  
  //read pH value from UI if available here
  float pH = 7.0+((F*(V_supply-V_curr))/(R*T*C));
  Serial.print(pH)

      //  if (pH < pHmin) {
      //        digitalWrite(base_LED, HIGH);
      //        digitalWrite(acid_LED, LOW);
      //    }
      //    if (pH > pHmax) {
      //        digitalWrite(base_LED, LOW);
      //        digitalWrite(acid_LED, HIGH);
      //    }
      //    else {
      //        digitalWrite(acid_LED, LOW);
      //        digitalWrite(base_LED, LOW);
      //    }
}

void loop() {
  getpH()
  delay(500)
}
