Python 3.9.2 (tags/v3.9.2:1a79785, Feb 19 2021, 13:44:55) [MSC v.1928 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> #Tulio Jose Germano Martins 11211EMT005
import sys
import socket


door = sys.argv[1]
filename = sys.argv[2]

print(door)

door = int(door)

with open(filename,'r') as file:
    data = file.read()
print(data)



# Criando objeto socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((socket.gethostname(), door))
s.listen(5)



# Enviando a mensagem
while True:
    clientsocket, address = s.accept()
    print(f"Connection from {address} has been established.")
    clientsocket.send(bytes(data,"utf-8"))
    clientsocket.close()