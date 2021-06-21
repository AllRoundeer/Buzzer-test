// source http://www.instructables.com/id/Home-Security-Alarm-or-a-Motion-Detector-Using-Ard/
// 

int pinSpeaker = 10;  // must be a pwm pin (9, 10 or 11)

void setup() { 
  
  pinMode(pinSpeaker, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  playTone(300, 300);
  delay(150);
  
  playTone(0, 0);
    delay(300); 
}


// duration in mSecs, frequency in hertz
void playTone(long duration, int freq) {
    duration *= 1000;
    int period = (1.0 / freq) * 100000;
    long elapsed_time = 0;
    while (elapsed_time < duration) {
        digitalWrite(13, HIGH);
    digitalWrite(pinSpeaker,HIGH);
        delayMicroseconds(period / 2);
        digitalWrite(13, LOW);
    digitalWrite(pinSpeaker, LOW);
        delayMicroseconds(period / 2);
        elapsed_time += (period);
    }
}
