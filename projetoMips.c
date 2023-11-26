#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>

char* selectRegister(int *num);
void funcaoLW(float *registradores, int *PC);
void funcaoLB(float *registradores, int *PC);
void funcaoLI(float *registradores, int *PC);
void funcaoSW(float *registradores, int *PC);
void funcaoSB(int *PC);
void funcaoLA(float *registradores, int *PC);
void funcaoMOVE(float *registradores, int *PC);
void funcaoMFHI(float *registradores, int *PC, float *HI);
void funcaoMFLO(float *registradores, int *PC, float *LO);
void funcaoADD(float *registradores, int *PC);
void funcaoADDI(float *registradores, int *PC);
void funcaoADDU(float *registradores, int *PC);
void funcaoSUB(float *registradores, int *PC);
void funcaoSUBU(float *registradores, int *PC);
void funcaoMUL(float *registradores, int *PC);
void funcaoMULO(float *registradores, int *PC);
void funcaoMULOU(float *registradores, int *PC);
void funcaoMULT(float *registradores, int *PC, float *HI);
void funcaoMULTU(float *registradores, int *PC, float *HI);
void funcaoDIV(float *registradores, int *PC, float *LO, float *HI);
void funcaoDIVU(float *registradores, int *PC, float *LO, float*HI);
void funcaoREM(float *registradores, int *PC);
void funcaoREMU(float *registradores, int *PC);
void funcaoAND(float *registradores, int *PC);
void funcaoANDI(float *registradores, int *PC);
void funcaoNEG(float *registradores, int *PC);
void funcaoNEGU(float *registradores, int *PC);
void funcaoNOR(float *registradores, int *PC);
void funcaoNOT(float *registradores, int *PC);
void funcaoOR(float *registradores, int *PC);
void funcaoORI(float *registradores, int *PC);
void funcaoROL(float *registradores, int *PC);
void funcaoROR(float *registradores, int *PC);
void funcaoSLL(float *registradores, int *PC);
void funcaoSLA(float *registradores, int *PC);
void funcaoSLR(float *registradores, int *PC);
void funcaoSRA(float *registradores, int *PC);
void funcaoXOR(float *registradores, int *PC);
void funcaoXORI(float *registradores, int *PC);
void funcaoB(int *PC);
void funcaoJ(int *PC);
void funcaoJR(int *PC);
void funcaoBEQ(float *registradores, int *PC);
void funcaoBLT(float *registradores, int *PC);
void funcaoBLE(float *registradores, int *PC);
void funcaoBGT(float *registradores, int *PC);
void funcaoBGE(float *registradores, int *PC);
void funcaoBNE(float *registradores, int *PC);
void funcaoJR_LABEL(float *registradores, int *PC);
void funcaoJR_RA(float *registradores, int *PC);

int main()
{

    char instrucao[20];
    float registradores[32] = {1};
    float HI = 0;
    float LO = 0;
    int PC = 0;

    do{
        system("cls");
        printf("PC: %d\n\n", PC);
        printf("Para utilizar o codigo digite a instrucao que quer utilizar em letra MAIUSCULA.\n\nSomente a Instrucao e recebida EX: ADD ou BLT ");
        printf("\nDigite a Instrucao: ");
        scanf("%s", instrucao);
        system("cls");
        printf("\n\n $zero -> 0 | $at -> 1  | $v0 -> 2  | $v1 -> 3  | $a0 -> 4  | $a1 -> 5  | $a2 -> 6  | $a3 -> 7  | $t0 -> 8  | $t1 -> 9  | $t2 -> 10 |\n");
        printf(" $t3 -> 11  | $t4 -> 12 | $t5 -> 13 | $t6 -> 14 | $t7 -> 15 | $t8 -> 16 | $t9 -> 17 | $s0 -> 18 | $s1 -> 19 | $s2 -> 20 | $s3 -> 21 |\n");
        printf(" $s4 -> 22  | $s5 -> 23 | $s6 -> 24 | $s7 -> 25 | $k0 -> 26 | $k1 -> 27 | $gp -> 28 | $sp -> 29 | $fp -> 30 | $ra -> 31 |\n\n");

        if (strcmp(instrucao, "LW") == 0) // load e store ----------------------------
        {
            funcaoLW(registradores, &PC);

        }else if (strcmp(instrucao, "LB") == 0)
        {
            funcaoLB(registradores, &PC);

        }else if (strcmp(instrucao, "LI") == 0)
        {
            funcaoLI(registradores, &PC);

        }else if (strcmp(instrucao, "SW") == 0)
        {
            funcaoSW(registradores, &PC);
            
        }else if (strcmp(instrucao, "SB") == 0)
        {
            funcaoSB(&PC);
            
        }else if (strcmp(instrucao, "LA") == 0) //INSTRUCOES DE SAVE E LOAD TEM FUNCOES DIFERENTES PARA TPOS DE ENTRADA, VErIFICAR ----------------------
        {
            funcaoLA(registradores, &PC);
            
        }else if (strcmp(instrucao, "MOVE") == 0) // MOVIMENTACAO -----------------------------------------------------------
        {
            funcaoMOVE(registradores, &PC);
            
        }else if (strcmp(instrucao, "MFHI") == 0)
        {
            funcaoMFHI(registradores, &PC, &HI);
            
        }else if (strcmp(instrucao, "MFLO") == 0)
        {
            funcaoMFLO(registradores, &PC, &LO);
            
        }else if (strcmp(instrucao, "ADD") == 0) // ARITMETICAS ---------------------------------------------------------------
        {
            funcaoADD(registradores, &PC);
            
        }else if (strcmp(instrucao, "ADDI") == 0)
        {
            funcaoADDI(registradores, &PC);
            
        }else if (strcmp(instrucao, "ADDU") == 0)
        {
            funcaoADDU(registradores, &PC);
            
        }else if (strcmp(instrucao, "SUB") == 0)
        {
            funcaoSUB(registradores, &PC);
            
        }else if (strcmp(instrucao, "SUBU") == 0)
        {
            funcaoSUBU(registradores, &PC);
            
        }else if (strcmp(instrucao, "MUL") == 0)
        {
            funcaoMUL(registradores, &PC);
            
        }else if (strcmp(instrucao, "MULO") == 0)
        {
            funcaoMULO(registradores, &PC);
            
        }else if (strcmp(instrucao, "MULOU") == 0)
        {
            funcaoMULOU(registradores, &PC);
            
        }else if (strcmp(instrucao, "MULT") == 0)
        {
            funcaoMULT(registradores, &PC, &HI);
            
        }else if (strcmp(instrucao, "MULTU") == 0)
        {
            funcaoMULTU(registradores, &PC, &HI);
            
        }else if (strcmp(instrucao, "DIV") == 0) // DUAS VARIAÇOES, SE COLOCAR DESTINO SOMENTE DIVIDE, SEM DESTINO FAZ OUTRA OPERAÇÃO
        {
            funcaoDIV(registradores, &PC, &LO, &HI);
            
        }else if (strcmp(instrucao, "DIVU") == 0) // DUAS VARIAÇOES, SE COLOCAR DESTINO SOMENTE DIVIDE, SEM DESTINO FAZ OUTRA OPERAÇÃO
        {
            funcaoDIVU(registradores, &PC, &LO, &HI);
            
        }else if (strcmp(instrucao, "REM") == 0)
        {
            funcaoREM(registradores, &PC);
            
        }else if (strcmp(instrucao, "REMU") == 0)
        {
            funcaoREMU(registradores, &PC);
            
        }else if (strcmp(instrucao, "AND") == 0) // LOGICAS ------------------------------------------------------
        {
            funcaoAND(registradores, &PC);
            
        }else if (strcmp(instrucao, "ANDI") == 0)
        {
            funcaoANDI(registradores, &PC);
            
        }else if (strcmp(instrucao, "NEG") == 0)
        {
            funcaoNEG(registradores, &PC);
            
        }else if (strcmp(instrucao, "NEGU") == 0)
        {
            funcaoNEGU(registradores, &PC);
            
        }else if (strcmp(instrucao, "NOR") == 0)
        {
            funcaoNOR(registradores, &PC);
            
        }else if (strcmp(instrucao, "NOT") == 0)
        {
            funcaoNOT(registradores, &PC);
            
        }else if (strcmp(instrucao, "OR") == 0)
        {
            funcaoOR(registradores, &PC);
            
        }else if (strcmp(instrucao, "ORI") == 0)
        {
            funcaoORI(registradores, &PC);
            
        }else if (strcmp(instrucao, "ROL") == 0)
        {
            funcaoROL(registradores, &PC);
            
        }else if (strcmp(instrucao, "ROR") == 0)
        {
            funcaoROR(registradores, &PC);
            
        }else if (strcmp(instrucao, "SLL") == 0)
        {
            funcaoSLL(registradores, &PC);
            
        }else if (strcmp(instrucao, "SLA") == 0)
        {
            funcaoSLA(registradores, &PC);
            
        }else if (strcmp(instrucao, "SRL") == 0)
        {
            funcaoSRL(registradores, &PC);
            
        }else if (strcmp(instrucao, "SRA") == 0)
        {
            funcaoSRA(registradores, &PC);
            
        }else if (strcmp(instrucao, "XOR") == 0)
        {
            funcaoXOR(registradores, &PC);
            
        }else if (strcmp(instrucao, "XORI") == 0)
        {
            funcaoXORI(registradores, &PC);
            
        }else if (strcmp(instrucao, "B") == 0)// DESVIO INCONDICIONAL -----------------------------------------------------------
        {
            funcaoB(&PC);
            
        }else if (strcmp(instrucao, "J") == 0)
        {
            funcaoJ(&PC);
            
        }else if (strcmp(instrucao, "JR") == 0)
        {
            funcaoJR(&PC);
            
        }else if (strcmp(instrucao, "BEQ") == 0) // DESVIO CONDICIONAL ------------------------------------------------------------------
        {
            funcaoBEQ(registradores, &PC);
            
        }else if (strcmp(instrucao, "BLT") == 0)
        {
            funcaoBLT(registradores, &PC);
            
        }else if (strcmp(instrucao, "BLE") == 0)
        {
            funcaoBLE(registradores, &PC);
            
        }else if (strcmp(instrucao, "BGT") == 0)
        {
            funcaoBGT(registradores, &PC);
            
        }else if (strcmp(instrucao, "BGE") == 0)
        {
            funcaoBGE(registradores, &PC);
            
        }else if (strcmp(instrucao, "BNE") == 0)
        {
            funcaoBNE(registradores, &PC);
            
        }else if (strcmp(instrucao, "JR LABEL") == 0) // CHAMADA DE SUBROTINA --------------------------------------------------
        {
            funcaoJR_LABEL(registradores, &PC);
            
        }else if (strcmp(instrucao, "JR RA") == 0) 
        {
            funcaoJR_RA(registradores, &PC);
            
        }
        
        

    }while (strcmp(instrucao, "STOP"));

    return 0;
}

