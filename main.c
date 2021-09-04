#include <stdio.h>
#include <stdlib.h>

int main ()
{
int MatrizA [3][3], MatrizB [3][3];
int Linha, Coluna, mult;
int MatrizC[3][3];

printf ("Digite os elementos da Matriz A:\n");
printf("\n\ta11 a12 a13\n\ta21 a22 a23\n\ta31 a32 a33 \n");
for(Linha=0; Linha<3; Linha++)
{
for(Coluna=0; Coluna<3; Coluna++)
scanf("%10d", &MatrizA[Linha][Coluna]);
}
for (Linha=0; Linha<3; Linha++)
{
for(Coluna=0; Coluna<3; Coluna++)
printf ("%5d", MatrizA[Linha] [Coluna]);
printf("\n\n");
}

printf ("Digite a Matriz B:\n");
printf("\n\tb11 b12 b13\n\tb21 b22 b23\n\tb31 b32 b33 \n");
for(Linha=0; Linha<3; Linha++)
{
for(Coluna=0; Coluna<3; Coluna++)
scanf("%10d", &MatrizB[Linha][Coluna]);
}
for (Linha=0; Linha<3; Linha++)
{
for(Coluna=0; Coluna<3; Coluna++)
printf ("%5d", MatrizB[Linha] [Coluna]);
printf("\n\n");
}


printf("\t\t\t A SOMA + de A e B:\n\n");
for (Linha=0;Linha<3;Linha++)
{
for(Coluna=0;Coluna<3;Coluna++)
MatrizC[Linha][Coluna]=(MatrizA[Linha][Coluna] + MatrizB[Linha][Coluna]);
}
for(Linha=0;Linha<3;Linha++)
{
for(Coluna=0;Coluna<3;Coluna++)
printf("\t\t%5d",MatrizC[Linha][Coluna]);
printf ("\n\n");
}


printf("\t\t\t A SUBTRAcAO - de A e B:\n\n");
for (Linha=0;Linha<3;Linha++)
{
for(Coluna=0;Coluna<3;Coluna++)
MatrizC[Linha][Coluna]=(MatrizA[Linha][Coluna] - MatrizB[Linha][Coluna]);
}
for(Linha=0;Linha<3;Linha++)
{
for(Coluna=0;Coluna<3;Coluna++)
printf("\t\t%5d",MatrizC[Linha][Coluna]);
printf ("\n\n");
}


printf("\t\t\t A MULTIPLICAcAO * de A e B:\n\n");
for (Linha=0;Linha<3;Linha++)
{
for(Coluna=0;Coluna<3;Coluna++)
MatrizC[Linha][Coluna]=(MatrizA[Linha][Coluna] - MatrizB[Linha][Coluna]);
}
for(Linha=0;Linha<3;Linha++)
{
for(Coluna=0;Coluna<3;Coluna++)
{
    MatrizC[Linha][Coluna] = 0;
              for (int mult = 0; mult < 3; mult++)
                  MatrizC[Linha][Coluna] += MatrizA[Linha][mult] * MatrizB[mult][Coluna];
                  printf("\t\t%5d",MatrizC[Linha][Coluna]);
}
printf ("\n\n");
}
system ("pause");
return 0;
}
