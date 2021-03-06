#define REST 0
#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247  
#define NOTE_C4 261
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494  
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
#define NOTE_E8 5274
#define NOTE_F8 5587
#define NOTE_FS8 5920
#define NOTE_G8 6272
#define NOTE_GS8 6645
#define NOTE_A8 7040
#define NOTE_AS8 7459
#define NOTE_B8 7902
#define SEMIBREVE 1000
#define MNM 500 //MINUM
#define CRO 250 //CROTCHET
#define QUA 125 //QUAVER
#define SEMIQ 62 //SEMIQUAVER
#define ACC 31 //ACCIDENTAL OR DEMISEMIQUAVER
#define SPEAKER A0//update to whatever output connected to speaker

void play_music(int note[], int note_duration[], int bpm) {
  int len = 0;
  int i = 0;
  float speed_factor = 60.0 / bpm;
  while (note[i] != -1) {
    len++;
    i++;
  }
  for (i = 0; i < len; i++) {
    tone(SPEAKER, note[i], note_duration[i] * speed_factor);
    delay(note_duration[i] * 1.30 * speed_factor);
    noTone(SPEAKER);
  }
}

void mary_had_a_little_lamb() {
  int note[] = {NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, 
                NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4, 
                NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, 
                NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4,
                NOTE_C4, -1};
                
  int note_duration[] = {CRO, CRO, CRO, CRO, CRO, CRO, MNM, CRO, 
                         CRO, MNM, CRO, CRO, MNM, CRO, CRO, CRO, 
                         CRO, CRO, CRO, MNM, CRO, CRO, CRO, CRO, CRO};
                         
  int bpm = 120;
  play_music(note, note_duration, bpm);  
}

void merry_christmas() {
  int note[] = {NOTE_C5, NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5,
                NOTE_D5, NOTE_D5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5, 
                NOTE_E5, NOTE_E5, NOTE_E5, NOTE_A5, NOTE_A5, NOTE_AS5, NOTE_A5, 
                NOTE_G5, NOTE_F5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_D5, NOTE_G5,
                NOTE_E5, NOTE_F5, NOTE_C5, NOTE_F5, NOTE_F5, NOTE_F5, NOTE_E5, 
                NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_G5, NOTE_A5, 
                NOTE_G5, NOTE_G5, NOTE_F5, NOTE_F5, NOTE_C6, NOTE_C5, NOTE_C5, 
                NOTE_C5, NOTE_D5, NOTE_G5, NOTE_E5, NOTE_F5, -1};
                
  int note_duration[] = {CRO, CRO, QUA, QUA, QUA, QUA, CRO, CRO,
                         CRO, CRO, QUA, QUA, QUA, QUA, CRO, CRO,
                         CRO, CRO, QUA, QUA, QUA, QUA, CRO, CRO,
                         QUA, QUA, CRO, CRO, CRO, MNM, CRO, CRO,
                         CRO, CRO, MNM, CRO, CRO, CRO, CRO, MNM,
                         CRO, CRO, QUA, QUA, QUA, QUA, CRO, CRO,
                         QUA, QUA, CRO, CRO ,CRO, MNM};
                         
  int bpm = 100;
  play_music(note, note_duration, bpm);
}

void happy_birthday() {
  int note[] = {NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_C6, NOTE_B5, NOTE_G5, 
                NOTE_G5, NOTE_A5, NOTE_G5, NOTE_D6, NOTE_C6, NOTE_G5, NOTE_G5, 
                NOTE_G6, NOTE_E6, NOTE_C6, NOTE_B5, NOTE_A5, NOTE_F6, NOTE_F6, 
                NOTE_E6, NOTE_C6, NOTE_D6, NOTE_C6, -1};
                
  int note_duration[] = {QUA + SEMIQ, SEMIQ, CRO, CRO, CRO, MNM,
                         QUA + SEMIQ, SEMIQ, CRO, CRO, CRO, MNM,
                         QUA + SEMIQ, SEMIQ, CRO, CRO, CRO, CRO,
                         CRO, QUA + SEMIQ, SEMIQ, CRO, CRO, CRO,
                         MNM};
                         
  int bpm = 100;
  play_music(note, note_duration, bpm); 
}