// --------------------------------------------------------------------------- SELETOR DOS REGISTRADORES ---------------------------------------------------------------------------------



//--------------------------------------------------------------- LOAD E STORE --------------------------------------------------------------------------------

void funcaoLW( float *registradores, int *PC){
    int reg1, reg2;
    fflush(stdin);

    do{
        printf("digite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Registrador a ser copiado: ");
        scanf("%d", &reg2);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    system("cls");

    printf("A funcao LW tem 3 variacoes.\n\n");
    printf("Ao fazer LW registrador, posicao_da_RAM:\nO registrador recebe uma copia word(4 bytes) da posicao da RAM dada, para o registrador dado.\n\n");
    printf("Ao fazer LW registrador1, (registrador2)\ncarrega a word que esta no endereco dado pelo registrador2, para o registrador1\n\n");
    printf("Ao fazer LW registrador1, offset(registrador2)\ncarrega a word que esta no endereco (registrador2 + offset) para o registrador1, o offset podendo ser negativo\n");

    printf("\nnesta instrucao e realizado a operacao de carregar o endereco do registrador %s para o registrador %s\n", registradorDois, registradorUm);

    printf("\nLW %s, %s\n", registradorUm, registradorDois);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nos 16 bits passam pela parte de sign extend pelo mux e pela ULA\nO RS vai para o banco de registradores onde e lido por register 1 e mandado para read data 1, passa pela ULA e vai para a memoria\n");
    printf("O dado do RS Passa por um MUX saindo da Memoria e utilizado para realizar a escrita do RT\n"); 

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);
    printf("\nregistrador %s Antes: %.2f", registradorDois, registradores[reg2]);

    registradores[reg1] = registradores[reg2];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);
    printf("\nregistrador %s Agora: %.2f", registradorDois, registradores[reg2]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

void funcaoLB(float *registradores, int *PC){
    int reg1, posicao, reg2;
    fflush(stdin);

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero da posicao da memoria: ");
        scanf("%d", &posicao);

        printf("digite o Registrador da memoria: ");
        scanf("%d", &reg2);
    }while((reg1 < 0 || reg1 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("A funcao LB copia o byte da posição de memoria para o registrador.\n\n");

    printf("\nnesta instrucao e realizado a operacao de carregar o endereco de memoria da posicao do registrador %s + %d para o registrador %s\n", registradorDois, posicao, registradorUm);

    printf("\nLB %s, %d(%s)\n", registradorUm, posicao, registradorDois);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nos 16 bits passam pela parte de sign extend pelo mux e pela ULA\nO RS vai para o banco de registradores onde e lido por register 1 e mandado para read data 1, passa pela ULA e vai para a memoria\n");
    printf("O dado do RS Passa por um MUX saindo da Memoria e utilizado para realizar a escrita do RT\n"); 

    printf("\nComo não da para se simular esse valor do byte da memoria o registrador 2 esta recebendo + 1 para identificar sua interação");

    registradores[reg2] += 1;

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);
    printf("\nregistrador %d(%s) Antes: %.2f", posicao,  registradorDois, registradores[reg2]);

    registradores[reg1] = registradores[reg2];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);
    printf("\nregistrador %d(%s) Agora: %.2f", posicao, registradorDois, registradores[reg2]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

void funcaoLI(float *registradores, int *PC){
    int reg1, num1;
    fflush(stdin);

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1); 

        printf("digite o Numero a ser carregado: ");
        scanf("%d", &num1);
    }while(reg1 < 0 || reg1 > 31);

    char* registradorUm = selectRegister(&reg1);

    system("cls");

    printf("A funcao LI carrega o valor passado para o registrador de destino.\n\n");

    printf("\nnesta instrucao e realizado a operacao de carregar o valor Imadiato %d para o registrador %s\n", num1, registradorUm);

    printf("\nLI %s, %d\n", registradorUm, num1);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nos 16 bits passam pela parte de sign extend pelo mux e pela ULA\nO RS vai para o banco de registradores onde e lido por register 1 e mandado para read data 1, passa pela ULA e vai para a memoria\n");
    printf("O dado do RS Passa por um MUX saindo da Memoria e utilizado para realizar a escrita do RT\n"); 

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = num1;

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

void funcaoSW(float *registradores, int *PC){
    int reg1;
    char var[20];
    fflush(stdin);
    

    do{
        printf("\ndigite o Numero do Registrador a ser salvo: ");
        scanf("%d", &reg1); 

        fflush(stdin);

        printf("digite a posicao de memoria ou variavel(Ex: VAR1 ou 100($s0) ): ");
        scanf("%s", var);
    }while(reg1 < 0 || reg1 > 31);

    char* registradorUm = selectRegister(&reg1);

    system("cls");

    printf("A funcao SW escreve o valor do registrador dentro da posicao de memoria, variavel, registrado ou registrador com offset.\nSeguindo o mesmo modelo do LW que possui tres modelos, depende da entrar\n o codigo de exemplo somente realiza a operacao ficticia\n\n");

    printf("a Instrucao pode ser no modelo SW $s0, 100($s0) quanto com uma variavel SW $s0, var1\n");

    printf("\nnesta instrucao e realizado a operacao de escrever o valor do registrador %s para a memoria %s\n", registradorUm, var);

    printf("\nSW %s, %s\n", registradorUm, var);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nos 16 bits passam pela parte de sign extend pelo mux e pela ULA\no endereco é calculado usando o RS e o valor imediato passam pelo ULA e preenchem o adress na memory data\n");
    printf("O dado a ser salvo e fornecido pelo RT que passa pelo banco de registradores e entregue na data memory na parte de escrita de dados\n"); 

    printf("\nde maneira ilustrativa ficaria assim:\n");

    printf("\n%s Antes: %d",var, 0);

    printf("\n\n%s Agora: %.2f", var, registradores[reg1]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

void funcaoSB(int *PC){
    int reg1;
    char var[20];
    fflush(stdin);
    

    do{
        printf("\ndigite o Numero do Registrador a ser salvo: ");
        scanf("%d", &reg1); 

        fflush(stdin);

        printf("digite a posicao de memoria ou variavel(Ex: VAR1 ou 100($s0) ): ");
        scanf("%s", var);
    }while(reg1 < 0 || reg1 > 31);

    char* registradorUm = selectRegister(&reg1);

    system("cls");

    printf("A funcao SB escreve o byte do registrador dentro da posicao de memoria ou variavel passada.\n\n");

    printf("a Instrucao pode ser no modelo SB $s0, 100($s0) quanto com uma variavel SW $s0, var1\n");

    printf("\nnesta instrucao e realizado a operacao de escrever o byte do registrador %s para a memoria %s\n", registradorUm, var);

    printf("\nSB %s, %s\n", registradorUm, var);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nos 16 bits passam pela parte de sign extend pelo mux e pela ULA\no endereco e calculado usando o RS e o valor imediato passam pelo ULA e preenchem o adress na memory data\n");
    printf("O dado a ser salvo e fornecido pelo RT que passa pelo banco de registradores e entregue na data memory na parte de escrita de dados\n"); 

    printf("\nde maneira ilustrativa  com 1 ficaria assim:\n");

    printf("\n%s Antes: %d",var, 0);

    printf("\n\n%s Agora: %d", var, 1);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

void funcaoLA(float *registradores, int *PC){
     int reg1;
     char label[20];
     fflush(stdin);

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1); 

        printf("digite o Nome da label: ");
        scanf("%s", label);
    }while(reg1 < 0 || reg1 > 31);

    char* registradorUm = selectRegister(&reg1);

    system("cls");

    printf("A funcao LA copia o valor da Label na memoria para o registrador de destino.\n\n");

    printf("\nnesta instrucao e realizado a operacao de copiar a label %s para o registrador %s\n", label, registradorUm);

    printf("\nLA %s, %s\n", registradorUm, label);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nos 16 bits passam pela parte de sign extend pelo mux e pela ULA\nO RS vai para o banco de registradores onde e lido por register 1 e mandado para read data 1, passa pela ULA e vai para a memoria\n");
    printf("O dado do RS Passa por um MUX saindo da Memoria e utilizado para realizar a escrita do RT\n"); 

    printf("neste modelo o valor da posicao do label esta no 1000.");

    printf("\nregistrador %s Antes de receber label %s: %.2f", registradorUm, label, registradores[reg1]);

    registradores[reg1] = 1000;

    printf("\n\nregistrador %s apos receber label %s: %.2f", registradorUm, label, registradores[reg1]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

//--------------------------------------------------------- MOVIMENTAÇÃO --------------------------------------------------------------------------------------

void funcaoMOVE(float *registradores, int *PC){
    int reg1;
    int reg2;
    fflush(stdin);

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do registrador a ser copiado: ");
        scanf("%d", &reg2);
    }while((reg1 < 0 || reg1 > 31) || reg2 < 0 || reg2 > 31);

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("A funcao MOVE copia o valor do Registrador 2 na memoria para o registrador de destino.\n\n");

    printf("\nnesta instrucao e realizado a operacao de copiar o resgistraor %s para o registrador %s\n", registradorDois, registradorUm);

    printf("\nMOVE %s, %s\n", registradorUm, registradorDois);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nOs 32 bits da Instrucao entram no processador e mandando os bits 31-26 para o controle que verifica a quem ativar\nna instrucao MOVE ativa o RegDst que ativa o mux proximo ao banco de registrador, Branch e o MemWrite que ativa a mamoria de dados\n");
    printf("os bits 25-21 entram no banco de registradores, os bits 20-16 são comparados no mux, os bits 15-0 sao enviados por sign extend\n que chega ate a ULA que mandam os dados recebidos no registrador 1 para escrita no banco de resgitradores\n"); 

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg2] = registradores[reg1];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();

}

void funcaoMFHI(float *registradores, int *PC, float *HI){
    int reg1;
    fflush(stdin);

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

    }while(reg1 < 0 || reg1 > 31);

    char* registradorUm = selectRegister(&reg1);

    system("cls");

    printf("A funcao MFHI copia o valor de HI na memoria para o registrador de destino.\n\n");

    printf("\nnesta instrucao e realizado a operacao de copiar o HI para o registrador %s\n", registradorUm);

    printf("\nMFHI %s\n", registradorUm);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nOs 32 bits da Instrucao entram no processador e mandando os bits 31-26 para o controle que verifica a quem ativar\nna instrucao MOVE ativa o RegDst que ativa o mux proximo ao banco de registrador, Branch e o MemWrite que ativa a mamoria de dados\n");
    printf("os bits 25-21 entram no banco de registradores, os bits 20-16 sao comparados no mux, os bits 15-0 sao enviados por sign extend\n que chega ate a ULA que mandam os dados recebidos no registrador 1 para escrita no banco de resgitradores\n"); 

    printf("\nO HI e um registrador especial, que armazena o resultado das operaçoes de divisao e multiplicacao\nPor exemplo, em um MULT $s0, $s1 o resultado seria Armazenado em HI\nse nao houver operacao feita anteriormente o valor sera 0\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = *HI;

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

void funcaoMFLO(float *registradores, int *PC, float *LO){
    int reg1;
    fflush(stdin);

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

    }while(reg1 < 0 || reg1 > 31);

    char* registradorUm = selectRegister(&reg1);

    system("cls");

    printf("A funcao MFLO copia o valor de LO na memoria para o registrador de destino.\n\n");

    printf("\nnesta instrucao e realizado a operacao de copiar o LO para o registrador %s\n", registradorUm);

    printf("\nMFLO %s\n", registradorUm);

    printf("Endereco:\n|   6    | 5  | 5  |           16          |\n|op code | RS | RT | opr imediato ou deslo |\n\nOs 32 bits da Instrucao entram no processador e mandando os bits 31-26 para o controle que verifica a quem ativar\nna instrucao MOVE ativa o RegDst que ativa o mux proximo ao banco de registrador, Branch e o MemWrite que ativa a mamoria de dados\n");
    printf("os bits 25-21 entram no banco de registradores, os bits 20-16 são comparados no mux, os bits 15-0 sao enviados por sign extend\n que chega ate a ULA que mandam os dados recebidos no registrador 1 para escrita no banco de resgitradores\n"); 

    printf("\nO LO e um registrador especial, que armazena o resultado das operaçoes de divisao e multiplicacao\nPor exemplo, em um DIV $s0, $s1 o resultado seria Armazenado em LO\nse nao houver operação feita anteriormente o valor sera 0\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = *LO;

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    printf("\n\nenter para continuar...");

    *PC += 4;

    getch();
}

//--------------------------------------------------------- ARITMETICAS ---------------------------------------------------------------------------------------

void funcaoADD(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    puts("--------------------------------------------------------");
    printf("\nA funcao ADD, em ASSEMBLY, utilizando o MIPS, utiliza tres registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da SOMA do conteudo do REGISTRADOR1 ($s1) com o conteudo do REGISTRADOR2 ($s2) no REGISTRADOR0 ($s0).\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nADD %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de soma e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e $s2 contenha o valor '3'.");
    puts("A instrução 'ADD $s0, $s1, $s2' resultará em $s0 contendo '8'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = registradores[reg2] + registradores[reg3];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
    
}

void funcaoADDI(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    puts("--------------------------------------------------------");
    printf("\nA funcao ADDI, em ASSEMBLY, utilizando o MIPS, utiliza dois registradores (por exemplo, $s0 e $s1) e um numero imediato (por exemplo 5 ou 30).\n");
    printf("Salva o resultado da SOMA do conteudo do REGISTRADOR 1 com o imediato no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do imediato: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nADDI %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de soma e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o imediato o valor '3'.");
    puts("A instrução 'ADDI $s0, $s1, 3 resultará em $s0 contendo '8'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = registradores[reg2] + reg3;

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}
void funcaoADDU(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao ADDU, em ASSEMBLY, utilizando o MIPS, utiliza tres registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da SOMA SEM SINAL do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nADDU %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de soma e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrução 'ADDU $s0, $s1, $s2' resultará em $s0 contendo '8'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = fabsf(registradores[reg2]) + fabsf(registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoSUB(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao SUB, em ASSEMBLY, utilizando o MIPS, utiliza tres registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da SUBTRACAO do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nSUB %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de subtracao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrução 'SUB $s0, $s1, $s2' resultará em $s0 contendo '2'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = registradores[reg2] - registradores[reg3];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoSUBU(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao SUBU, em ASSEMBLY, utilizando o MIPS, utiliza tres registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da SUBTRACAO SEM SINAL do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nSUBU %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de subtracao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrução 'SUBU $s0, $s1, $s2' resultará em $s0 contendo '8'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = fabsf(registradores[reg2]) - fabsf(registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoMUL(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao MUL, em ASSEMBLY, utilizando o MIPS, utiliza tres registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da MULTIPLICACAO do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nMUL %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de multiplicacao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrucao 'MUL $s0, $s1, $s2' resultara em $s0 contendo '15'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = registradores[reg2] * registradores[reg3];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}
void funcaoMULO(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao MULO, em ASSEMBLY, utilizando o MIPS, utiliza três registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da MULTIPLICACAO e checa o overflow do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");
    printf("Caso o overflow estoure ele retorna um erro.\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nMULO %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de multiplicacao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrução 'MULO $s0, $s1, $s2' resultará em $s0 contendo '15'.\n");
    printf("se o tamanho do overflow fosse estorado retornaria um erro, este codigo de exemplo somente executa a multiplicação.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = registradores[reg2] * registradores[reg3];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoMULOU(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao MULOU, em ASSEMBLY, utilizando o MIPS, utiliza três registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da MULTIPLICACAO SEM SINAL e checa o overflow do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");
    printf("Caso o overflow estoure ele retorna um erro.\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nMULOU %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de multiplicacao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrução 'MULOU $s0, $s1, $s2' resultará em $s0 contendo '15'.\n");
    puts("se o tamanho do overflow fosse estorado retornaria um erro, este codigo de exemplo somente executa a multiplicação.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = fabsf(registradores[reg2]) * fabsf(registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoMULT(float *registradores, int *PC, float *HI){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao MULT, em ASSEMBLY, utilizando o MIPS, utiliza três registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da MULTIPLICACAO do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");
    printf("A instrução Guarda tambem o resultado dentro de HI e LO no caso de estouro de overflow, um numero de 32 bits é guardado 64 bit em HI e LO\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nMULT %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de multiplicacao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrucao 'MULT $s0, $s1, $s2' resultara em $s0 contendo '15'.\n");
    puts("se o tamanho do overflow fosse estourado o HI e LO armazenaria o numero maior, este codigo de exemplo salva a multiplicação em HI\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = registradores[reg2] * registradores[reg3];
    *HI = registradores[reg2] * registradores[reg3];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC += 4;

    printf("\n\nenter para continuar...");

    getch();
}
void funcaoMULTU(float *registradores, int *PC, float *HI){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao MULTU, em ASSEMBLY, utilizando o MIPS, utiliza três registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da MULTIPLICACAO SEM SINAL do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");
    printf("A instrução Guarda tambem o resultado dentro de HI e LO no caso de estouro de overflow, o numero que passa 32 bits é guardado como 64 bit em HI e LO\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nMULTU %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de multiplicacao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    puts("5. O registrador de destino recebe o valor do calculo\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    puts("A instrucao 'MULTU $s0, $s1, $s2' resultara em $s0 contendo '15'.\n");
    puts("se o tamanho do overflow fosse estourado o HI e LO armazenaria o numero maior, este codigo de exemplo salva a multiplicação em HI\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = fabsf(registradores[reg2]) * fabsf(registradores[reg3]);
    *HI = fabsf(registradores[reg2]) * fabsf(registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC += 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoDIV(float *registradores, int *PC, float *LO, float *HI){
    int reg1, reg2, reg3, opcao;

    fflush(stdin);
    printf("digite a opcao de divisao:\n\n1 - Com Destino.\n2 - Sem destino.\n");
    scanf("%d", &opcao);
    if(opcao == 1)
    {
        puts("--------------------------------------------------------");
        printf("\nA funcao DIV, em ASSEMBLY, utilizando o MIPS, utiliza tres ou dois registradores (por exemplo, $s0, $s1 e $s2).\n");
        printf("com tres registradores Salva o resultado da DIVISAO do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");

        do{
            printf("\ndigite o Numero do Registrador destino: ");
            scanf("%d", &reg1);

            printf("digite o Numero do segundo registrador: ");
            scanf("%d", &reg2);

            printf("digite o Numero do terceiro registrador: ");
            scanf("%d", &reg3);
        }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

        char* registradorUm = selectRegister(&reg1);
        char* registradorDois = selectRegister(&reg2);
        char* registradorTres = selectRegister(&reg3);

        system("cls");

        printf("\nDIV %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

        puts("\nCaminho dos bits durante a operacao:");
        puts("--------------------------------------------------------");
        puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
        puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
        puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
        puts("4. A ULA realiza a operacao de divisao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
        puts("5. O registrador de destino recebe o valor do calculo\n");
    
        puts("|opcode | rs | rt | rd | shamt |  funct|\n");
        puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
        puts("\nExemplo:");
        puts("--------------------------------------------------------");
        puts("Suponha que $s1 contenha o valor '10' e o $s2 o valor '2'.");
        puts("A instrucao 'DIV $s0, $s1, $s2' resultara em $s0 contendo '5'.\n");
        if(registradores[reg2] != 0 || registradores[reg3] != 0)
        {
            printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

            registradores[reg1] = registradores[reg2]/ registradores[reg3];

            printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

            *PC += 4;
        }else{
        printf("\n\ndivisao invalida\n\n");
        }
        printf("\n\nenter para continuar...");

        getch();
    }else if(opcao == 2)
    {
        puts("--------------------------------------------------------");
        printf("\nA funcao DIV, em ASSEMBLY, utilizando o MIPS, utiliza tres ou dois registradores (por exemplo, $s0, $s1 e $s2).\n");
        printf("na com dois registradores Salva o resultado da DIVISAO do conteudo do REGISTRADOR 1 com o registrador 2 e coloca o quoeficiente em HI e o resto em LO.\n");

        do{
            printf("\ndigite o Numero do Registrador destino: ");
            scanf("%d", &reg1);

            printf("digite o Numero do segundo registrador: ");
            scanf("%d", &reg2);

            printf("digite o Numero do terceiro registrador: ");
            scanf("%d", &reg3);
        }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

        char* registradorUm = selectRegister(&reg1);
        char* registradorDois = selectRegister(&reg2);
        char* registradorTres = selectRegister(&reg3);

        system("cls");

        printf("\nDIV %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

        puts("\nCaminho dos bits durante a operacao:");
        puts("--------------------------------------------------------");
        puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
        puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
        puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
        puts("4. A ULA realiza a operacao de divisao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
        puts("5. O registrador de destino recebe o valor do calculo\n");
    
        puts("|opcode | rs | rt | rd | shamt |  funct|\n");
        puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
        puts("\nExemplo:");
        puts("--------------------------------------------------------");
        puts("Suponha que $s1 contenha o valor '20' e o $s2 o valor '4'.");
        puts("A instrucao 'DIV $s0, $s1' resultara em $HI contendo '5' e $LO contendo '0'.\n");
        puts("se o tamanho do overflow fosse estourado o HI e LO armazenaria o numero maior, este codigo de exemplo salva a DIVISAO em LO\n");
        if(registradores[reg2] != 0 || registradores[reg3] != 0)
        {
            printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

            *HI = registradores[reg2] / registradores[reg3];
            *LO = fmod(registradores[reg2], registradores[reg3]);

            printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

            *PC += 4;
        }else{
        printf("divisao invalida");
        }
        printf("\n\nenter para continuar...");

        getch();
    }else{
    printf("opcao invalida.");
    }
}

void funcaoDIVU(float *registradores, int *PC, float *LO, float *HI){
    int reg1, reg2, reg3, opcao;

    fflush(stdin);
    printf("digite a opcao de divisao:\n\n1 - Com Destino.\n2 - Sem destino.\n");
    scanf("%d", &opcao);
    if(opcao == 1)
    {
        puts("--------------------------------------------------------");
        printf("\nA funcao DIVU, em ASSEMBLY, utilizando o MIPS, utiliza tres ou dois registradores (por exemplo, $s0, $s1 e $s2).\n");
        printf("com tres registradores Salva o resultado da DIVISAO SEM SINAL do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");

        do{
            printf("\ndigite o Numero do Registrador destino: ");
            scanf("%d", &reg1);

            printf("digite o Numero do segundo registrador: ");
            scanf("%d", &reg2);

            printf("digite o Numero do terceiro registrador: ");
            scanf("%d", &reg3);
        }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

        char* registradorUm = selectRegister(&reg1);
        char* registradorDois = selectRegister(&reg2);
        char* registradorTres = selectRegister(&reg3);

        system("cls");

        printf("\nDIVU %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

        puts("\nCaminho dos bits durante a operacao:");
        puts("--------------------------------------------------------");
        puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
        puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
        puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
        puts("4. A ULA realiza a operacao de divisao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
        puts("5. O registrador de destino recebe o valor do calculo\n");
    
        puts("|opcode | rs | rt | rd | shamt |  funct|\n");
        puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
        puts("\nExemplo:");
        puts("--------------------------------------------------------");
        puts("Suponha que $s1 contenha o valor '-10' e o $s2 o valor '2'.");
        puts("A instrucao 'DIVU $s0, $s1, $s2' resultara em $s0 contendo '5'.\n");
        if(registradores[reg2] != 0 || registradores[reg3] != 0)
        {
            printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

            registradores[reg1] = fabsf(registradores[reg2])/ fabsf(registradores[reg3]);

            printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

            *PC += 4;
        }else{
        printf("\n\ndivisao invalida\n\n");
        }
        printf("\n\nenter para continuar...");

        getch();
    }else if(opcao == 2)
    {
        puts("--------------------------------------------------------");
        printf("\nA funcao DIVU, em ASSEMBLY, utilizando o MIPS, utiliza tres ou dois registradores (por exemplo, $s0, $s1 e $s2).\n");
        printf("na com dois registradores Salva o resultado da DIVISAO SEM SINAL do conteudo do REGISTRADOR 1 com o registrador 2 e coloca o quoeficiente em HI e o resto em LO.\n");

        do{
            printf("\ndigite o Numero do Registrador destino: ");
            scanf("%d", &reg1);

            printf("digite o Numero do segundo registrador: ");
            scanf("%d", &reg2);

            printf("digite o Numero do terceiro registrador: ");
            scanf("%d", &reg3);
        }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

        char* registradorUm = selectRegister(&reg1);
        char* registradorDois = selectRegister(&reg2);
        char* registradorTres = selectRegister(&reg3);

        system("cls");

        printf("\nDIVU %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

        puts("\nCaminho dos bits durante a operacao:");
        puts("--------------------------------------------------------");
        puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
        puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
        puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
        puts("4. A ULA realiza a operacao de divisao e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
        puts("|opcode | rs | rt | rd | shamt |  funct|\n");
        puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
        puts("\nExemplo:");
        puts("--------------------------------------------------------");
        puts("Suponha que $s1 contenha o valor '20' e o $s2 o valor '4'.");
        puts("A instrucao 'DIV $s0, $s1' resultara em $HI contendo '5' e $LO contendo '0'.\n");
        puts("se o tamanho do overflow fosse estourado o HI e LO armazenaria o numero maior, este codigo de exemplo salva a DIVISAO em LO\n");
        if(registradores[reg2] != 0 || registradores[reg3] != 0)
        {
            printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

            *HI = fabsf(registradores[reg2]) / fabsf(registradores[reg3]);
            *LO = fmod(fabsf(registradores[reg2]), fabsf(registradores[reg3]));

            printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

            *PC += 4;
        }else{
        printf("divisao invalida");
        }
        printf("\n\nenter para continuar...");

        getch();
    }else{
    printf("opcao invalida.");
    }
}

void funcaoREM(float *registradores, int *PC){
    int reg1, reg2, reg3;

    fflush(stdin);

    puts("--------------------------------------------------------");
    printf("\nA funcao REM, em ASSEMBLY, utilizando o MIPS, utiliza tres ou dois registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado do RESTO da divisao do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");
    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);
        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nREM %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de resto e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '10' e o $s2 o valor '2'.");
    puts("A instrucao 'REM $s0, $s1, $s2' resultara em $s0 contendo '0'.\n");
    if(registradores[reg2] != 0 || registradores[reg3] != 0)
    {
        printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

        registradores[reg1] = fmod(registradores[reg2], registradores[reg3]);

        printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

        *PC += 4;
    }else{
    printf("\n\ndivisao invalida\n\n");
    }
    printf("\n\nenter para continuar...");

    getch();
}

void funcaoREMU(float *registradores, int *PC){
    int reg1, reg2, reg3;

    fflush(stdin);

    puts("--------------------------------------------------------");
    printf("\nA funcao REM, em ASSEMBLY, utilizando o MIPS, utiliza tres ou dois registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado do RESTO da divisao SEM SINAL do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0.\n");
    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);
        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nREM %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de resto e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '-10' e o $s2 o valor '2'.");
    puts("A instrucao 'REM $s0, $s1, $s2' resultara em $s0 contendo '0'.\n");
    if(registradores[reg2] != 0 || registradores[reg3] != 0)
    {
        printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

        registradores[reg1] = fmod(fabsf(registradores[reg2]), fabsf(registradores[reg3]));

        printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

        *PC += 4;
    }else{
    printf("\n\ndivisao invalida\n\n");
    }
    printf("\n\nenter para continuar...");

    getch();
}

// ------------------------------------------------------------ LOGICAS -----------------------------------------------------------------------

void funcaoAND(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao AND, em ASSEMBLY, utilizando o MIPS, utiliza tres registradores (por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da operacao logica AND do conteudo do REGISTRADOR 1 com o registrador 2 e coloca no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do terceiro registrador: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nAND %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de soma e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 o valor '3'.");
    printf("5: 101\n3: 011\nAND=1\n");
    puts("A instrucao 'AND $s0, $s1, $s2' resultara em $s0 contendo '1'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = (int)registradores[reg2] & (int)registradores[reg3];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoANDI(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao AND, em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e o imediato(por exemplo, $s0, $s1 e $s2).\n");
    printf("Salva o resultado da operacao logica AND do conteudo do REGISTRADOR 1 com o Imediato e coloca no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Numero do IMEDIATO: ");
        scanf("%d", &reg3);
    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nANDI %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de soma e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o Imediato '3'.");
    printf("5: 101\n3: 011\nAND=1\n");
    puts("A instrucao 'ANDI $s0, $s1, $s2' resultara em $s0 contendo '1'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = (int)registradores[reg2] & reg3;

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoNEG(float *registradores, int *PC){
    int reg1, reg2;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao NEG em ASSEMBLY, utilizando o MIPS, utiliza dois registradores (por exemplo, $s0 e $s1 ).\n");
    printf("Salva o resultado da operacao logica NEG do conteudo do REGISTRADOR 1 e coloca no REGISTRADOR 0 .\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nNEG %s, %s\n", registradorUm, registradorDois);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de soma e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5'.");
    puts("a operação logica vai compara os bits, inverter e adicionar 1");
    printf("5: 101\n3: 010\nNEG=011\n");
    puts("A instrucao 'NEG $s0, $s1' resultara em $s0 contendo '1'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = !registradores[reg2];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoNEGU(float *registradores, int *PC){
    int reg1, reg2;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao NEG em ASSEMBLY, utilizando o MIPS, utiliza dois registradores (por exemplo, $s0 e $s1 ).\n");
    printf("Salva o resultado da operacao logica NEG do conteudo do REGISTRADOR 1 e coloca no REGISTRADOR 0 .\n");
    printf("sem overflow ou sinal\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nNEGU %s, %s\n", registradorUm, registradorDois);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da oparecao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    puts("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    puts("4. A ULA realiza a operacao de soma e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5'.");
    puts("a operação logica vai compara os bits, inverter e adicionar 1");
    printf("5: 101\n3: 010\nNEGU=011\n");
    puts("A instrucao 'NEGU $s0, $s1' resultara em $s0 contendo '1'.\n");
    puts("NEGU não possui overflow para o sinal\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = !registradores[reg2];

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoNOR(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao NOR em ASSEMBLY, utilizando o MIPS, utiliza tres registradores (por exemplo, $s0, $s1 e $s2 ).\n");
    printf("Salva o resultado da operacao logica NOR entre o REGISTRADOR 1 e o registrador 2 e coloca no REGISTRADOR 0 .\n");
    printf("OPeração de negacao de OR entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero do terceiro registrador: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nNOR %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de NOR e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e $s2 o valor '3'.");
    puts("a operação logica vai compara os bits e verificar um ou outro e Negar o resultado");
    printf("5: 101\n3: 011\nNOR=000\n");
    puts("A instrucao 'NOR $s0, $s1' resultara em $s0 contendo '0'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = !((int)registradores[reg2] | (int)registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoNOT(float *registradores, int *PC){
    int reg1, reg2;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao NOT em ASSEMBLY, utilizando o MIPS, utiliza dois registradores (por exemplo, $s0, $s1).\n");
    printf("Salva o resultado da operacao logica NOR do REGISTRADOR 1 e coloca no REGISTRADOR 0 .\n");
    printf("OPeração de negacao entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nNOT %s, %s\n", registradorUm, registradorDois);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de NOT e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    puts("|opcode | rs | rt | rd | shamt |  funct|\n");
    puts("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5'.");
    puts("a operação logica vai compara os bits Negar o valor ");
    printf("5: 101\nNOT=010\n");
    puts("A instrucao 'NOT $s0, $s1' resultara em $s0 contendo '2'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = !((int)registradores[reg2]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoOR(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao OR em ASSEMBLY, utilizando o MIPS, utiliza tres registradores(por exemplo, $s0, $s1 e $s2 ).\n");
    printf("Salva o resultado da operacao logica OR entre o REGISTRADOR 1 e o registrador 2 e coloca no REGISTRADOR 0 .\n");
    printf("OPeração de OR entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero do iterceiro registrador: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nOR %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de OR e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | rd | shamt |  funct|\n");
    printf("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o $s2 valor '3'.");
    puts("a operação logica vai compara os bits e o que for verdadeiro em um ou outro é verdadeiro");
    printf("5: 101\n3: 011\nOR=111\n");
    puts("A instrucao 'OR $s0, $s1' resultara em $s0 contendo '7'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] | (int)registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoORI(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao ORI em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado da operacao logica ORI entre o REGISTRADOR 1 e o IMEDIATO e coloca no REGISTRADOR 0 .\n");
    printf("OPeração de ORI entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero do imediato: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nOR %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de ORI e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o imediato valor '3'.");
    puts("a operação logica vai compara os bits e o que for verdadeiro em um ou outro é verdadeiro");
    printf("5: 101\n3: 011\nOR=111\n");
    puts("A instrucao 'OR $s0, $s1' resultara em $s0 contendo '7'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] | (int)registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoROL(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao ROL em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado do SHIFT para esquerda do REGISTRADOR 1 na amplitude do IMEDIATO e coloca o resultado no REGISTRADOR 0 .\n");
    printf("OPeração de ROL entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero da distancia de SHIFT: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nROL %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de ROL e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '2' e a distancia seja '1'.");
    puts("a operação logica vai shiftar o numero para a esquerda rodando os bits");
    printf("5: 010\n\nROL=100\n");
    puts("A instrucao 'ROL $s0, $s1, 1' resultara em $s0 contendo '10'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((unsigned int)registradores[reg2] << reg3) | ((unsigned int)registradores[reg2] >> (32 - reg3));

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoROR(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao ROR em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado do SHIFT para Direita do REGISTRADOR 1 na amplitude do IMEDIATO e coloca o resultado no REGISTRADOR 0 .\n");
    printf("OPeração de ROR entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero da distancia de SHIFT: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nROR %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de ROR e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e a distancia seja '3'.");
    puts("a operação logica vai shiftar o numero para a direita rodando os bits");
    printf("5: 101\n\nROL=010\n");
    puts("A instrucao 'ROL $s0, $s1, 1' resultara em $s0 contendo '2.5'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((unsigned int)registradores[reg2] >> reg3) | ((unsigned int)registradores[reg2] << (32 - reg3));

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoSLL(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao SLL em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado do SHIFT para Esquerda do REGISTRADOR 1 na amplitude do IMEDIATO e coloca o resultado no REGISTRADOR 0 .\n");
    printf("OPeração de SLL entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero da distancia de SHIFT: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nSLL %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de SLL e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e a distancia seja '1'.");
    puts("a operação logica vai shiftar o numero para a esquerda multiplicando por 2");
    printf("5: 101\n\nROL=1010\n");
    puts("A instrucao 'SLL $s0, $s1, 1' resultara em $s0 contendo '10'.\n");
    puts("a função não possui a parte de jogar fora o bit shiftado\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] << reg3);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}
void funcaoSLA(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao SLA em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado do SHIFT para Esquerda do REGISTRADOR 1 na amplitude do IMEDIATO e coloca o resultado no REGISTRADOR 0 .\n");
    printf("OPeração de SLA entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero da distancia de SHIFT: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nSLA %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de SLA e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e a distancia seja '1'.");
    puts("a operação logica vai shiftar o numero para a esquerda multiplicando por 2");
    printf("5: 101\n\nROL=1010\n");
    puts("A instrucao 'SLA $s0, $s1, 1' resultara em $s0 contendo '10'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] << reg3); //fazer perder o bit shiftado

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}
void funcaoSLR(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao SLR em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado do SHIFT para DIREITA do REGISTRADOR 1 na amplitude do IMEDIATO e coloca o resultado no REGISTRADOR 0 .\n");
    printf("OPeração de SLr entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero da distancia de SHIFT: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nSLR %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de SLR e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '10' e a distancia seja '1'.");
    puts("a operação logica vai shiftar o numero para a direita dividindo por 2");
    printf("5: 1010\n\nROL=0101\n");
    puts("A instrucao 'SLR $s0, $s1, 1' resultara em $s0 contendo '5'.\n");
    puts("a função não possui a parte de jogar fora o bit shiftado\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] >> reg3);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoSRA(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao SRA em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado do SHIFT para DIREITA do REGISTRADOR 1 na amplitude do IMEDIATO e coloca o resultado no REGISTRADOR 0 .\n");
    printf("OPeração de SRA entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero da distancia de SHIFT: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nSRA %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de SRA e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");
    
    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '10' e a distancia seja '1'.");
    puts("a operação logica vai shiftar o numero para a direita dividindo por 2");
    printf("5: 1010\n\nROL=0101\n");
    puts("A instrucao 'SRA $s0, $s1, 1' resultara em $s0 contendo '5'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] >> reg3);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoXOR(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao XOR em ASSEMBLY, utilizando o MIPS, utiliza tres registradores(por exemplo, $s0, $s1 e $s2 ).\n");
    printf("Salva o resultado da operacao logica XOR entre o REGISTRADOR 1 e o registrador 2 e coloca no REGISTRADOR 0 .\n");
    printf("OPeração de XOR entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o numero do terceiro registrador: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31) || (reg3 < 0 || reg3 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);
    char* registradorTres = selectRegister(&reg3);

    system("cls");

    printf("\nXOR %s, %s, %s\n", registradorUm, registradorDois, registradorTres);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    puts("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    puts("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de XOR e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    printf("5. O registrador de destino recebe o valor do calculo\n");
    
    printf("|opcode | rs | rt | rd | shamt |  funct|\n");
    printf("|6 bits |  5 | 5  | 5  |   5   | 6 bits|\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e $s2 o valor '3'.");
    puts("a operação logica vai compara os bits e verificar onde UM ou OUTRO é verdadeiro e o que for igual é falso");
    printf("5: 101\n3: 011\nXOR=110\n");
    puts("A instrucao 'XOR $s0, $s1, $s2' resultara em $s0 contendo '6'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] ^ (int)registradores[reg3]);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoXORI(float *registradores, int *PC){
    int reg1, reg2, reg3;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("\nA funcao XORI em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e um imediato(por exemplo, $s0, $s1 e 5 ).\n");
    printf("Salva o resultado da operacao logica XORI entre o REGISTRADOR 1 e o IMEDIATO e coloca no REGISTRADOR 0 .\n");
    printf("OPeração de XORI entre inteiros\n\n");

    do{
        printf("\ndigite o Numero do Registrador destino: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite um numero imediato: ");
        scanf("%d", &reg3);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nXORI %s, %s, %d\n", registradorUm, registradorDois, reg3);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao de RegDst, da operacao da ULA e do RegWrite\n");
    printf("2. Os bits 25-21, 20-16, e 15-11 vao para o banco de registradores onde cada registrador e encontrado\n");
    printf("3. do restante dos bits 15-0 e feita a passagem do 5-0 para o controle da ULA\n");
    printf("4. A ULA realiza a operacao de XOR e passa o resultado para a memoria que manda para o banco de 32 registradores\n");
    printf("5. O registrador de destino recebe o valor do calculo\n");
    
    printf("|opcode | rs | rt | Endereço imediato  |\n");
    printf("|6 bits |  5 | 5  |     16 bits        |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que $s1 contenha o valor '5' e o imediato o valor '3'.");
    puts("a operação logica vai compara os bits e verificar onde UM ou OUTRO é verdadeiro e o que for igual é falso");
    printf("5: 101\n3: 011\nXOR=110\n");
    puts("A instrucao 'XOR $s0, $s1, 3' resultara em $s0 contendo '6'.\n");

    printf("\nregistrador %s Antes: %.2f", registradorUm, registradores[reg1]);

    registradores[reg1] = ((int)registradores[reg2] ^ reg3);

    printf("\n\nregistrador %s Agora: %.2f", registradorUm, registradores[reg1]);

    *PC+= 4;

    printf("\n\nenter para continuar...");

    getch();

}

// ------------------------ DESVIO INCONDICIONAL ------------------------

void funcaoB(int *PC){
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao B em ASSEMBLY, utilizando o MIPS, utiliza um registrador e a label(por exemplo, $s0 e va1 ).\n");
    printf("Muda o registrador PC para o valor do LABEL.\n");

    
    printf("digite o Nome da label: ");
    scanf("%s", label);

    system("cls");

    printf("\nB %s\n", label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao dop JUMP, que recebe os bits 25-0\n");
    printf("2. realiza o jump.\n");

    printf("|opcode |          Endereco         |\n");
    printf("|6 bits |           26bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que a label contenha o valor 1000 de posição.");
    puts("o jump vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao B va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    *PC = 1004;

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoJ(int *PC){
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao J em ASSEMBLY, utilizando o MIPS, utiliza um registrador e a label(por exemplo, $s0 e va1 ).\n");
    printf("Muda o registrador PC para o valor do LABEL.\n");

    
    printf("digite o Nome da label: ");
    scanf("%s", label);

    system("cls");

    printf("\nJ %s\n", label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao dop JUMP, que recebe os bits 25-0\n");
    printf("2. realiza o jump.\n");

    printf("|opcode |          Endereco         |\n");
    printf("|6 bits |           26bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que a label contenha o valor 1000 de posição.");
    puts("o jump vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao J va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    *PC = 1004;

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoJR(int *PC){
    int reg1;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao JR em ASSEMBLY, utilizando o MIPS, utiliza um registrador(por exemplo, $s0 ).\n");
    printf("Muda o registrador PC para o valor do registrador.\n");

    do{
        printf("\ndigite o Numero do Registrador: ");
        scanf("%d", &reg1);

    }while((reg1 < 0 || reg1 > 31));

    char* registradorUm = selectRegister(&reg1);

    system("cls");

    printf("\nJR %s\n", registradorUm);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao dop JUMP, que recebe os bits 25-0\n");
    printf("2. realiza o jump.\n");

    printf("|opcode |          Endereco         |\n");
    printf("|6 bits |           26bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que o registrador contenha o valor 1000 de posição.");
    puts("o jump vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao JR $s0 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    *PC = 1004;

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();
}

// --------------------------------- condicional ---------------------------------

void funcaoBEQ(float *registradores, int *PC){
    int reg1, reg2;
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao BEQ em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e a label(por exemplo, $s0, $s1 e va1 ).\n");
    printf("Compara os dois registradores e se forem iguais muda o registrador PC para o valor do LABEL.\n");

    do{
        printf("\ndigite o Numero do primeiro Registrador: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Nome da label: ");
        scanf("%s", label);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nBEQ %s, %s, %s\n", registradorUm, registradorDois, label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao do Branch e da ULA\n");
    printf("2. o banco de registradores recebe os bits 25-21, 20-16 para fazer a comparação dos valores.\n");
    printf("3. os bits 15 - 0 vao para o sign extend e em seguida para o shift left 2 e os bits 5-0 para o controle da ULA\n");
    printf("4. a ULA recebe e faz a comparação dos valores e manda para um mux com o resultado de ADD\n");
    printf("5. o mux manda para o PC o valor do resultado da ULA ou o valor do PC + 4\n");

    printf("|opcode | rs | rt |          Endereco         |\n");
    printf("|6 bits |  5 | 5  |           16bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que os registradores contenham o valor 5 e 5 e a label contenha o valor 1000 de posição.");
    puts("se o registrador for igual ao registrador 1 o PC vai pular para o label");
    puts("o branch vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao BEQ $s0, $s1, va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    if(registradores[reg1] == registradores[reg2]){
        *PC = 1004;
    }else{
        *PC+= 4;
    }

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoBLT(float *registradores, int *PC){
    int reg1, reg2;
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao BLT em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e a label(por exemplo, $s0, $s1 e va1 ).\n");
    printf("Compara os dois registradores e se o primeiro for menor que o segundo muda o registrador PC para o valor do LABEL.\n");

    do{
        printf("\ndigite o Numero do primeiro Registrador: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Nome da label: ");
        scanf("%s", label);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nBLT %s, %s, %s\n", registradorUm, registradorDois, label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao do Branch e da ULA\n");
    printf("2. o banco de registradores recebe os bits 25-21, 20-16 para fazer a comparação dos valores.\n");
    printf("3. os bits 15 - 0 vao para o sign extend e em seguida para o shift left 2 e os bits 5-0 para o controle da ULA\n");
    printf("4. a ULA recebe e faz a comparação dos valores e manda para um mux com o resultado de ADD\n");
    printf("5. o mux manda para o PC o valor do resultado da ULA ou o valor do PC + 4\n");

    printf("|opcode | rs | rt |          Endereco         |\n");
    printf("|6 bits |  5 | 5  |           16bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que os registradores contenham o valor 5 e 6 e a label contenha o valor 1000 de posição.");
    puts("se o registrador for menor ao registrador 1 o PC vai pular para o label");
    puts("o branch vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao BLT $s0, $s1, va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    if(registradores[reg1] < registradores[reg2]){
        *PC = 1004;
    }else{
        *PC+= 4;
    }

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoBLE(float *registradores, int *PC){
    int reg1, reg2;
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao BLE em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e a label(por exemplo, $s0, $s1 e va1 ).\n");
    printf("Compara os dois registradores e se o primeiro for menor ou igual que o segundo muda o registrador PC para o valor do LABEL.\n");

    do{
        printf("\ndigite o Numero do primeiro Registrador: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Nome da label: ");
        scanf("%s", label);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nBLE %s, %s, %s\n", registradorUm, registradorDois, label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao do Branch e da ULA\n");
    printf("2. o banco de registradores recebe os bits 25-21, 20-16 para fazer a comparação dos valores.\n");
    printf("3. os bits 15 - 0 vao para o sign extend e em seguida para o shift left 2 e os bits 5-0 para o controle da ULA\n");
    printf("4. a ULA recebe e faz a comparação dos valores e manda para um mux com o resultado de ADD\n");
    printf("5. o mux manda para o PC o valor do resultado da ULA ou o valor do PC + 4\n");

    printf("|opcode | rs | rt |          Endereco         |\n");
    printf("|6 bits |  5 | 5  |           16bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que os registradores contenham o valor 5 e 5 e a label contenha o valor 1000 de posição.");
    puts("se o registrador for menor ou igual ao registrador 1 o PC vai pular para o label");
    puts("o branch vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao BLE $s0, $s1, va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    if(registradores[reg1] <= registradores[reg2]){
        *PC = 1004;
    }else{
        *PC+= 4;
    }

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoBGT(float *registradores, int *PC){
    int reg1, reg2;
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao BGT em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e a label(por exemplo, $s0, $s1 e va1 ).\n");
    printf("Compara os dois registradores e se o primeiro for maior que o segundo muda o registrador PC para o valor do LABEL.\n");

    do{
        printf("\ndigite o Numero do primeiro Registrador: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Nome da label: ");
        scanf("%s", label);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nBGT %s, %s, %s\n", registradorUm, registradorDois, label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao do Branch e da ULA\n");
    printf("2. o banco de registradores recebe os bits 25-21, 20-16 para fazer a comparação dos valores.\n");
    printf("3. os bits 15 - 0 vao para o sign extend e em seguida para o shift left 2 e os bits 5-0 para o controle da ULA\n");
    printf("4. a ULA recebe e faz a comparação dos valores e manda para um mux com o resultado de ADD\n");
    printf("5. o mux manda para o PC o valor do resultado da ULA ou o valor do PC + 4\n");

    printf("|opcode | rs | rt |          Endereco         |\n");
    printf("|6 bits |  5 | 5  |           16bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que os registradores contenham o valor 6 e 5 e a label contenha o valor 1000 de posição.");
    puts("se o registrador 0 for maior ao registrador 1 o PC vai pular para o label");
    puts("o branch vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao BGT $s0, $s1, va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    if(registradores[reg1] > registradores[reg2]){
        *PC = 1004;
    }else{
        *PC+= 4;
    }

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoBGE(float *registradores, int *PC){
    int reg1, reg2;
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao BGE em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e a label(por exemplo, $s0, $s1 e va1 ).\n");
    printf("Compara os dois registradores e se o primeiro for maior ou igual que o segundo muda o registrador PC para o valor do LABEL.\n");

    do{
        printf("\ndigite o Numero do primeiro Registrador: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Nome da label: ");
        scanf("%s", label);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nBGE %s, %s, %s\n", registradorUm, registradorDois, label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao do Branch e da ULA\n");
    printf("2. o banco de registradores recebe os bits 25-21, 20-16 para fazer a comparação dos valores.\n");
    printf("3. os bits 15 - 0 vao para o sign extend e em seguida para o shift left 2 e os bits 5-0 para o controle da ULA\n");
    printf("4. a ULA recebe e faz a comparação dos valores e manda para um mux com o resultado de ADD\n");
    printf("5. o mux manda para o PC o valor do resultado da ULA ou o valor do PC + 4\n");

    printf("|opcode | rs | rt |          Endereco         |\n");
    printf("|6 bits |  5 | 5  |           16bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que os registradores contenham o valor 6 e 5 e a label contenha o valor 1000 de posição.");
    puts("se o registrador 0 for maior ou igual ao registrador 1 o PC vai pular para o label");
    puts("o branch vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao BGE $s0, $s1, va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    if(registradores[reg1] >= registradores[reg2]){
        *PC = 1004;
    }else{
        *PC+= 4;
    }

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();

}

void funcaoBNE(float *registradores, int *PC){
    int reg1, reg2;
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao BNE em ASSEMBLY, utilizando o MIPS, utiliza dois registradores e a label(por exemplo, $s0, $s1 e va1 ).\n");
    printf("Compara os dois registradores e se forem diferentes muda o registrador PC para o valor do LABEL.\n");

    do{
        printf("\ndigite o Numero do primeiro Registrador: ");
        scanf("%d", &reg1);

        printf("digite o Numero do segundo registrador: ");
        scanf("%d", &reg2);

        printf("digite o Nome da label: ");
        scanf("%s", label);

    }while((reg1 < 0 || reg1 > 31) || (reg2 < 0 || reg2 > 31));

    char* registradorUm = selectRegister(&reg1);
    char* registradorDois = selectRegister(&reg2);

    system("cls");

    printf("\nBNE %s, %s, %s\n", registradorUm, registradorDois, label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao do Branch e da ULA\n");
    printf("2. o banco de registradores recebe os bits 25-21, 20-16 para fazer a comparação dos valores.\n");
    printf("3. os bits 15 - 0 vao para o sign extend e em seguida para o shift left 2 e os bits 5-0 para o controle da ULA\n");
    printf("4. a ULA recebe e faz a comparação dos valores e manda para um mux com o resultado de ADD\n");
    printf("5. o mux manda para o PC o valor do resultado da ULA ou o valor do PC + 4\n");

    printf("|opcode | rs | rt |          Endereco         |\n");
    printf("|6 bits |  5 | 5  |           16bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que os registradores contenham o valor 5 e 6 e a label contenha o valor 1000 de posição.");
    puts("se o registrador for diferente ao registrador 1 o PC vai pular para o label");
    puts("o branch vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao BNE $s0, $s1, va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    if(registradores[reg1] != registradores[reg2]){
        *PC = 1004;
    }else{
        *PC+= 4;
    }

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();

}

//------------------------------------------------ CHAMADA DE SUBROTINA ---------------------------------------

void funcaoJAL_LABEL(int *PC, int *RA){
    char label[20];
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao JAL em ASSEMBLY, utilizando o MIPS, utiliza um registrador e a label(por exemplo, $s0 e va1 ).\n");
    printf("Muda o registrador PC para o valor do LABEL e salva o valor do PC + 4 no registrador 31.\n");

    
    printf("digite o Nome da label: ");
    scanf("%s", label);

    system("cls");

    printf("\nJAL %s\n", label);

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao dop JUMP, que recebe os bits 25-0\n");
    printf("2. realiza o jump.\n");

    printf("|opcode |          Endereco         |\n");
    printf("|6 bits |           26bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que a label contenha o valor 1000 de posição.");
    puts("o jump vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao JAL va1 resultara em PC contendo '1000'.\n");

    printf("\nregistrador PC Antes: %d", *PC);

    *PC = 1004;
    *RA = *PC + 4;

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();
}

void funcaoJR_RA(int *PC, int *RA){
    int reg1;
    fflush(stdin);
    
    puts("--------------------------------------------------------");
    printf("A funcao JR RA em ASSEMBLY, utilizando o MIPS, utiliza um registrador(por exemplo, $s0 ).\n");
    printf("Muda o registrador PC para o valor do registrador.\n");

    system("cls");

    printf("\nJR %s\n", "RA");

    puts("\nCaminho dos bits durante a operacao:");
    puts("--------------------------------------------------------");
    printf("1. O controle recebe os bits 31-26 e faz a ativacao dop JUMP, que recebe os bits 25-0\n");
    printf("2. realiza o jump.\n");

    printf("|opcode |          Endereco         |\n");
    printf("|6 bits |           26bits          |\n");

    puts("\nExemplo:");
    puts("--------------------------------------------------------");
    puts("Suponha que o RA contenha o valor 1100 de posição.");
    puts("o jump vai mover o PC");
    printf("PC: 4 -> PC: 1000\n");
    puts("A instrucao JR RA resultara em PC pulando para RA .\n");

    printf("\nregistrador PC Antes: %d", *PC);

    *PC = RA;

    printf("\n\nregistrador PC Agora: %d", *PC);

    printf("\n\nenter para continuar...");

    getch();
}