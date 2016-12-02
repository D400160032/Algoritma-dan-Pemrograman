#!/usr/bin/python
import math

A=input("A:")
B=input("B:")
C=input("C:")

if A==0:  
    print ("Persamaan Linier")
else:
    d=(-B+math.sqrt((B*B)-(4*A*C)))/(2*A)
    e=(-B-math.sqrt((B*B)-(4*A*C)))/(2*A)
    print("X1	:", d)
    print("X2	:", e)
