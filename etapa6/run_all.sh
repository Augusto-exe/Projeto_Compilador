make
for dir in testes/ijk*; do
    TEST_FILE=$(basename $dir)
    echo "$TEST_FILE";
    ./etapa5 < "testes/$TEST_FILE" > "testes/asm_$TEST_FILE.txt"
    python3 ilocsim.py  "testes/asm_$TEST_FILE.txt" -s -i -t > "testes/res_$TEST_FILE.txt"

done;