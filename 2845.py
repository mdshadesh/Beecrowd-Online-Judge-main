# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''



n = int(input())
duende = sorted(list(map(int, input().split())))

maior = max(duende) + 1

while True:
    for x in range(n):
        if maior % duende[x] == 0 and duende[x] != 1:
            maior += 1
            break
    if x == n-1:
        break
    
print(maior)