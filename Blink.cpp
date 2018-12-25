#line 1 "Blink.ino"
  
       
                                                                         

                                                                    
                                                                   
                                                                   
                                            

                                            

                     
                     
   


                                                                       
#include "core_version.h"
#include "costel.h"
void setup();
void loop();
void costy();
#line 18
void setup() {
 asm("  movi.n  a0, 100");                                           
  //pinMode(13, OUTPUT);
}

void costy() {
asm("  movi.n  a0, 110");
}
                                                     
void loop() {
asm("  movi.n  a0, 120");
costy();
  //digitalWrite(13, HIGH);                                                 
 
  //digitalWrite(13, LOW);                                                 
 
}



