#include <EEPROM.h>

int default_pwd = 0;
int x = 9;
int y = 10;
int a = 1;
int b = 2;

//EEPROM에 저장된 비밀번호 전부 0으로 초기화하는 함수
void setup() {
  for(int i = 0; i < 4; i++){                                      
    byte hibyte = highByte(default_pwd);
    byte lobyte = lowByte(default_pwd);
    EEPROM.write(x, hibyte);
    EEPROM.write(y, lobyte);
    x += 2;
    y += 2;
  }

  for(int i = 0; i < 4; i++){                                      
    byte hibyte = highByte(default_pwd);
    byte lobyte = lowByte(default_pwd);
    EEPROM.write(a, hibyte);
    EEPROM.write(b, lobyte);
    a += 2;
    b += 2;
  }
}

void loop() {
}
