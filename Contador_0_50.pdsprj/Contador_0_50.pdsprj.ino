 /*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Juan Manuel Sebastián Ixen Coy
 * Carnet: 2019519
 * Proyecto: Práctica 1
 */    
#define btn_rising 2
#define btn_falling 3
void funcion_ISR_rising();
void funcion_ISR_falling();

volatile static bool f_print = false;
volatile static bool r_print = false;
int a = 0;
 
void Configuracion_display_1(int a, int b, int c, int d, int e, int f, int g);
void Configuracion_display_2(int a2, int b2, int c2, int d2, int e2, int f2, int g2);

void setup()
{
/// ConfigPinesInput
   pinMode(btn_rising, INPUT);
   pinMode(btn_falling, INPUT);
//ConfigPinesOutput
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(14, OUTPUT);
   pinMode(15, OUTPUT);
   pinMode(16, OUTPUT);
   pinMode(17, OUTPUT);
   pinMode(18, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(btn_rising), funcion_ISR_rising, RISING);
  attachInterrupt(digitalPinToInterrupt(btn_falling), funcion_ISR_falling, FALLING);
}
void loop() {
  if( a > 50){
    a = 0;
    }
  if( a < 0){
    a = 50;
    }
  f_print = false; 
  r_print = false; 
  if(a == 0)  
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0
   Configuracion_display_1(1,1,1,1,1,1,0); //Numero 0
  }
  if(a == 1)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0
   Configuracion_display_1(0,1,1,0,0,0,0); //Numero 1      
  }
  if(a == 2)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0
   Configuracion_display_1(1,1,0,1,1,0,1); //Numero 2  
  }
  if(a == 3)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0  
   Configuracion_display_1(1,1,1,1,0,0,1); //Numero 3
  }
  if(a == 4)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0
   Configuracion_display_1(0,1,1,0,0,1,1); //Numero 4
  }
  if(a == 5)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0  
   Configuracion_display_1(1,0,1,1,0,1,1); //Numero 5
  }  
   if(a == 6)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0  
   Configuracion_display_1(1,0,1,1,1,1,1); //Numero 6
  }  
   if(a == 7)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0  
   Configuracion_display_1(1,1,1,0,0,0,0); //Numero 7
  }
   if(a == 8)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0  
   Configuracion_display_1(1,1,1,1,1,1,1); //Numero 8
  }
  if(a == 9)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 0
   Configuracion_display_1(1,1,0,1,1,1,1); //Numero 9
  }
  if(a == 10)
  {
   Configuracion_display_2(1,1,1,1,1,1,0); //Numero 1
   Configuracion_display_1(1,1,0,1,1,1,1); //Numero 0
  }
  if(a == 11)
  {
   Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
   Configuracion_display_1(1,1,1,1,1,1,0); //Numero 1
  }
  if(a == 12)
  {
   Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
   Configuracion_display_1(1,1,1,1,1,1,0); //Numero 2
  }
  if(a == 13)
  {
   Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
   Configuracion_display_1(1,1,1,1,1,1,0); //Numero 3
  }
  if(a == 14)
  {
   Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
   Configuracion_display_1(0,1,1,0,0,1,1); //Numero 4
  }
  if(a == 15)
  {
    Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
    Configuracion_display_1(1,0,1,1,0,1,1); //Numero 5
  }
  if(a == 16)
  {
    Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
    Configuracion_display_1(1,0,1,1,1,1,1); //Numero 6
  }
  if(a == 17)
  {
    Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
    Configuracion_display_1(1,1,1,0,0,0,0); //Numero 7
  }
  if(a == 18)
  {
    Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
    Configuracion_display_1(1,1,1,1,1,1,1); //Numero 8
  }
  if(a == 19)
  {
    Configuracion_display_2(0,1,1,0,0,0,0); //Numero 1
    Configuracion_display_1(1,1,1,0,0,1,1); //Numero 9
  }
  if(a == 20)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,1,1,1,1,1,0); //Numero 0
  }
  if(a == 21)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(0,1,1,0,0,0,0); //Numero 1
  }
  if(a == 22)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,1,0,1,1,0,1); //Numero 2
  }
  if(a == 23)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,1,1,1,0,0,1); //Numero 3
  }
  if(a == 24)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(0,1,1,0,0,1,1); //Numero 4
  }
  if(a == 25)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,0,1,1,0,1,1); //Numero 5
  }
  if(a == 26)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,0,1,1,1,1,1); //Numero 6
  }
  if(a == 27)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,1,1,0,0,0,0); //Numero 7
  }
  if(a == 28)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,1,1,1,1,1,1); //Numero 8
  }
  if(a == 29)
  {
    Configuracion_display_2(1,1,0,1,1,0,1); //Numero 2
    Configuracion_display_1(1,1,1,0,0,1,1); //Numero 9
  }
  if(a == 30)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3
    Configuracion_display_1(1,1,1,1,1,1,0); //Numero 0
  }
  if(a == 31)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(0,1,1,0,0,0,0); //Numero 1
  }
  if(a == 32)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(1,1,0,1,1,0,1); //Numero 2
  }
  if(a == 33)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(1,1,1,1,0,0,1); //Numero 3
  }
  if(a == 34)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(0,1,1,0,0,1,1); //Numero 4      
  }
  if(a == 35)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(1,0,1,1,0,1,1); //Numero 5
  }
  if(a == 36)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(1,0,1,1,1,1,1); //Numero 6
  }
  if(a == 37)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(1,1,1,0,0,0,0); //Numero 7
  }
  if(a == 38)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(1,1,1,1,1,1,1); //Numero 8
  }
  if(a == 39)
  {
    Configuracion_display_2(1,1,1,1,0,0,1); //Numero 3  
    Configuracion_display_1(1,1,1,0,0,1,1); //Numero 9
  }
  if(a == 40)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,1,1,1,1,1,0); //Numero 0  
  }
  if(a == 41)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(0,1,1,0,0,0,0); //Numero 1  
  }
  if(a == 42)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,1,0,1,1,0,1); //Numero 2  
  }
  if(a == 43)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,1,1,1,0,0,1); //Numero 3  
  }
  if(a == 44)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(0,1,1,0,0,1,1); //Numero 4  
  }
  if(a == 45)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,0,1,1,0,1,1); //Numero 5  
  }
  if(a == 46)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,0,1,1,1,1,1); //Numero 6
  }
  if(a == 47)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,1,1,0,0,0,0); //Numero 7  
  }
  if(a == 48)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,1,1,1,1,1,1); //Numero 8  
  }
  if(a == 49)
  {
    Configuracion_display_2(0,1,1,0,0,1,1); //Numero 4
    Configuracion_display_1(1,1,1,0,0,1,1); //Numero 9  
  }
  if(a == 50)
  {
    Configuracion_display_2(1,0,1,1,0,1,1); //Numero 5
    Configuracion_display_1(1,1,1,1,1,1,0); //Numero 0  
  }
}
void Configuracion_display_1(int a, int b, int c, int d, int e, int f, int g)
  {
    digitalWrite(4,a);
    digitalWrite(5,b);
    digitalWrite(6,c);
    digitalWrite(7,d);
    digitalWrite(8,e);
    digitalWrite(9,f);
    digitalWrite(10,g);
  }
void Configuracion_display_2(int a2, int b2, int c2, int d2, int e2, int f2, int g2) 
{
    digitalWrite(11, a2);
    digitalWrite(12, b2);
    digitalWrite(14, c2);
    digitalWrite(15, d2);
    digitalWrite(16, e2);
    digitalWrite(17, f2);
    digitalWrite(18, g2);
  }
void funcion_ISR_rising() {
    suma_a();
}
void funcion_ISR_falling() {
    resta_a();
}  
int suma_a() {
    a++;
  } 
int resta_a() {
    a--;
  }
