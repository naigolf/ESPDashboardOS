
#include "Config.h"
#include "Display.h"
#include "WifiManager.h"
#include "Dashboard.h"

void setup()
{
  Serial.begin(115200);

  display.begin();

  wifi.begin();

  dashboard.begin();
}

void loop()
{
  dashboard.loop();
}
