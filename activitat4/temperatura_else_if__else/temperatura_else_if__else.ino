/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float tempAigua = 100;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  if (tempAigua < 90)
  {
   Serial.print("Aigua encara no bull");
   } 
   else if (tempAigua >= 90 && tempAigua < 100)
   {
   Serial.print("Aigua apunt de bullir");
   }
  else if (tempAigua == 100)
{
  Serial.print("aigua a 100C");
}
else 
{
  Serial.print("Aigua bullint");
}
}
//********** Loop *****************************************************************
void loop() {
}

//********** Funcions *************************************************************
