

#include <LiquidCrystal.h>

const int rs = A0, en = A1, d4 = A2, d5 = A3, d6 = A4, d7 = A5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int green=11;
int yellow=12;
int red=13;


void setup() {

 lcd.begin(16,2);
 Serial.begin(9600);

 lcd.setCursor(0,0);
 lcd.print("  TRAFFIC LIGHTS  ");
 lcd.setCursor(0,1);
 lcd.print("Shimanta Traffic    ");
 delay(3000);
 lcd.clear();
 
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(red, OUTPUT);
 

}

void loop() {
 //9 
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print("   RIDE SAFE   ");
 lcd.setCursor(0,1);
 lcd.print("  WEAR HELMETS  ");
 delay(1000);

 //8
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print("   RIDE SAFE   ");
 lcd.setCursor(0,1);
 lcd.print("  WEAR HELMETS  ");
 delay(1000);
 

 //7
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print("   RIDE SAFE  ");
 lcd.setCursor(0,1);
 lcd.print("  WEAR HELMETS  ");
 delay(1000);
 

 //6
  digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 
 lcd.setCursor(0,0);
 lcd.print("   RIDE SAFE  ");
 lcd.setCursor(0,1);
 lcd.print("  WEAR HELMETS  ");
 delay(1000);

 //5
  digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print(" DON'T OVERTAKE ");
 lcd.setCursor(0,1);
 lcd.print(" WEAR SEATBELT ");
 delay(1000);

 //4
  digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print(" DON'T OVERTAKE ");
 lcd.setCursor(0,1);
 lcd.print(" WEAR SEATBELT ");
 delay(1000);

 

 //3
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print(" DON'T OVERTAKE ");
 lcd.setCursor(0,1);
 lcd.print(" WEAR SEATBELT ");
 delay(1000);

 //2
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print(" DON'T OVERTAKE ");
 lcd.setCursor(0,1);
 lcd.print(" WEAR SEATBELT ");
 delay(1000);

 //1
  digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print(" DON'T OVERTAKE ");
 lcd.setCursor(0,1);
 lcd.print(" WEAR SEATBELT ");
 delay(1000);
 
 //0
  digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);

 lcd.setCursor(0,0);
 lcd.print(" DON'T OVERTAKE ");
 lcd.setCursor(0,1);
 lcd.print(" WEAR SEATBELT ");
 delay(1000);

  //4
  digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("  DON'T DRINK  ");
 lcd.setCursor(0,1);
 lcd.print("   AND DRIVE   ");
 delay(1000);

 //3
  digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("  DON'T DRINK  ");
 lcd.setCursor(0,1);
 lcd.print("   AND DRIVE   ");
 delay(1000);

 //2
  digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("  DON'T DRINK  ");
 lcd.setCursor(0,1);
 lcd.print("   AND DRIVE   ");
 delay(1000);

 //1
  digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("  DON'T DRINK  ");
 lcd.setCursor(0,1);
 lcd.print("   AND DRIVE   ");
 delay(1000);
 
 //0
  digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("  DON'T DRINK  ");
 lcd.setCursor(0,1);
 lcd.print("   AND DRIVE   ");
 delay(1000);

 //9 
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("CALL HELPLINE NO.");
 lcd.setCursor(0,1);
 lcd.print("      999      " );
 delay(1000);

 //8
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("CALL HELPLINE NO.");
 lcd.setCursor(0,1);
 lcd.print("      999      " );
 delay(1000);

 //7
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("CALL HELPLINE NO.");
 lcd.setCursor(0,1);
 lcd.print("      999      " );
 delay(1000);

 //6
  digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("CALL HELPLINE NO.");
 lcd.setCursor(0,1);
 lcd.print("      999      " );
 delay(1000);

 //5
  digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("FOLLOW AND OBEY ");
 lcd.setCursor(0,1);
 lcd.print(" TRAFFIC RULES ");
 delay(1000);

 //4
  digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("FOLLOW AND OBEY ");
 lcd.setCursor(0,1);
 lcd.print(" TRAFFIC RULES ");
 delay(1000);

 //3
  digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("FOLLOW AND OBEY ");
 lcd.setCursor(0,1);
 lcd.print(" TRAFFIC RULES ");
 delay(1000);

 //2
  digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("FOLLOW AND OBEY ");
 lcd.setCursor(0,1);
 lcd.print(" TRAFFIC RULES ");
 delay(1000);

 //1
  digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("FOLLOW AND OBEY ");
 lcd.setCursor(0,1);
 lcd.print(" TRAFFIC RULES ");
 delay(1000);
 
 //0
  digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);

 lcd.setCursor(0,0);
 lcd.print("FOLLOW AND OBEY ");
 lcd.setCursor(0,1);
 lcd.print(" TRAFFIC RULES ");
 delay(1000);

 
}
