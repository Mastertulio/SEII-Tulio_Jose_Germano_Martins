#Tulio Jose Germano Martins 11211EMT005
import sys
import socket

door = sys.argv[1]
ip = sys.argv[2]
filename = sys.argv[3]


door = int(door)#sem Ip porque usei o proprio pc



# Criando objeto
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((socket.gethostname(), door))

print('Salvando dados...')
# REcebendo a mensagem e imprimindo na tela
msg = s.recv(door)
out = msg.decode("utf-8")


file = open(filename,'w') 
file.write(out) 
file.close() 
© 2021 GitHub, Inc.
