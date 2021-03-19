import os

print(os.getcwd())

os.chdir('/home/dhian/Área de Trabalho/')
print('')
print(os.listdir())

print('')
os.mkdir('OS-Demo')
os.makedirs('OS-Demo-2/Sub-Dir-1')
print(os.listdir())

print('')
os.rmdir('OS-Demo')
os.removedirs('OS-Demo-2/Sub-Dir-1')
print(os.listdir())

print('')
os.mkdir('OS-Demo')
os.rename('OS-Demo', 'os-demo')
print(os.listdir())



print('')
for dirpath, dirnames, filenames in os.walk('/home/dhian/Área de Trabalho/'): 
    print('Current Path:', dirpath)
    print('Directories:', dirnames)
    print('Files:', filenames)
    print()

print('')
print(os.environ.get('HOME'))

file_path = os.path.join(os.environ.get('HOME'), 'test.txt')
print(file_path)

print('')
print(os.path.basename('/tmp/test.txt'))
print(os.path.dirname('/tmp/test.txt'))
print(os.path.split('/tmp/test.txt'))

print('')
print(os.path.exists('/tmp/test.txt'))
print(os.path.splitext('/tmp/test.txt'))
