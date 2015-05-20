ARCHITECTURE = avr
BOARD_TAG = uno
MONITOR_PORT = /dev/serial/by-id/*Arduino*

ARDUINO_DIR = /usr/share/arduino
AVR_TOOLS_DIR = $(ARDUINO_DIR)/hardware/tools/avr
AVRDUDE_CONF = $(AVR_TOOLS_DIR)/etc/avrdude.conf

include $(ARDUINO_DIR)/Arduino.mk
