int A = 2; 
int B = 3; 
int C = 4; 
int D = 7; 
int E = 8; 
int F = 9; 
int G = 10; 
int H = 12; 
int I = 13; 
byte binary[] = {0,0,0,0,0,0,0,0,0};
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(G, INPUT);
  pinMode(H, INPUT);
  pinMode(I, INPUT);
}

void loop() {
  binary[0]=digitalRead(A);
  binary[1]=digitalRead(B);
  binary[2]=digitalRead(C);
  binary[3]=digitalRead(D);
  binary[4]=digitalRead(E);
  binary[5]=digitalRead(F);
  binary[6]=digitalRead(G);
  binary[7]=digitalRead(H);
  binary[8]=digitalRead(I);
 int finalval =0;
 finalval =(binary[0]*256)+(binary[1]*128)+(binary[2]*64)+(binary[3]*32)+(binary[4]*16)+(binary[5]*8)+(binary[6]*4)+(binary[7]*2)+(binary[8]*1);

 Serial.print(finalval);
 //Serial.print(binary[0]);
 //Serial.print(binary[1]);
 //Serial.print(binary[2]);
 //Serial.print(binary[3]);
 //Serial.print(binary[4]);
 //Serial.print(binary[5]);
 //Serial.print(binary[6]);
 //Serial.print(binary[7]);
 //Serial.print(binary[8]);
 delay(1000);
}
