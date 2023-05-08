#include <Servo.h> #서보모터 라이브러리를 불러온다. 
Servo motor1; #연결한 서보모터를 motor1이라고 지정한다. 


void setup() {
motor1.attach(12); #motor1의 신호를 12로 설정한다. 
pinMode(2, 2); #버튼의 신호를 2로 설정한다. 
}

void loop() {
int pin2 = digitalRead(2); #pin2라는 변수를 2번 핀에 신호가 들어오는 것으로 지정한다. 
if(pin2 == 1){ #만약 pin2가 1이라면 신호가 들어왔다면 
digitalWrite(12,HIGH); #12번 핀에 High 신호
digitalWrite(10,HIGH); #10번 핀에 High 신호
motor1.write(180); #모터가 180도 회전하게 만든다. 
delay(1000); #10초 기다린다. 
}



// put your main code here, to run repeatedly:

}
