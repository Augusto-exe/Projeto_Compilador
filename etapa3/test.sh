make
./etapa3 < ./teste_def_fun.txt> out.txt
python3 gera_dot.py out.txt tree
dot -Tpng tree -o outfile.png