from machine import Pin
import utime

relay1 = Pin(6, Pin.OUT)  #set pin GP6 as output


while True:
    relay1(1)  # Turn on Relay
    utime.sleep(0.5)
    relay2(0)  # Turn off Relay
    utime.sleep(0.5)
 
