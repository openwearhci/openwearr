# Description: This is the main file that will be run on the OpenWear board

import openwearpin
from machine import Pin

p0 = Pin(openwearpin.A0, Pin.OUT)    # create output pin on A0
p0.on()                 # set pin to "on" (high) level
p0.off()                # set pin to "off" (low) level
p0.value(1)             # set pin to on/high

p2 = Pin(openwearpin.A1, Pin.IN)     # create input pin on A1
print(p2.value())       # get value, 0 or 1

p4 = Pin(4, Pin.IN, Pin.PULL_UP) # enable internal pull-up resistor
p5 = Pin(5, Pin.OUT, value=1) # set pin high on creation
p6 = Pin(6, Pin.OUT, drive=Pin.DRIVE_3) # set maximum drive strength
