#!/bin/sh
#export FT_NBR1=\\\'\?\"\\\"\'\\
#echo $FT_NBR1 #Irá dar nome
#export FT_NBR2=rcrdmddd

echo $FT_NBR2 + $FT_NBR1  | #Irá imprimir as duas variáveis
tr 'mrdoc' '01234' | #Transforma mrdoc em 01234.
tr "'\\\\\"?\!" "01234" | #Transforma os símbolos em 01234
xargs echo "obase=13;ibase=5;" | #Variáveis de base 5 irão à base 13
bc |tr "0123456789ABC" "gtaio luSnemf" #Soma as duas variáveis, com o tr substituindo números - letras;