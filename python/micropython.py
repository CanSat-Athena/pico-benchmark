import time

testTime_ms = 1000
finishTime_us = 1000 * testTime_ms + time.ticks_us()

start = time.ticks_us()
counter = 0

while time.ticks_us() <= finishTime_us:
    counter += 1

print(counter)