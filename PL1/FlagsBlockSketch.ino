// Flag's Block 產生的草稿碼

// setup() 會先被執行且只會執行一次
void setup() {

}

// loop() 裡面的程式會不斷重複執行
void loop() {
  int i = 1, i_trigger = 0;
  int j = 1, j_trigger = 0;
  int k = 1, k_trigger = 0;
  int x = 1, x_trigger = 0;
  int y = 1, y_trigger = 0;
  for (int z = 1; z <= 1020; z++) {
    analogWrite(1, i);
    if (i_trigger == 0)
      i++;
    else 
      if(i>0)
        i--;

    analogWrite(2, j);
    if (j_trigger == 0 && z >= 127)
      j++;
    else if(j_trigger == 1)
      if(j>0)
        j--;

    analogWrite(3, k);
    if (k_trigger == 0 && z >= 255)
      k++;
    else if(k_trigger == 1)
      if(k>0)
        k--;

    analogWrite(4, x);
    if (x_trigger == 0 && z >= 382)
      x++;
    else if(x_trigger == 1)
      if(x>0)
        x--;

    analogWrite(5, y);
    if (y_trigger == 0 && z >= 510)
      y++;
    else if(y_trigger == 1)
      if(y>0)
        y--;

    if(i == 255)
      i_trigger = 1;
    if(j == 255)
      j_trigger = 1;
    if(k == 255)
      k_trigger = 1;
    if(x == 255)
      x_trigger = 1;
    if(y == 255)
      y_trigger = 1;

    delay(1);
  }

  i_trigger = 0;
  j_trigger = 0;
  k_trigger = 0;
  x_trigger = 0;
  y_trigger = 0;
  
  for (int z = 1; z <= 1020; z++) {
    analogWrite(1, i);
    if (i_trigger == 0 && z >= 510)
      i++;
    else if(i_trigger == 1)
      if(i>0)
        i--;

    analogWrite(2, j);
    if (j_trigger == 0 && z >= 382)
      j++;
    else if(j_trigger == 1)
      if(j>0)
        j--;

    analogWrite(3, k);
    if (k_trigger == 0 && z >= 255)
      k++;
    else if(k_trigger == 1)
      if(k>0)
        k--;

    analogWrite(4, x);
    if (x_trigger == 0 && z >= 127)
      x++;
    else if(x_trigger == 1)
      if(x>0)
        x--;

    analogWrite(5, y);
    if (y_trigger == 0)
      y++;
    else if(y_trigger == 1)
      if(y>0)
        y--;

    if(i == 255)
      i_trigger = 1;
    if(j == 255)
      j_trigger = 1;
    if(k == 255)
      k_trigger = 1;
    if(x == 255)
      x_trigger = 1;
    if(y == 255)
      y_trigger = 1;

    delay(1);
  }
}
