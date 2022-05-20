# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

i,d=input().split()
col=abs(ord(i[0])-ord(d[0]))
lin=abs(int(i[1])-int(d[1]))

print("VALIDO") if (col==1 and lin==2) or (col==2 and lin==1) else print("INVALIDO")