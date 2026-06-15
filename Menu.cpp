#include <Arduino.h>
#include <RTClib.h>
#include "Menu.h"

// Estas variáveis foram definidas no .ino
extern RTC_DS3231 rtc;
extern char daysOfTheWeek[7][15];

void Menu::mostrarMenu() {

  Serial.println();
  Serial.println("========== MENU ==========");
  Serial.println("1. Mostrar hora");
  Serial.println("2. Mostrar data");
  Serial.println("3. Ajustar hora");
  Serial.println("4. Ajustar data");
  Serial.println("==========================");
}

void Menu::execOpcao(int option) {

  DateTime now = rtc.now();

  switch (option) {

    case 1:

      Serial.print("Hora: ");

      Serial.print(now.hour(), DEC);
      Serial.print(':');

      Serial.print(now.minute(), DEC);
      Serial.print(':');

      Serial.println(now.second(), DEC);

      break;

    case 2:

      Serial.print("Data: ");

      Serial.print(now.day(), DEC);
      Serial.print('/');

      Serial.print(now.month(), DEC);
      Serial.print('/');

      Serial.print(now.year(), DEC);

      Serial.print(" (");

      Serial.print(daysOfTheWeek[now.dayOfTheWeek()]);

      Serial.println(")");

      break;

    case 3:

      Serial.println("Funcao 'ajustar hora' ainda nao implementada.");

      break;

    case 4:

      Serial.println("Funcao 'ajustar data' ainda nao implementada.");

      break;

    default:

      Serial.println("Opcao invalida.");

      break;
  }
}