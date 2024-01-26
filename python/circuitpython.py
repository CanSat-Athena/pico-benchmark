import time

testTime_s = 1
finishTime_s = testTime_s + time.monotonic()

counter = 0

while time.monotonic() <= finishTime_s:
    counter += 1

print(str(counter) + "\n")