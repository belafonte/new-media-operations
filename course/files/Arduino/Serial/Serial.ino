// Parse incoming messages consisting of three decimal values followed by a carriage return
//  Example  "12 34 56\n"
//  In TouchDesigner:     op('serial1').send("12 34 56", terminator="\n")
//
#define BUFFER_SIZE 1 

int sensorPin = A0;
int sensorValue = 0;


unsigned char incomingByte = 0; // for incoming serial data
unsigned char buffer[BUFFER_SIZE];

unsigned char val = 255;

void setup()
{
    Serial.begin(115200);

    pinMode(A0, INPUT);
    pinMode(13, OUTPUT);

    Serial.println("BEGIN");
}

void loop()
{

    if (Serial.available() > 0)
    {
        // read the incoming byte:
        Serial.readBytes(buffer, BUFFER_SIZE);
        if(buffer[0] == 0) {
          digitalWrite(13, LOW);
        } else {
          digitalWrite(13, HIGH);
        }
  
    }
    sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
}
