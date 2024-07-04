# EKTP-PC
Halo sobat digital!, kalo kalian tertarik buat nyalain pc kalian pake ktp bisa ikut step stepnya kaya di bawah ini

Persyaratan :
- Kalian wajib cek kalo pc kalian waktu posisi mati masih ngasih listrik ke device usbnya, bisa cek pake keyboard ato hdd external lampunya masih nyala ato engga, kalo masih nyala kalian bisa lanjutin stepnya, kalo engga kalian harus ulik sumber listrik mikrokontroller ESP8266nya jadi pake batre ato adaptor

Komponen yang dibutuhkan :
- Breadboard (Opsional)
- Kabel Male to Female (Kalo misal pake Breadboard)
- Kabel Female to Female (Kalo misal engga pake Breadboard)
- Mikrokontroller ESP8266
- Relay
- Sensor RFID RC 522

Software yang dibutuhkan : 
- Arduino IDE
- Library ESP8266
- Library RFID RC 522

Langkah Langkah :
- Kalian install dulu Arduino IDE
- Kalian jangan lupa juga install library ESP8266 dan library RFID RC 522
- Kalian sambungin pin yang ada di sensor dan relaynya ke mikrokontroller esp8266, untuk pin mana aja yang konek bisa cek di tabel sama gambar dibawah

| PIN RFID RC 522 | PIN ESP8266 |
| --- | --- |
| SDA  | D4  |
| SCK  | D5  |
| MOSI  | D7  |
| MISO  | D6  |
| IRQ  | NOT CONNECTED  |
| GND  | GND  |
| RST | D2  |
| 3.3V  | 3.3V  |

| PIN RELAY  | PIN ESP8266 |
| --- | --- |
| VCC  | 3.3V  |
| GND  | GND  |
| IN  | D1  |

![ktp fix](https://github.com/ngulikom/EKTP-PC/assets/147029014/b10f41c8-8209-454b-89ba-a2f591f8b81b)

- nah kalian download dan buka file EKTP-PC.ino yang ada di repository ini
- nah kalian pertama harus cocokin nomor rfid di ktp kalian ato UID di bagian program yang ini
![image](https://github.com/ngulikom/EKTP-PC/assets/147029014/01b7f76a-73a0-40ec-b4c6-6a2753dcdba7)

- nah kalian upload dulu program yang udah ada, kalo udah beres upload trus kalian bisa cek di serial monitor uid nya berapa
![image](https://github.com/ngulikom/EKTP-PC/assets/147029014/e60692f1-6fe7-4415-a434-53ec37f00367)


