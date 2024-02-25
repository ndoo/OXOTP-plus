#define OTP_width 19
#define OTP_height 16
#define N_screen 3              //number of pages

#define toolbar_height 20 // height of the toolbar area (battery, icons)

#define battery_width 20
#define battery_height 10
#define batt_margin 2
#define batt_border 2


PROGMEM const unsigned char OTP_bits[4][48] = {{
    0x00, 0x00, 0xf8, 0xfe, 0xff, 0xfb, 0xfe, 0xff, 0xfb, 0x1e, 0xc0, 0xfb,     //OTP_ICON
    0xfe, 0xfd, 0xfb, 0xce, 0x8d, 0xfb, 0xb6, 0x6d, 0xfb, 0xb6, 0x6d, 0xfb,
    0xb6, 0x8d, 0xfb, 0xb6, 0xed, 0xfb, 0xb6, 0xed, 0xfb, 0xb6, 0xed, 0xf9,
    0xce, 0xef, 0xf8, 0xfe, 0x7f, 0xf8, 0xfe, 0x3f, 0xf8, 0x00, 0x00, 0xf8
  }, {
    0x00, 0x00, 0xf8, 0xfe, 0xff, 0xfb, 0xfe, 0xff, 0xfb, 0xfe, 0xff, 0xfb,     //ClOCK_ICON
    0x46, 0xc7, 0xfb, 0x76, 0xd7, 0xfb, 0x76, 0xd7, 0xfb, 0x46, 0xc4, 0xfb,
    0xfe, 0xff, 0xfb, 0x46, 0xf9, 0xfb, 0x76, 0xfe, 0xfb, 0x76, 0xfd, 0xf9,
    0x46, 0xfb, 0xf8, 0xfe, 0x7f, 0xf8, 0xfe, 0x3f, 0xf8, 0x00, 0x00, 0xf8
  }, {
    0x00, 0x00, 0xf8, 0xfe, 0xff, 0xfb, 0xfe, 0xff, 0xfb, 0xfe, 0xff, 0xfb,     //WIFI_ICON
    0x7e, 0xf0, 0xfb, 0x3e, 0xe7, 0xfb, 0xde, 0xdf, 0xfb, 0xfe, 0xf8, 0xfb,
    0x7e, 0xf7, 0xfb, 0xfe, 0xff, 0xfb, 0xfe, 0xfd, 0xfb, 0xfe, 0xff, 0xf9,
    0xfe, 0xff, 0xf8, 0xfe, 0x7f, 0xf8, 0xfe, 0x3f, 0xf8, 0x00, 0x00, 0xf8
  },/* {
    0x00, 0x00, 0xf8, 0xfe, 0xff, 0xfb, 0xfe, 0xff, 0xfb, 0xfe, 0xf8, 0xfb,      //CONFIG_ICON
    0xbe, 0xea, 0xfb, 0x5e, 0xd7, 0xfb, 0xbe, 0xef, 0xfb, 0xce, 0x9d, 0xfb,
    0xee, 0xba, 0xfb, 0xce, 0x9d, 0xfb, 0xbe, 0xef, 0xfb, 0x06, 0xe0, 0xf9,
    0xfe, 0xff, 0xf8, 0xfe, 0x7f, 0xf8, 0xfe, 0x3f, 0xf8, 0x00, 0x00, 0xf8
  }, {
    0x00, 0x00, 0xf8, 0xfe, 0xff, 0xfb, 0xfe, 0x0f, 0xfa, 0xfe, 0xef, 0xfa,     //BLEUTOOTH_ICON
    0xee, 0xef, 0xfa, 0xca, 0xef, 0xfa, 0xa6, 0xef, 0xfa, 0xce, 0xea, 0xfa,
    0xa6, 0xef, 0xfa, 0xca, 0xef, 0xfa, 0xee, 0x0f, 0xfb, 0xfe, 0xff, 0xf9,
    0xfe, 0xff, 0xf8, 0xfe, 0x7f, 0xf8, 0xfe, 0x3f, 0xf8, 0x00, 0x00, 0xf8
  }*/
};



