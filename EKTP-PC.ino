#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN D3  // Pin RST pada D3
#define SS_PIN D4   // Pin SDA pada D4
#define RELAY_PIN D1 // Pin Relay pada D1

MFRC522 rfid(SS_PIN, RST_PIN); // Mendefinisikan object MFRC522

// UID yang diharapkan
byte knownUID[] = {0x04, 0x39, 0x55, 0x42, 0x48, 0x5A, 0x80};

void setup() {
  Serial.begin(9600);  // Memulai komunikasi serial
  while (!Serial) {
    ; // Tunggu hingga serial siap
  }
  
  Serial.println("Inisialisasi SPI...");
  SPI.begin();         // Memulai SPI bus
  Serial.println("Inisialisasi RFID...");
  rfid.PCD_Init();     // Menginisialisasi RFID reader

  Serial.println("Tempatkan kartu atau tag RFID Anda di dekat pembaca...");
  
  // Inisialisasi pin relay sebagai output
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); // Memastikan relay mati di awal (HIGH untuk mati)
}

void loop() {
  // Periksa apakah ada kartu yang hadir
  if (!rfid.PICC_IsNewCardPresent()) {
    return;
  }

  // Pilih satu kartu
  if (!rfid.PICC_ReadCardSerial()) {
    return;
  }

  // Baca UID kartu
  Serial.print("UID kartu: ");
  bool match = true;
  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(rfid.uid.uidByte[i], HEX);
    if (rfid.uid.uidByte[i] != knownUID[i]) {
      match = false;
    }
  }
  Serial.println();

  // Jika UID sesuai dengan yang diharapkan, nyalakan relay
  if (match) {
    Serial.println("Kartu dikenali, menyalakan relay selama 1 detik.");
    digitalWrite(RELAY_PIN, LOW); // Nyalakan relay (LOW untuk menyala)
    delay(100);                  // Tunggu selama 1 detik
    digitalWrite(RELAY_PIN, HIGH); // Matikan relay (HIGH untuk mati)
  }

  // Halt PICC
  rfid.PICC_HaltA();
  // Stop encryption on PCD
  rfid.PCD_StopCrypto1();
}
