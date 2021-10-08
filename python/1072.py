N = int(input())

total_in = 0
total_out = 0
valores = []

for i in range(N):
    n = int(input())
    valores.append(n)

for j in valores:
    if (j in range(10,21)):
        total_in += 1
    else:
        total_out += 1

print('%d in'%(total_in))
print('%d out'%(total_out))
