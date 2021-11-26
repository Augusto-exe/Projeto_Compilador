import os
import subprocess
import sys

os.system("make --silent")
failed = []

def execute(fileName):
    print("FileName = ", fileName)
    if not os.path.exists(fileName):
        print("File not found")
        return
    f = open(fileName, "r")
    line = f.readline().strip()
    expectedExitCode = int(line[2:])
    print("expected = ", expectedExitCode)
    
    command = "./etapa7 < " + fileName + " > saida.s"
    exitCode = subprocess.call(command, shell=True)
    print("ExitCode = ", str(exitCode))
    
    command = "gcc saida.s -o ex3"
    exitCode = subprocess.call(command, shell=True)
    print("ExitCode = ", str(exitCode))
    
    command = "./ex3"
    exitCode = subprocess.call(command, shell=True)
    print("ExitCode = ", str(exitCode))
    
    if exitCode != expectedExitCode:
        failed.append(fileName)
        print("FALHOU!")
    else:
        print("Esse aqui PASSOU!")


if len(sys.argv) == 2:
    fileName = "testeE56/" + sys.argv[1]
    execute(fileName)
else:
    for i in range(0,33):
        fileName = "testeE56/ijk"
        if i < 10:
            fileName += "0"
        fileName += str(i)
        execute(fileName)
    
print("TESTS THAT FAILED:", failed)


        
    
    
        

