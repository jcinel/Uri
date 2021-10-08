n1 = int(input())
n2 = int(input())
n3 = int(input())
n4 = int(input())
n5 = int(input())

lista = [n1,n2,n3,n4,n5]

par = 0
impar = 0
pos = 0
neg = 0

for num in lista:
    if (num % 2 == 0):
        par += 1
    else:
        impar += 1
    if (num > 0):
        pos += 1
    elif (num < 0):
        neg += 1
    
print('%d valor(es) par(es)'%(par))
print('%d valor(es) impar(es)'%(impar))
print('%d valor(es) positivo(s)'%(pos))
print('%d valor(es) negativo(s)'%(neg))
