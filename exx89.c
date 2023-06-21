#include <stdio.h> 
int main () {
int matricula, presenca;
float p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, nf, mp, ml, nt; 
scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &nt, &presenca);
while (matricula != -1) {
    mp = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8)/8;
    ml = (l1 + l2 + l3 + l4 + l5)/5;
    nf = 0.7*mp + 0.15*ml + 0.15*nt;
    if ((nf >= 6.0)&&(presenca>=96.0)&&(matricula != -1)) {
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", matricula, nf);
    }
    else if ((nf<6.0)&&(presenca>=96.0)) {
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", matricula, nf);
    }
    else if ((nf>=6.0)&&(presenca<96.0)) {
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nf);
    }
    else if ((nf<6.0)&&(presenca<96.0)) {
        printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nf);
    }
    scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &nt, &presenca);
    }
    return 0;
}
