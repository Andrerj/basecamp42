#include <stdio.h>

void ft_putchar(char c);
void imprime_linha(int coluna, int x);
void imprime_coluna(int coluna, int x);

void rush(int x, int y) {
	
	char quebra_linha = '\n';
	int indice_linha;
	int ind_coluna;
	
	indice_linha = 1;
	while (indice_linha <= y) {
		
		ind_coluna = 1;
		while (ind_coluna <= x) {
			if (indice_linha == 1 || indice_linha == y) {
				imprime_coluna(ind_coluna, x);
			} else {
				imprime_linha(ind_coluna, x);
			}
			ind_coluna++;
		}
		ft_putchar(quebra_linha);
		indice_linha++;
	}
}

void imprime_coluna(int coluna, int x) {
	char a = 'A';
	char b = 'B';
	char c = 'C';
	char espaco = ' ';
	
	if(coluna == 1) { ft_putchar(a); } 
	else if (coluna == x) { ft_putchar(c); } 
	else { ft_putchar(b); }
}

void imprime_linha(int coluna, int x) {
	char b = 'B';
	char espaco = ' ';

	if (coluna == 1 || coluna == x) {
		ft_putchar(b);
	} else { ft_putchar(espaco);}
}


