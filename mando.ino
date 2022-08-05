#include <MePort.h>
#include <MeLEDMatrix.h>
#include <Wire.h>
#include <SoftwareSerial.h>
#include <MeMCore.h>
int x;
MeIR ir;
MeBuzzer buzzer;
MeLEDMatrix Matrix_1(PORT_1);
char string_data[]="MAKEBLOCK 012345678";
uint8_t PlusUno[16]=
{
                   0x00, 
                   0x00, 
                   0x00, 
                   0x10, 
                   0x38, 
                   0x10, 
                   0x00, 
                   0x24, 
                   0x7C, 
                   0x04, 
                   0x00, 
                   0x00, 
                   0x00, 
                   0x00, 
                   0x00, 
                   0x00,
};

 void setup() {  
  ir.begin();
  Serial.begin(115200);
  Serial.setTimeout(1);
  Matrix_1.setBrightness(Brightness_5);
}




void loop()
{
if(ir.keyPressed(69)) {
  Serial.println("A");
  delay (1000);
}
if(ir.keyPressed(70)) {
  Serial.println("B");
  delay (1000);
}
if(ir.keyPressed(71)) {
  Serial.println("C");
  delay (1000);
}
if(ir.keyPressed(68)) {
  Serial.println("D");
  delay (1000);
}
if(ir.keyPressed(64)) {
  Serial.println("w");
  delay (1000);
}
if(ir.keyPressed(67)) {
  Serial.println("E");
  delay (1000);
}
if(ir.keyPressed(7)) {
  Serial.println("-");
  delay (1000);
}
if(ir.keyPressed(21)) {
  Serial.println("o");
  delay (1000);
}
if(ir.keyPressed(9)) {
  Serial.println("d");
  delay (1000);
}
if(ir.keyPressed(25)) {
  Serial.println("s");
  delay (1000);
}
if(ir.keyPressed(22)) {
  Serial.println("0");
  delay (1000);
}
if(ir.keyPressed(13)) {
  Serial.println("F");
  delay (1000);
}
if(ir.keyPressed(12)) {
  Serial.println("1");
  delay (1000);
}
if(ir.keyPressed(24)) {
  Serial.println("2");
  delay (1000);
}
if(ir.keyPressed(94)) {
  Serial.println("3");
  delay (1000);
}
if(ir.keyPressed(8)) {
  Serial.println("4");
  delay (1000);
}
if(ir.keyPressed(28)) {
  Serial.println("5");
  delay (1000);
}
if(ir.keyPressed(90)) {
  Serial.println("6");
  delay (1000);
}
if(ir.keyPressed(66)) {
  Matrix_1.setColorIndex(1);
  Matrix_1.drawBitmap(0, 0, sizeof(PlusUno), PlusUno);
}
if(ir.keyPressed(82)) {

  for(uint8_t k=0; k<3; k++)
  {
    for(uint8_t i=0;i<8;i++)
    {
      Matrix_1.setBrightness(i);
      delay(100);
    }
    for(uint8_t i=7;i>0;i--)
    {
      Matrix_1.setBrightness(i);
      delay(100);
    }
}
}
if(ir.keyPressed(74)) {
  Matrix_1.clearScreen( );
}
}
