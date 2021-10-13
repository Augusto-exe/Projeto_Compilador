make
for dir in testes/w*; do
    TEST_FILE=$(basename $dir)
    echo "$TEST_FILE";
    valgrind ./etapa3 < "testes/$TEST_FILE" > "testes/a_$TEST_FILE.txt"
    python3 gera_dot.py "testes/a_$TEST_FILE.txt" tree
    dot -Tpng tree -o "testes/o_$TEST_FILE.png"

done;