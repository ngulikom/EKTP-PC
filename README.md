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
- nah kalian pertama harus cocokin nomor rfid di ktp kalian ato UID di bagian program yang ini, dan kita bakal pake 4 byte pertama UID KTP kita, kalo kalian mau dimasukin semuanya sih boleh boleh aja (di ktp mamang kedeteknya 6 byte soalnya), tinggal tambah 0X didepan ID kalian
![image](https://github.com/ngulikom/EKTP-PC/assets/147029014/3d2bbc9f-023a-4cfa-b2b2-443b9b91d41f)


- nah kalian upload dulu program yang udah ada, kalo udah beres upload trus kalian bisa cek di serial monitor uid nya berapa waktu kalian tempel KTP kalian ke sensor RFID RC 522nya
![image](https://github.com/ngulikom/EKTP-PC/assets/147029014/b124d300-8edf-4e2f-a46e-af20aa9d55f3)

![image](https://github.com/ngulikom/EKTP-PC/assets/147029014/336345df-19c6-4b16-8fb6-f0fa9762a8e0)

- nah kalian ganti UID yang di program sama yang muncul di serial monitor kalian jadi nanti kaya gini
![image](https://github.com/ngulikom/EKTP-PC/assets/147029014/dd8458a4-a875-486d-96a5-9dd63a10a503)

- dan kita coba tes apakah UID yang sekarang bisa kedeteksi buat nyalain relaynya, kalian bisa liat di serial monitor ato pantengin aja lampu relaynya ngedip engga
  ![image](https://github.com/ngulikom/EKTP-PC/assets/147029014/307bd217-33ee-405c-9f5c-694844a9e571)

  
- nah kalian upload ulang si programnya dan kalian tinggal sambungin jumper yang dari relay ke motherboard kalian dan kalian bisa nyalain pc kalian pake ktp!!

oke sob semoga eskperimen kalian lancar jaya, sampai jumpa di konten lainnya, salam ngulik!!




