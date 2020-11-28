candles = [4, 4, 1, 3]
candles.sort()
height = candles[len(candles) - 1]
count = 0
for i in candles:
    if i == height:
        count += 1
print(count)

