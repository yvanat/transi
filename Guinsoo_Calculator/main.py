baseAS = 1
bonusAS = 0.1 + 0.60
scalingAS = 0.09
currentAS = baseAS + baseAS * bonusAS
time = 0
while currentAS < 5:
    print("time : {}, AS : {}".format(time, currentAS))
    time += 1 / currentAS
    currentAS += baseAS * scalingAS