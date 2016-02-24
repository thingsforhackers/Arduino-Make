ARDUINO_DIR = $(ARDUINO_IDE)
BOARD_TAG = uno
ARDUINO_PORT = /dev/ttyACM0
ARDUINO_LIBS =
AVR_TOOLS_PATH = $(HOME)/opt/avr/bin
ARDUINO_ETC_PATH = $(ARDUINO_DIR)/hardware/tools/avr/etc/
ARDUINO_OPT_LIB_PATH=../../arduino/libs
include Arduino.mk
