/*
  Firmware para leitura de teclado matricial 4 Linhas, 3 colunas
  Geison Mancuzo
  MIOT Sistemas
  www.miot.com.br
  19/06/2024
*/

//Definição dos pinos referente as linhas
int l1 = PA5;
int l2 = PA4;
int l3 = PA7;
int l4 = PA6;
//Definição do pinos referentes as colunas
int c1 = PB4;
int c2 = PB6;
int c3 = PB7;

//Bools de proteção para acionamento único
bool prot1 = false;
bool prot2 = false;
bool prot3 = false;
bool prot4 = false;
bool prot5 = false;
bool prot6 = false;
bool prot7 = false;
bool prot8 = false;
bool prot9 = false;
bool protC = false;
bool prot0 = false;
bool protE = false;

void setup()
{
  // Pinos ligados as linhas do teclado
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);

  // Pinos ligados as colunas do teclado
  pinMode(c1, INPUT_PULLUP);
  pinMode(c2, INPUT_PULLUP);
  pinMode(c3, INPUT_PULLUP);

  Serial.begin(115200);
  Serial.println("Aguardando acionamento das teclas...");
  Serial.println();
}

void loop()
{
  // tecla 1
  digitalWrite(l1, LOW);

  if (!digitalRead(c1))
  {
    if (!prot1)
    {
      prot1 = true;
      Serial.println("1");
    }
  }
  else
  {
    prot1 = false;
  }

  // tecla 2
  if (!digitalRead(c2))
  {
    if (!prot2)
    {
      prot2 = true;
      Serial.println("2");
    }
  }
  else
  {
    prot2 = false;
  }

  // tecla 3
  if (!digitalRead(c3))
  {
    if (!prot3)
    {
      prot3 = true;
      Serial.println("3");
    }
  }
  else
  {
    prot3 = false;
  }
  digitalWrite(l1, HIGH);

  // tecla 4
  digitalWrite(l2, LOW);
  if (!digitalRead(c1))
  {
    if (!prot4)
    {
      prot4 = true;
      Serial.println("4");
    }
  }
  else
  {
    prot4 = false;
  }

  // tecla 5
  if (!digitalRead(c2))
  {
    if (!prot5)
    {
      prot5 = true;
      Serial.println("5");
    }
  }
  else
  {
    prot5 = false;
  }

  // tecla 6
  if (!digitalRead(c3))
  {
    if (!prot6)
    {
      prot6 = true;
      Serial.println("6");
    }
  }
  else
  {
    prot6 = false;
  }
  digitalWrite(l2, HIGH);

  // tecla 7
  digitalWrite(l3, LOW);
  if (!digitalRead(c1))
  {
    if (!prot7)
    {
      prot7 = true;
      Serial.println("7");
    }
  }
  else
  {
    prot7 = false;
  }

  // tecla 8
  if (!digitalRead(c2))
  {
    if (!prot8)
    {
      prot8 = true;
      Serial.println("8");
    }
  }
  else
  {
    prot8 = false;
  }

  // tecla 9
  if (!digitalRead(c3))
  {
    if (!prot9)
    {
      prot9 = true;
      Serial.println("9");
    }
  }
  else
  {
    prot9 = false;
  }
  digitalWrite(l3, HIGH);

  // tecla Corrige
  digitalWrite(l4, LOW);
  if (!digitalRead(c1))
  {
    if (!protC)
    {
      protC = true;
      Serial.println("Corrige");
    }
  }
  else
  {
    protC = false;
  }

  // tecla 0
  if (!digitalRead(c2))
  {
    if (!prot0)
    {
      prot0 = true;
      Serial.println("0");
    }
  }
  else
  {
    prot0 = false;
  }

  // tecla Enter
  if (!digitalRead(c3))
  {
    if (!protE)
    {
      protE = true;
      Serial.println("Enter");
    }
  }
  else
  {
    protE = false;
  }
  digitalWrite(l4, HIGH);

  delay(10);
}
