    
import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ JulianaMendez_ejercicio22.cpp -o ejercicio22.x")
os.system("./ejercicio22.x > datos.dat")

data=np.loadtxt("datos.dat")

plt.figure()
plt.hist(data)
plt.savefig("ejercicio22.png")