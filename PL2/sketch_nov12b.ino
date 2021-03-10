// Flag's Block 產生的草稿碼

// setup() 會先被執行且只會執行一次
void setup() {
}

// loop() 裡面的程式會不斷重複執行
void loop() {
  int delay_t = 127
  int i = 0, i_trigger = 1;
  int j = 0, j_trigger = 0;
  int k = 0, k_trigger = 0;
  int x = 0, x_trigger = 0;
  int y = 0, y_trigger = 0;
  while (1) {
    analogWrite(5, i);
    if (i_trigger == 1)
      i++;
    else 
      if(i>0)
        i--;

    if (i_trigger == 1 && i == delay_t)
      j_trigger = 1;

    analogWrite(6, j);
    if (j_trigger == 1 )
      j++;
    else
      if(j>0)
        j--;

    if (j_trigger == 1 && j == delay_t)
      k_trigger = 1;

    analogWrite(9, k);
    if (k_trigger == 1)
      k++;
    else
      if(k>0)
        k--;

    if (k_trigger == 1 && k == delay_t)
      x_trigger = 1;

    analogWrite(10, x);
    if (x_trigger == 1)
      x++;
    else
      if(x>0)
        x--;

    if (x_trigger == 1 && x == delay_t)
      y_trigger = 1;

    analogWrite(11, y);
    if (y_trigger == 1)
      y++;
    else
      if(y>0) {
        y--;
        break;
      }

    if(i == 255)
      i_trigger = 0;
    if(j == 255)
      j_trigger = 0;
    if(k == 255)
      k_trigger = 0;
    if(x == 255)
      x_trigger = 0;
    if(y == 255)
      y_trigger = 0;

    delay(1);
  }

  i_trigger = 0;
  j_trigger = 0;
  k_trigger = 0;
  x_trigger = 0;
  y_trigger = 1;
  
  while (1) {
    analogWrite(11, y);
    if (y_trigger == 1 )
      y++;
    else
      if(y>0) 
        y--;

    if (y_trigger == 1 && y == delay_t)
      x_trigger = 1;

    analogWrite(10, x);
    if (x_trigger == 1)
      x++;
    else
      if(x>0)
        x--;

    if (x_trigger == 1 && x == delay_t)
      k_trigger = 1;

    analogWrite(9, k);
    if (k_trigger == 1)
      k++;
    else
      if(k>0)
        k--;

    if (k_trigger == 1 && k == delay_t)
      j_trigger = 1;

    analogWrite(6, j);
    if (j_trigger == 1 )
      j++;
    else
      if(j>0)
        j--;

    if (j_trigger == 1 && j == delay_t)
      i_trigger = 1;
    
    analogWrite(5, i);
    if (i_trigger == 1)
      i++;
    else 
      if(i>0) {
        i--;
        break;
      }
    

    

    

    

    

    

    

    
      

    if(i == 255)
      i_trigger = 0;
    if(j == 255)
      j_trigger = 0;
    if(k == 255)
      k_trigger = 0;
    if(x == 255)
      x_trigger = 0;
    if(y == 255)
      y_trigger = 0;

    delay(1);
  }
}