#define wait_icon_width 40
#define wait_icon_height 40
static unsigned char wait_icon[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x07, 0x00, 0x00, 0x00, 0x45, 0x04, 0x00,
  0x00, 0x80, 0x14, 0x05, 0x00, 0x00, 0x80, 0xd1, 0x06, 0x00, 0x00, 0x80,
  0x06, 0x04, 0x00, 0x00, 0x80, 0x68, 0x05, 0x00, 0x00, 0x80, 0x22, 0x05,
  0x00, 0x00, 0x00, 0xbb, 0x03, 0x00, 0x00, 0x00, 0x6e, 0x01, 0x00, 0x00,
  0x00, 0xd4, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00,
  0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00,
  0x21, 0x02, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x80, 0x10, 0x04,
  0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00,
  0x80, 0x55, 0x05, 0x00, 0x00, 0x80, 0xaa, 0x02, 0x00, 0x00, 0x80, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



#define logoapp_width 52
#define logoapp_height 52
static unsigned char logoapp_bits[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x1f, 0xff, 0xff,
  0xff, 0xff, 0x8f, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xe7,
  0xff, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xfc, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf3, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9,
  0xf3, 0x00, 0x3c, 0xff, 0xfc, 0xff, 0xf9, 0x73, 0x00, 0x18, 0x7e, 0xf8,
  0xff, 0xf9, 0x33, 0x00, 0x30, 0x3c, 0xfc, 0xff, 0xf9, 0x33, 0xfe, 0x71,
  0x18, 0xfe, 0xff, 0xf9, 0x33, 0xfe, 0xf1, 0x00, 0xff, 0xff, 0xf9, 0x33,
  0xfe, 0xf1, 0x81, 0xff, 0xff, 0xf9, 0x33, 0xfe, 0xf1, 0xc3, 0xff, 0xff,
  0xf9, 0x33, 0xfe, 0xf1, 0x81, 0xff, 0xff, 0xf9, 0x33, 0xfe, 0xf1, 0x00,
  0xff, 0xff, 0xf9, 0x33, 0xfe, 0x71, 0x18, 0xfe, 0xff, 0xf9, 0x33, 0x00,
  0x30, 0x3c, 0xfc, 0xff, 0xf9, 0x73, 0x00, 0x18, 0x7e, 0xf8, 0xff, 0xf9,
  0xf3, 0x00, 0x3c, 0xff, 0xfc, 0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3,
  0x01, 0x1c, 0x00, 0x0c, 0xf0, 0xf9, 0xf3, 0xfe, 0xfb, 0xf7, 0xef, 0xef,
  0xf9, 0x73, 0xff, 0xf7, 0xf7, 0xef, 0xdf, 0xf9, 0x73, 0xff, 0xf7, 0xf7,
  0xef, 0xdf, 0xf9, 0x73, 0xff, 0xf7, 0xf7, 0xef, 0xdf, 0xf9, 0x73, 0xff,
  0xf7, 0xf7, 0xef, 0xef, 0xf9, 0x73, 0xff, 0xf7, 0xf7, 0x0f, 0xf0, 0xf9,
  0x73, 0xff, 0xf7, 0xf7, 0xef, 0xff, 0xf9, 0x73, 0xff, 0xf7, 0xf7, 0xef,
  0xff, 0xf9, 0xf3, 0xfe, 0xfb, 0xf7, 0xef, 0xff, 0xf9, 0xf3, 0x01, 0xfc,
  0xf7, 0xef, 0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xf9, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xfc, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc7, 0xff,
  0xff, 0xff, 0xff, 0x7f, 0xfe, 0x8f, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff,
  0x1f, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00,
  0xc0, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff
};

void drawBattery() {
  // draw battery, get battery level and draw a rectangle filled with the level

  float batteryLevel = M5.Power.getBatteryLevel();

  Serial.println(batteryLevel);

  // draw the outer base rectangle with white color, the inner rectangle with black color,
  // then fill the inner rectangle with greencolor with the battery level
  int batteryLevelWidth = (int)(batteryLevel / 100.0 * (battery_width - batt_border * 2));

  int batt_x = screen_x - battery_width - batt_margin;
  int batt_y = batt_margin;

  int batt_color = batteryLevel < 20 ? TFT_RED : TFT_GREEN;

  M5.Lcd.drawRect(batt_x, batt_y, battery_width, battery_height, TFT_WHITE);
  M5.Lcd.fillRect(batt_x + 1, batt_y + 1, battery_width - batt_border, battery_height - batt_border, TFT_BLACK);

  M5.Lcd.fillRect(batt_x + 1, batt_y + 1, batteryLevelWidth, battery_height - batt_border, batt_color);

}

void showmenu() {
  for (int i = 0; i < N_screen; i++) {
    M5.Lcd.drawXBitmap(20 * i, 0, OTP_bits[i], OTP_width, OTP_height, menu_index == i ? TFT_WHITE : TFT_BLACK, menu_index == i ? TFT_BLACK : TFT_WHITE);
  }
}

bool switchscreen() {

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= timeout_ScreenOn) {
    M5.Power.powerOff();
  }
  M5.update();
  if (M5.BtnB.wasPressed()) {
    previousMillis = currentMillis;
    if (menu_index == (N_screen - 1)) {
      menu_index = 0;
    } else {
      menu_index++;
    }
    showmenu();
    drawBattery();
    return true;
  } showmenu();
  return false;
}


