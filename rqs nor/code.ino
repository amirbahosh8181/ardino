int dancinglight2[2][4] = {
  {10, 1, 1, 0},
  {1, 0, 0, 1}
};

int dancinglight3[2][4] = {
  {0, 1, 0, 1},
  {1, 0, 1, 0}
};

for (i = 0; i <= 3; i++) {
  digitalWrite(i, 0);
}

if (key1 == 0) {
  for (a = 0; (a <= 3) & (key2 == 1) & (key3 == 1); a++) {
    for (i = 0; i <= 3; i++) {
      digitalWrite(i, dancinglight1[a][i]);
    }
    delay(200);
  }
}

if (key2 == 0) {
  for (a = 0; (a <= 1) & (key1 == 1) & (key3 == 1); a++) {
    digitalWrite(i, dancinglight2[a][2]);
  }
  delay(300);
}