void fur_elise() {
  int note[] = {NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, 
                NOTE_C5, NOTE_A4, NOTE_C4, NOTE_E4, NOTE_A4, NOTE_B4, NOTE_E4, 
                NOTE_GS4, NOTE_B4,NOTE_C5, NOTE_E4, NOTE_E5, NOTE_DS5, NOTE_E5, 
                NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5, NOTE_A4, NOTE_C4, 
                NOTE_E4, NOTE_A4, NOTE_B4, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4, 
                NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_G4, NOTE_F5, NOTE_E5, 
                NOTE_D5, NOTE_F4, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_E4, NOTE_D5, 
                NOTE_C5, NOTE_B4, NOTE_E4, NOTE_E5, NOTE_E4, NOTE_E5, NOTE_E4, 
                NOTE_E5, NOTE_E4, NOTE_E5, NOTE_DS4, NOTE_E5, NOTE_D4, NOTE_E5, 
                NOTE_DS4, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5, NOTE_A4, NOTE_C4, 
                NOTE_E4, NOTE_A4, NOTE_B4, NOTE_E4, NOTE_GS4, NOTE_B4, NOTE_C5, 
                NOTE_E4, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4,
                NOTE_D5, NOTE_C5, NOTE_A4, NOTE_C4, NOTE_E4, NOTE_A4, NOTE_B4, 
                NOTE_E4, NOTE_C5, NOTE_B4, NOTE_A4, -1};
                
  int note_duration[] = {QUA, QUA, QUA, QUA, QUA, QUA, QUA, QUA, CRO + QUA, QUA,
                         QUA, QUA, CRO + QUA, QUA, QUA, QUA, CRO + QUA, QUA, QUA, QUA, 
                         QUA, QUA, QUA, QUA, QUA, QUA, CRO + QUA, QUA, QUA, QUA, 
                         CRO + QUA, QUA, QUA, QUA, CRO + QUA, QUA, QUA, QUA, CRO + QUA, QUA, 
                         QUA, QUA, CRO + QUA, QUA, QUA, QUA, CRO + QUA, QUA, QUA, QUA, 
                         QUA, QUA, QUA, QUA, QUA, QUA, QUA, QUA, QUA, QUA, 
                         QUA, QUA, QUA, QUA, QUA, QUA, QUA, QUA, CRO + QUA, QUA, 
                         QUA, QUA, CRO + QUA, QUA, QUA, QUA, CRO + QUA, QUA, QUA, QUA, 
                         QUA, QUA, QUA, QUA, QUA, QUA, CRO + QUA, QUA, QUA, QUA, 
                         CRO + QUA, QUA + ACC, QUA + ACC, QUA + ACC, MNM + QUA};

  int bpm = 100;
  play_music(note, note_duration, bpm);
}

void korobeiniki() {
  int note[] = {NOTE_E5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,
                NOTE_B4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5,
                NOTE_B4, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5,
                NOTE_A4, NOTE_A4, NOTE_D5, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_G5,
                NOTE_F5, NOTE_E5, NOTE_E5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5,
                NOTE_B4, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5,
                NOTE_A5, NOTE_A5, -1};

  int note_duration[] = {CRO, QUA, QUA, QUA, SEMIQ, SEMIQ, QUA, QUA, CRO, QUA,
                         QUA, CRO, QUA, QUA, CRO, SEMIQ, SEMIQ, QUA, CRO, CRO, 
                         CRO, CRO, MNM, CRO, QUA, QUA, CRO, QUA, QUA, CRO, QUA, 
                         QUA, CRO, QUA, QUA, CRO, SEMIQ, SEMIQ, QUA, CRO, CRO, 
                         CRO, CRO, MNM};

  int bpm = 180;
  play_music(note, note_duration, bpm);
  play_music(note, note_duration, bpm);
}

void mario() {
  int melody[] = {NOTE_E7, NOTE_E7, 0, NOTE_E7, 0, NOTE_C7, NOTE_E7, 0, NOTE_G7, 
  0, 0,  0, NOTE_G6, 0, 0, 0, NOTE_C7, 0, 0, NOTE_G6, 0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6, 0, NOTE_AS6, NOTE_A6, 0, NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7, 0, NOTE_E7, 0, NOTE_C7, NOTE_D7, NOTE_B6, 0, 0,
  NOTE_C7, 0, 0, NOTE_G6, 0, 0, NOTE_E6, 0, 0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0, NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,NOTE_D7, NOTE_B6, 0, 0, -1};

  int duration[] = {SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, 
                    SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, 
                    SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, 
                    SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ,
                    QUA, QUA, QUA, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, 
                    SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, 
                    SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, 
                    SEMIQ, SEMIQ, SEMIQ, SEMIQ, QUA, QUA, QUA, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, SEMIQ, 
                    SEMIQ, SEMIQ, SEMIQ, SEMIQ};

  int bpm = 60;
  play_music(melody, duration, bpm);
}

void setup() {
  merry_christmas();
  happy_birthday();
  mary_had_a_little_lamb();
  fur_elise();
  korobeiniki();
}

void loop() {
  // put your main code here, to run repeatedly:

}
