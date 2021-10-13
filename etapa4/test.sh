make
./etapa3 < ./teste.c > out.txt
python3 gera_dot.py out.txt tree
dot -Tpng tree -o outfile.png