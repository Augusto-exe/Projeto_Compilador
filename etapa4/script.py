import os
import subprocess

errorDic = {
"ERR_UNDECLARED":10,
"ERR_DECLARED":11,
"ERR_VARIABLE":20,
"ERR_VECTOR":21,
"ERR_FUNCTION":22,
"ERR_WRONG_TYPE":30,
"ERR_STRING_TO_X":31,
"ERR_CHAR_TO_X":32,
"ERR_STRING_MAX":33,
"ERR_STRING_VECTOR":34,
"ERR_MISSING_ARGS":40,
"ERR_EXCESS_ARGS":41,
"ERR_WRONG_TYPE_ARGS":42,
"ERR_FUNCTION_STRING":43,
"ERR_WRONG_PAR_INPUT":50,
"ERR_WRONG_PAR_OUTPUT":51,
"ERR_WRONG_PAR_RETURN":52,
"ERR_WRONG_PAR_SHIFT":53,
}

os.system("make --silent")

failed = []
errors_code = [10, 11, 20, 21, 22, 30, 31, 32, 33, 34, 40, 41, 42, 43, 50, 51, 52, ]

def execute(fileName):
    print("FileName = ", fileName)
    f = open(fileName, "r")
    line = f.readline().strip()
    shouldReturnError = line.startswith("//")
    errorName = line[2:]
    command = "./etapa4 < " + fileName + " > saida.txt"
    exitCode = subprocess.call(command, shell=True)
    print("ExitCode", str(exitCode))
    
    if shouldReturnError and errorDic[errorName] == exitCode:
        print("PASSOU!")
    elif exitCode == 0 and not shouldReturnError:
        print("PASSOU!")
    else:
        failed.append(fileName)
        print("FALHOU!")

for i in range(0,100):
    fileName = "teste/kal"
    if i < 10:
        fileName += "0"
    fileName += str(i)
    execute(fileName)
    
for i in range(1,10):
    fileName = "teste/mao0"
    fileName += str(i)
    execute(fileName)
    
print("TESTS THAT FAILED:", failed)

        
    
    
        

