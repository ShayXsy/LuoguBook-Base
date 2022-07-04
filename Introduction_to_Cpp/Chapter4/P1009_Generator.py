f = open(r'P1009.txt', 'w')
sum = 1
i = 2
last = 1
n = int(input())
while (i <= n):
    last *= i
    sum += last
    i += 1
    f.write('"')
    f.write(str(sum))
    f.write('",')
f.close()
