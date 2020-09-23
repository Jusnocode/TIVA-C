//INPUT 
int horn_input_1 = 11;
int self_input_1 = 12;
int headlight_input_1 = 13;
int left_indicator_input_1 = 14;
int right_indicator_input_1 = 15;
int stand_input_1 = 33;

int horn_input;
int self_input;
int headlight_input;
int left_indicator_input;
int right_indicator_input;
int stand_input;

//OUTPUT
int stand_output = 18;
int right_output = 19;
int horn_output = 31;
int left_indicator_output = 38;
int right_indicator_output = 19;
int headlight_output = 39;
 
void setup() {
//  Serial
Serial.begin(9600);
Serial.print("Initializing");
//  input pinmode
  pinMode(horn_input_1,INPUT);
  pinMode(self_input_1,INPUT);
  pinMode(headlight_input_1,INPUT);
  pinMode(left_indicator_input_1,INPUT);
  pinMode(right_indicator_input_1,INPUT);
  pinMode(stand_input_1,INPUT);
   
  
//  output pinmode
  pinMode(stand_output,OUTPUT);
  pinMode(right_output,OUTPUT);
  pinMode(horn_output,OUTPUT);
  pinMode(left_indicator_output,OUTPUT);
  pinMode(right_indicator_output,OUTPUT);
  pinMode(headlight_output,OUTPUT);
  
 horn_input = 0;
 self_input = 0;
 headlight_input = 0;
 left_indicator_input = 0;
 right_indicator_input = 0;
 stand_input = 0;
  Serial.print("Initializing");

}

void loop() {
  check_button_status();
//  ################################
  if(horn_input == HIGH){
    Serial.println("Horn_HIGH");
    digitalWrite(horn_output,HIGH);
    }

    else if(horn_input == LOW){
    Serial.println("Horn_LOW");
    digitalWrite(horn_output,LOW);
    }
//    delay(50);
    
//    ################################
    if(self_input == HIGH){
    Serial.println("self_HIGH");
//    digitalWrite(self_output,HIGH);
    }

    else if(self_input == LOW){
    Serial.println("self_LOW");
//    digitalWrite(self_output,LOW);
    }
//    delay(500);
    
//    ###############################
    if(headlight_input == HIGH){
    Serial.println("headlight_input_HIGH");
    digitalWrite(headlight_output,HIGH);
    }

    else if(headlight_input == LOW){
    Serial.println("headlight_input_LOW");
    digitalWrite(headlight_output,LOW);
    }
//    delay(50);

//    ###############################
    if(left_indicator_input == HIGH){
    Serial.println("left_indicator_input_HIGH");
    digitalWrite(left_indicator_output,HIGH);
    }

    else if(left_indicator_input == LOW){
    Serial.println("left_indicator_input_LOW");
    digitalWrite(left_indicator_output,LOW);
    }
//    delay(50);
    
//    ###############################
    if(right_indicator_input == HIGH){
    Serial.println("right_indicator_input_HIGH");
    digitalWrite(right_indicator_output,HIGH);
    }

    else if(right_indicator_input == LOW){
    Serial.println("right_indicator_input_LOW");
    digitalWrite(right_indicator_output,LOW);
    }
//    delay(50);

//    ###############################    
    if(stand_input == HIGH){
    Serial.println("Stand_Input_HIGH");
    digitalWrite(stand_output,HIGH);
    }

    else if(stand_input == LOW){
    Serial.println("Stand_Input_Low");
    digitalWrite(stand_output,LOW);
    }
//    delay(50);
}

//    ###############################
void check_button_status(){
  horn_input = digitalRead(horn_input_1);  
  self_input = digitalRead(self_input_1);
  headlight_input = digitalRead(headlight_input_1);
  left_indicator_input = digitalRead(left_indicator_input_1);
  right_indicator_input = digitalRead(right_indicator_input_1);
  stand_input = digitalRead(stand_input_1);
//  delay(50);
  }
