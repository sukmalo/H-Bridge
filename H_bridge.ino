#define pin9 9
#define pin10 10

void setup() {
  Serial.begin(9600);
  
  pinMode(pin10, OUTPUT);    // "A"
  pinMode(pin9, OUTPUT);     // "B"

  Serial.println("Enter -l-/-r- for run left/right");
}

char message = 'l';
int velocity = 50;

void direction(char message, int velocity){
  if (message == 'l'){
    // digitalWrite(pin10, HIGH);   
    // digitalWrite(pin9, LOW);
    
    analogWrite(pin10, velocity);
    analogWrite(pin9, 0);
        
  }
  else if (message == 'r'){
    // digitalWrite(pin10, LOW);    
    // digitalWrite(pin9, HIGH);
    
    	analogWrite(pin10, 0);
        analogWrite(pin9, velocity);
    
  }
  
}

void loop() {
  
 // if (Serial.available() > 0) { 
  int velocity = 255;
  message = Serial.read();
  direction(message, velocity);
  
  // }
  
     
         
}
// #define pin9 9
// #define pin10 10

// void setup() {
//   Serial.begin(9600);
  
//   pinMode(pin10, OUTPUT);    // "A"
//   pinMode(pin9, OUTPUT);     // "B"

//   Serial.println("Enter -l-/-r- for run left/right");
// }

// char message = 'l';

// void direction(char message){
//   if (message == 'l'){
//     digitalWrite(pin10, HIGH);   
//     digitalWrite(pin9, LOW);
//   }
//   else if (message == 'r'){
//     digitalWrite(pin10, LOW);    
//     digitalWrite(pin9, HIGH);   
//   }
// }

// void loop() {
  
//   // if (Serial.available() > 0) {   
//   message = Serial.read();
//   direction(message);
//   // }
  
     
         
// }
