#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */


int numMunicipios[27] = {22,102,16,62,417,184,78,246,217,141,79,853,144,223,399,185,224,92,167,497,52,15,295,645,75,139};

// Conta quantos municipios tem em cada Estado, é global por conta que vai ser utilizado varias vezes
int num_munAC,num_munAL,num_munAP,num_munAM,num_munBA,num_munCE,num_munES,num_munGO,num_munMA,num_munMT,num_munMS,num_munMG,num_munPA,num_munPB,num_munPR,num_munPE,num_munPI,num_munRJ,num_munRN,num_munRS,num_munRO,num_munRR,num_munSC,num_munSP,num_munSE,num_munTO = 0;

const char *estados[30];

int repetir_nome_mun = 0;

char nome_mun[100];

// Funcao que le os Estados e o numero de municipio que ainda restão
void estados_Strings(){
    int i;
    int aux = 0;

    estados[0] = "AC";
    estados[1] = "AL";
    estados[2] = "AP";
    estados[3] = "AM";
    estados[4] = "BA";
    estados[5] = "CE";
    estados[6] = "ES";
    estados[7] = "GO";
    estados[8] = "MA";
    estados[9] = "MT";
    estados[10] = "MS";
    estados[11] = "MG";
    estados[12] = "PA";
    estados[13] = "PB";
    estados[14] = "PR";
    estados[15] = "PE";
    estados[16] = "PI";
    estados[17] = "RJ";
    estados[18] = "RN";
    estados[19] = "RS";
    estados[20] = "RO";
    estados[21] = "RR";
    estados[22] = "SC";
    estados[23] = "SP";
    estados[24] = "SE";
    estados[25] = "TO";

    // Faz com que tenha duas coluna, na hora de emprimir os numeros de municipios dos estados
    for(i = 0; i < 26; ++i){
        if(!(aux)){
            printf("\n[%s]: %d",estados[i],numMunicipios[i]);
            ++aux;
        } else{
            printf("    [%s]: %d",estados[i],numMunicipios[i]);
            aux = 0;
        }

    }
    linha();
}

struct municipio{
    long int eleitoresMunicipio; // Numeros de eleitores de cada municipio
    char nomeMunicipio[100]; // Nome do municipio
    long int codigoMunicipio; // Codigo unico para cada municipio
}ac,al,ap,am,ba,ce,es,go,ma,mt,ms,mg,pa,pb,pr,pe,pi,rj,rn,rs,ro,rr,sc,sp,se,to;

// As seguintes funcoes mostram se existe um mesmo municipio em um arquivo
int verificar_municipio_ac(){

    //AC
    FILE *arq_mun_ac;
    arq_mun_ac = fopen("arq_mun_ac.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&ac, sizeof(struct municipio), 1, arq_mun_ac);
        if(!(strcmp(nome_mun,ac.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_ac);

    return repetir_nome_mun;

}

int verificar_municipio_al(){

    //AL
    FILE *arq_mun_al;
    arq_mun_al = fopen("arq_mun_al.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&al, sizeof(struct municipio), 1, arq_mun_al);
        if(!(strcmp(nome_mun,al.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_al);

    return repetir_nome_mun;

}

int verificar_municipio_ap(){

    //AP
    FILE *arq_mun_ap;
    arq_mun_ap = fopen("arq_mun_ap.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&ap, sizeof(struct municipio), 1, arq_mun_ap);
        if(!(strcmp(nome_mun,ap.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_ap);

    return repetir_nome_mun;

}

int verificar_municipio_am(){

    //AM
    FILE *arq_mun_am;
    arq_mun_am = fopen("arq_mun_am.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&am, sizeof(struct municipio), 1, arq_mun_am);
        if(!(strcmp(nome_mun,am.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_am);

    return repetir_nome_mun;

}

int verificar_municipio_ba(){

    //BA
    FILE *arq_mun_ba;
    arq_mun_ba = fopen("arq_mun_ba.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&ba, sizeof(struct municipio), 1, arq_mun_ba);
        if(!(strcmp(nome_mun,ba.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_ba);

    return repetir_nome_mun;

}

int verificar_municipio_ce(){

    //CE
    FILE *arq_mun_ce;
    arq_mun_ce = fopen("arq_mun_ce.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&ce, sizeof(struct municipio), 1, arq_mun_ce);
        if(!(strcmp(nome_mun,ce.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_ce);

    return repetir_nome_mun;

}

int verificar_municipio_es(){

    //ES
    FILE *arq_mun_es;
    arq_mun_es = fopen("arq_mun_es.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&es, sizeof(struct municipio), 1, arq_mun_es);
        if(!(strcmp(nome_mun,es.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_es);

    return repetir_nome_mun;

}

int verificar_municipio_go(){

    //GO
    FILE *arq_mun_go;
    arq_mun_go = fopen("arq_mun_go.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&go, sizeof(struct municipio), 1, arq_mun_go);
        if(!(strcmp(nome_mun,go.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_go);

    return repetir_nome_mun;

}

int verificar_municipio_ma(){

    //MA
    FILE *arq_mun_ma;
    arq_mun_ma = fopen("arq_mun_ma.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&ma, sizeof(struct municipio), 1, arq_mun_ma);
        if(!(strcmp(nome_mun,ma.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_ma);

    return repetir_nome_mun;

}

int verificar_municipio_mt(){

    //MT
    FILE *arq_mun_mt;
    arq_mun_mt = fopen("arq_mun_mt.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&mt, sizeof(struct municipio), 1, arq_mun_mt);
        if(!(strcmp(nome_mun,mt.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_mt);

    return repetir_nome_mun;

}

int verificar_municipio_ms(){

    //MS
    FILE *arq_mun_ms;
    arq_mun_ms = fopen("arq_mun_ms.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&ms, sizeof(struct municipio), 1, arq_mun_ms);
        if(!(strcmp(nome_mun,ms.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_ms);

    return repetir_nome_mun;

}

int verificar_municipio_mg(){

    //MG
    FILE *arq_mun_mg;
    arq_mun_mg = fopen("arq_mun_mg.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&mg, sizeof(struct municipio), 1, arq_mun_mg);
        if(!(strcmp(nome_mun,mg.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_mg);

    return repetir_nome_mun;

}

int verificar_municipio_pa(){

    //PA
    FILE *arq_mun_pa;
    arq_mun_pa = fopen("arq_mun_pa.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&pa, sizeof(struct municipio), 1, arq_mun_pa);
        if(!(strcmp(nome_mun,pa.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_pa);

    return repetir_nome_mun;

}

int verificar_municipio_pb(){

    //PB
    FILE *arq_mun_pb;
    arq_mun_pb = fopen("arq_mun_pb.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&pb, sizeof(struct municipio), 1, arq_mun_pb);
        if(!(strcmp(nome_mun,pb.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_pb);

    return repetir_nome_mun;

}

int verificar_municipio_pr(){

    //PR
    FILE *arq_mun_pr;
    arq_mun_pr = fopen("arq_mun_pr.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&pr, sizeof(struct municipio), 1, arq_mun_pr);
        if(!(strcmp(nome_mun,pr.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_pr);

    return repetir_nome_mun;

}

int verificar_municipio_pe(){

    //PE
    FILE *arq_mun_pe;
    arq_mun_pe = fopen("arq_mun_pe.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&pe, sizeof(struct municipio), 1, arq_mun_pe);
        if(!(strcmp(nome_mun,pe.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_pe);

    return repetir_nome_mun;

}

int verificar_municipio_pi(){

    //PI
    FILE *arq_mun_pi;
    arq_mun_pi = fopen("arq_mun_pi.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&pi, sizeof(struct municipio), 1, arq_mun_pi);
        if(!(strcmp(nome_mun,pi.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_pi);

    return repetir_nome_mun;

}

int verificar_municipio_rj(){

    //RJ
    FILE *arq_mun_rj;
    arq_mun_rj = fopen("arq_mun_rj.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&rj, sizeof(struct municipio), 1, arq_mun_rj);
        if(!(strcmp(nome_mun,rj.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_rj);

    return repetir_nome_mun;

}

int verificar_municipio_rn(){

    //RN
    FILE *arq_mun_rn;
    arq_mun_rn = fopen("arq_mun_rn.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&rn, sizeof(struct municipio), 1, arq_mun_rn);
        if(!(strcmp(nome_mun,rn.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_rn);

    return repetir_nome_mun;

}

int verificar_municipio_rs(){

    //RS
    FILE *arq_mun_rs;
    arq_mun_rs = fopen("arq_mun_rs.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&rs, sizeof(struct municipio), 1, arq_mun_rs);
        if(!(strcmp(nome_mun,rs.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_rs);

    return repetir_nome_mun;

}

int verificar_municipio_ro(){

    //RO
    FILE *arq_mun_ro;
    arq_mun_ro = fopen("arq_mun_ro.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&ro, sizeof(struct municipio), 1, arq_mun_ro);
        if(!(strcmp(nome_mun,ro.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_ro);

    return repetir_nome_mun;

}

int verificar_municipio_rr(){

    //RR
    FILE *arq_mun_rr;
    arq_mun_rr = fopen("arq_mun_rr.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&rr, sizeof(struct municipio), 1, arq_mun_rr);
        if(!(strcmp(nome_mun,rr.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_rr);

    return repetir_nome_mun;

}

int verificar_municipio_sc(){

    //SC
    FILE *arq_mun_sc;
    arq_mun_sc = fopen("arq_mun_sc.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&sc, sizeof(struct municipio), 1, arq_mun_sc);
        if(!(strcmp(nome_mun,sc.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_sc);

    return repetir_nome_mun;

}

int verificar_municipio_sp(){

    //SP
    FILE *arq_mun_sp;
    arq_mun_sp = fopen("arq_mun_sp.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&sp, sizeof(struct municipio), 1, arq_mun_sp);
        if(!(strcmp(nome_mun,sp.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_sp);

    return repetir_nome_mun;

}

int verificar_municipio_se(){

    //SE
    FILE *arq_mun_se;
    arq_mun_se = fopen("arq_mun_se.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&se, sizeof(struct municipio), 1, arq_mun_se);
        if(!(strcmp(nome_mun,se.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_se);

    return repetir_nome_mun;

}

int verificar_municipio_to(){

    //SE
    FILE *arq_mun_to;
    arq_mun_to = fopen("arq_mun_to.bin","rb");

    repetir_nome_mun = 0;


    do {
        fread(&to, sizeof(struct municipio), 1, arq_mun_to);
        if(!(strcmp(nome_mun,to.nomeMunicipio))){
            printf("\nMUNICIPIO JA EXISTE, DIGITE NOVAMENTE: ");
            fgets(nome_mun,100,stdin);
            repetir_nome_mun = 1;
        }
    } while (!feof(arq_mun_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_mun_to);

    return repetir_nome_mun;

}









// As seguintes funcoes mostram a quantidade de municipios de cada Estado
void estados_municipios_ac(){ // Mostram quantos municipios restam no Estado

    // AC
    FILE *mun_ac; // Numeros de municipios que estao no arquivo no Estado

    mun_ac = fopen("mun_ac.bin","ab"); // Abre o arquivo

    ++num_munAC;
    fwrite(&num_munAC,sizeof(num_munAC),1,mun_ac);
    numMunicipios[0] -= 1;

    fclose(mun_ac);
}

void estados_municipios_al(){ // Mostram quantos municipios restam no Estado

    // AL
    FILE *mun_al; // Numeros de municipios que estao no arquivo no Estado

    mun_al = fopen("mun_al.bin","ab"); // Abre o arquivo

    ++num_munAL;
    fwrite(&num_munAL,sizeof(num_munAL),1,mun_al);
    numMunicipios[1] -= 1;

    fclose(mun_al);
}

void estados_municipios_ap(){ // Mostram quantos municipios restam no Estado

    // AP
    FILE *mun_ap; // Numeros de municipios que estao no arquivo no Estado

    mun_ap = fopen("mun_ap.bin","ab"); // Abre o arquivo

    ++num_munAP;
    fwrite(&num_munAP,sizeof(num_munAP),1,mun_ap);
    numMunicipios[2] -= 1;

    fclose(mun_ap);
}

void estados_municipios_am(){ // Mostram quantos municipios restam no Estado

    // AM
    FILE *mun_am; // Numeros de municipios que estao no arquivo no Estado

    mun_am = fopen("mun_am.bin","ab"); // Abre o arquivo

    ++num_munAM;
    fwrite(&num_munAM,sizeof(num_munAM),1,mun_am);
    numMunicipios[3] -= 1;

    fclose(mun_am);
}

void estados_municipios_ba(){ // Mostram quantos municipios restam no Estado

    // BA
    FILE *mun_ba; // Numeros de municipios que estao no arquivo no Estado

    mun_ba = fopen("mun_ba.bin","ab"); // Abre o arquivo

    ++num_munBA;
    fwrite(&num_munBA,sizeof(num_munBA),1,mun_ba);
    numMunicipios[4] -= 1;

    fclose(mun_ba);
}

void estados_municipios_ce(){ // Mostram quantos municipios restam no Estado

    // CE
    FILE *mun_ce; // Numeros de municipios que estao no arquivo no Estado

    mun_ce = fopen("mun_ce.bin","ab"); // Abre o arquivo

    ++num_munCE;
    fwrite(&num_munCE,sizeof(num_munCE),1,mun_ce);
    numMunicipios[5] -= 1;

    fclose(mun_ce);
}

void estados_municipios_es(){ // Mostram quantos municipios restam no Estado

    // ES
    FILE *mun_es; // Numeros de municipios que estao no arquivo no Estado

    mun_es = fopen("mun_es.bin","ab"); // Abre o arquivo

    ++num_munES;
    fwrite(&num_munES,sizeof(num_munES),1,mun_es);
    numMunicipios[6] -= 1;

    fclose(mun_es);
}

void estados_municipios_go(){ // Mostram quantos municipios restam no Estado

    // GO
    FILE *mun_go; // Numeros de municipios que estao no arquivo no Estado

    mun_go = fopen("mun_go.bin","ab"); // Abre o arquivo

    ++num_munGO;
    fwrite(&num_munGO,sizeof(num_munGO),1,mun_go);
    numMunicipios[7] -= 1;

    fclose(mun_go);
}

void estados_municipios_ma(){ // Mostram quantos municipios restam no Estado

    // MA
    FILE *mun_ma; // Numeros de municipios que estao no arquivo no Estado

    mun_ma = fopen("mun_ma.bin","ab"); // Abre o arquivo

    ++num_munMA;
    fwrite(&num_munMA,sizeof(num_munMA),1,mun_ma);
    numMunicipios[8] -= 1;

    fclose(mun_ma);
}

void estados_municipios_mt(){ // Mostram quantos municipios restam no Estado

    // MT
    FILE *mun_mt; // Numeros de municipios que estao no arquivo no Estado

    mun_mt = fopen("mun_mt.bin","ab"); // Abre o arquivo

    ++num_munMT;
    fwrite(&num_munMT,sizeof(num_munMT),1,mun_mt);
    numMunicipios[9] -= 1;

    fclose(mun_mt);
}

void estados_municipios_ms(){ // Mostram quantos municipios restam no Estado

    // MS
    FILE *mun_ms; // Numeros de municipios que estao no arquivo no Estado

    mun_ms = fopen("mun_ms.bin","ab"); // Abre o arquivo

    ++num_munMS;
    fwrite(&num_munMS,sizeof(num_munMS),1,mun_ms);
    numMunicipios[10] -= 1;

    fclose(mun_ms);
}

void estados_municipios_mg(){ // Mostram quantos municipios restam no Estado

    // MG
    FILE *mun_mg; // Numeros de municipios que estao no arquivo no Estado

    mun_mg = fopen("mun_mg.bin","ab"); // Abre o arquivo

    ++num_munMG;
    fwrite(&num_munMG,sizeof(num_munMG),1,mun_mg);
    numMunicipios[11] -= 1;

    fclose(mun_mg);
}

void estados_municipios_pa(){ // Mostram quantos municipios restam no Estado

    // PA
    FILE *mun_pa; // Numeros de municipios que estao no arquivo no Estado

    mun_pa = fopen("mun_pa.bin","ab"); // Abre o arquivo

    ++num_munPA;
    fwrite(&num_munPA,sizeof(num_munPA),1,mun_pa);
    numMunicipios[12] -= 1;

    fclose(mun_pa);
}

void estados_municipios_pb(){ // Mostram quantos municipios restam no Estado

    // PB
    FILE *mun_pb; // Numeros de municipios que estao no arquivo no Estado

    mun_pb = fopen("mun_pb.bin","ab"); // Abre o arquivo

    ++num_munPB;
    fwrite(&num_munPB,sizeof(num_munPB),1,mun_pb);
    numMunicipios[13] -= 1;

    fclose(mun_pb);
}

void estados_municipios_pr(){ // Mostram quantos municipios restam no Estado

    // PR
    FILE *mun_pr; // Numeros de municipios que estao no arquivo no Estado

    mun_pr = fopen("mun_pr.bin","ab"); // Abre o arquivo

    ++num_munPR;
    fwrite(&num_munPR,sizeof(num_munPR),1,mun_pr);
    numMunicipios[14] -= 1;

    fclose(mun_pr);
}

void estados_municipios_pe(){ // Mostram quantos municipios restam no Estado

    // PE
    FILE *mun_pe; // Numeros de municipios que estao no arquivo no Estado

    mun_pe = fopen("mun_pe.bin","ab"); // Abre o arquivo

    ++num_munPE;
    fwrite(&num_munPE,sizeof(num_munPE),1,mun_pe);
    numMunicipios[15] -= 1;

    fclose(mun_pe);
}

void estados_municipios_pi(){ // Mostram quantos municipios restam no Estado

    // PI
    FILE *mun_pi; // Numeros de municipios que estao no arquivo no Estado

    mun_pi = fopen("mun_pi.bin","ab"); // Abre o arquivo

    ++num_munPI;
    fwrite(&num_munPI,sizeof(num_munPI),1,mun_pi);
    numMunicipios[16] -= 1;

    fclose(mun_pi);
}

void estados_municipios_rj(){ // Mostram quantos municipios restam no Estado

    // RJ
    FILE *mun_rj; // Numeros de municipios que estao no arquivo no Estado

    mun_rj = fopen("mun_rj.bin","ab"); // Abre o arquivo

    ++num_munRJ;
    fwrite(&num_munRJ,sizeof(num_munRJ),1,mun_rj);
    numMunicipios[17] -= 1;

    fclose(mun_rj);
}

void estados_municipios_rn(){ // Mostram quantos municipios restam no Estado

    // RN
    FILE *mun_rn; // Numeros de municipios que estao no arquivo no Estado

    mun_rn = fopen("mun_rn.bin","ab"); // Abre o arquivo

    ++num_munRN;
    fwrite(&num_munRN,sizeof(num_munRN),1,mun_rn);
    numMunicipios[18] -= 1;

    fclose(mun_rn);
}

void estados_municipios_rs(){ // Mostram quantos municipios restam no Estado

    // RS
    FILE *mun_rs; // Numeros de municipios que estao no arquivo no Estado

    mun_rs = fopen("mun_rs.bin","ab"); // Abre o arquivo

    ++num_munRS;
    fwrite(&num_munRS,sizeof(num_munRS),1,mun_rs);
    numMunicipios[19] -= 1;

    fclose(mun_rs);
}

void estados_municipios_ro(){ // Mostram quantos municipios restam no Estado

    // RO
    FILE *mun_ro; // Numeros de municipios que estao no arquivo no Estado

    mun_ro = fopen("mun_ro.bin","ab"); // Abre o arquivo

    ++num_munRO;
    fwrite(&num_munRO,sizeof(num_munRO),1,mun_ro);
    numMunicipios[20] -= 1;

    fclose(mun_ro);
}

void estados_municipios_rr(){ // Mostram quantos municipios restam no Estado

    // RR
    FILE *mun_rr; // Numeros de municipios que estao no arquivo no Estado

    mun_rr = fopen("mun_rr.bin","ab"); // Abre o arquivo

    ++num_munRR;
    fwrite(&num_munRR,sizeof(num_munRR),1,mun_rr);
    numMunicipios[21] -= 1;

    fclose(mun_rr);
}

void estados_municipios_sc(){ // Mostram quantos municipios restam no Estado

    // SC
    FILE *mun_sc; // Numeros de municipios que estao no arquivo no Estado

    mun_sc = fopen("mun_sc.bin","ab"); // Abre o arquivo

    ++num_munSC;
    fwrite(&num_munSC,sizeof(num_munSC),1,mun_sc);
    numMunicipios[22] -= 1;

    fclose(mun_sc);
}

void estados_municipios_sp(){ // Mostram quantos municipios restam no Estado

    // SP
    FILE *mun_sp; // Numeros de municipios que estao no arquivo no Estado

    mun_sp = fopen("mun_sp.bin","ab"); // Abre o arquivo

    ++num_munSP;
    fwrite(&num_munSP,sizeof(num_munSP),1,mun_sp);
    numMunicipios[23] -= 1;

    fclose(mun_sp);
}

void estados_municipios_se(){ // Mostram quantos municipios restam no Estado

    // SE
    FILE *mun_se; // Numeros de municipios que estao no arquivo no Estado

    mun_se = fopen("mun_se.bin","ab"); // Abre o arquivo

    ++num_munSE;
    fwrite(&num_munSE,sizeof(num_munSE),1,mun_se);
    numMunicipios[24] -= 1;

    fclose(mun_se);
}

void estados_municipios_to(){ // Mostram quantos municipios restam no Estado

    // TO
    FILE *mun_to; // Numeros de municipios que estao no arquivo no Estado

    mun_to = fopen("mun_to.bin","ab"); // Abre o arquivo

    ++num_munTO;
    fwrite(&num_munTO,sizeof(num_munTO),1,mun_to);
    numMunicipios[25] -= 1;

    fclose(mun_to);

}


// Mostra a quantidade de municipios ao iniciar o programa
void atualizar_muni(){

    int num_mun_aux;

    // AC
    FILE *mun_ac;
    mun_ac = fopen("mun_ac.bin","rb");


    if(mun_ac != NULL){
        while(fread(&num_munAC,sizeof(num_munAC),1,mun_ac)){
            num_mun_aux = num_munAC;
        }
        num_munAC = num_mun_aux;

        numMunicipios[0] -= num_munAC;
    }
    fclose(mun_ac);

    // AL
    FILE *mun_al;
    mun_al = fopen("mun_al.bin","rb");


    if(mun_al != NULL){
        while(fread(&num_munAL,sizeof(num_munAL),1,mun_al)){
            num_mun_aux = num_munAL;
        }
        num_munAL = num_mun_aux;

        numMunicipios[1] -= num_munAL;
    }
    fclose(mun_al);

    // AP
    FILE *mun_ap;
    mun_ap = fopen("mun_ap.bin","rb");


    if(mun_ap != NULL){
        while(fread(&num_munAP,sizeof(num_munAP),1,mun_ap)){
            num_mun_aux = num_munAP;
        }
        num_munAP = num_mun_aux;

        numMunicipios[2] -= num_munAP;
    }
    fclose(mun_ap);

    // AM
    FILE *mun_am;
    mun_am = fopen("mun_am.bin","rb");


    if(mun_am != NULL){
        while(fread(&num_munAM,sizeof(num_munAM),1,mun_am)){
            num_mun_aux = num_munAM;
        }
        num_munAM = num_mun_aux;

        numMunicipios[3] -= num_munAM;
    }
    fclose(mun_am);

    // BA
    FILE *mun_ba;
    mun_ba = fopen("mun_ba.bin","rb");


    if(mun_ba != NULL){
        while(fread(&num_munBA,sizeof(num_munBA),1,mun_ba)){
            num_mun_aux = num_munBA;
        }
        num_munBA = num_mun_aux;

        numMunicipios[4] -= num_munBA;
    }
    fclose(mun_ba);

    // CE
    FILE *mun_ce;
    mun_ce = fopen("mun_ce.bin","rb");


    if(mun_ce != NULL){
        while(fread(&num_munCE,sizeof(num_munCE),1,mun_ce)){
            num_mun_aux = num_munCE;
        }
        num_munCE = num_mun_aux;

        numMunicipios[5] -= num_munCE;
    }
    fclose(mun_ce);

    // ES
    FILE *mun_es;
    mun_es = fopen("mun_es.bin","rb");


    if(mun_es != NULL){
        while(fread(&num_munES,sizeof(num_munES),1,mun_es)){
            num_mun_aux = num_munES;
        }
        num_munES = num_mun_aux;

        numMunicipios[6] -= num_munES;
    }
    fclose(mun_es);

    // GO
    FILE *mun_go;
    mun_go = fopen("mun_go.bin","rb");


    if(mun_go != NULL){
        while(fread(&num_munGO,sizeof(num_munGO),1,mun_go)){
            num_mun_aux = num_munGO;
        }
        num_munGO = num_mun_aux;

        numMunicipios[7] -= num_munGO;
    }
    fclose(mun_go);

    // MA
    FILE *mun_ma;
    mun_ma = fopen("mun_ma.bin","rb");


    if(mun_ma != NULL){
        while(fread(&num_munMA,sizeof(num_munMA),1,mun_ma)){
            num_mun_aux = num_munMA;
        }
        num_munMA = num_mun_aux;

        numMunicipios[8] -= num_munMA;
    }
    fclose(mun_ma);

    // MT
    FILE *mun_mt;
    mun_mt = fopen("mun_mt.bin","rb");


    if(mun_mt != NULL){
        while(fread(&num_munMT,sizeof(num_munMT),1,mun_mt)){
            num_mun_aux = num_munMT;
        }
        num_munMT = num_mun_aux;;

        numMunicipios[9] -= num_munMT;
    }
    fclose(mun_mt);

    // MS
    FILE *mun_ms;
    mun_ms = fopen("mun_ms.bin","rb");


    if(mun_ms != NULL){
        while(fread(&num_munMS,sizeof(num_munMS),1,mun_ms)){
            num_mun_aux = num_munMS;
        }
        num_munMS = num_mun_aux;

        numMunicipios[10] -= num_munMS;
    }
    fclose(mun_ms);

    // MG
    FILE *mun_mg;
    mun_mg = fopen("mun_mg.bin","rb");


    if(mun_mg != NULL){
        while(fread(&num_munMG,sizeof(num_munMG),1,mun_mg)){
            num_mun_aux = num_munMG;
        }
        num_munMG = num_mun_aux;

        numMunicipios[11] -= num_munMG;
    }
    fclose(mun_mg);

    // PA
    FILE *mun_pa;
    mun_pa = fopen("mun_pa.bin","rb");


    if(mun_pa != NULL){
        while(fread(&num_munPA,sizeof(num_munPA),1,mun_pa)){
            num_mun_aux = num_munPA;
        }
        num_munPA = num_mun_aux;

        numMunicipios[12] -= num_munPA;
    }
    fclose(mun_pa);

    // PB
    FILE *mun_pb;
    mun_pb = fopen("mun_pb.bin","rb");


    if(mun_pb != NULL){
        while(fread(&num_munPB,sizeof(num_munPB),1,mun_pb)){
            num_mun_aux = num_munPB;
        }
        num_munPB = num_mun_aux;

        numMunicipios[13] -= num_munPB;
    }
    fclose(mun_pb);

    // PR
    FILE *mun_pr;
    mun_pr = fopen("mun_pr.bin","rb");


    if(mun_pr != NULL){
        while(fread(&num_munPR,sizeof(num_munPR),1,mun_pr)){
            num_mun_aux = num_munPR;
        }
        num_munPR = num_mun_aux;

        numMunicipios[14] -= num_munPR;
    }
    fclose(mun_pr);

    // PE
    FILE *mun_pe;
    mun_pe = fopen("mun_pe.bin","rb");


    if(mun_pe != NULL){
        while(fread(&num_munPE,sizeof(num_munPE),1,mun_pe)){
            num_mun_aux = num_munPE;
        }
        num_munPE = num_mun_aux;

        numMunicipios[15] -= num_munPE;
    }
    fclose(mun_pe);

    // PI
    FILE *mun_pi;
    mun_pi = fopen("mun_pi.bin","rb");


    if(mun_pi != NULL){
        while(fread(&num_munPI,sizeof(num_munPI),1,mun_pi)){
            num_mun_aux = num_munPI;
        }
        num_munPI = num_mun_aux;

        numMunicipios[16] -= num_munPI;
    }
    fclose(mun_pi);

    // RJ
    FILE *mun_rj;
    mun_rj = fopen("mun_rj.bin","rb");


    if(mun_rj != NULL){
        while(fread(&num_munRJ,sizeof(num_munRJ),1,mun_rj)){
            num_mun_aux = num_munRJ;
        }
        num_munRJ = num_mun_aux;

        numMunicipios[17] -= num_munRJ;
    }
    fclose(mun_rj);

    // RN
    FILE *mun_rn;
    mun_rn = fopen("mun_rn.bin","rb");


    if(mun_rn != NULL){
        while(fread(&num_munRN,sizeof(num_munRN),1,mun_rn)){
            num_mun_aux = num_munRN;
        }
        num_munRN = num_mun_aux;

        numMunicipios[18] -= num_munRN;
    }
    fclose(mun_rn);

    // RS
    FILE *mun_rs;
    mun_rs = fopen("mun_rs.bin","rb");


    if(mun_rs != NULL){
        while(fread(&num_munRS,sizeof(num_munRS),1,mun_rs)){
            num_mun_aux = num_munRS;
        }
        num_munRS = num_mun_aux;

        numMunicipios[19] -= num_munRS;
    }
    fclose(mun_rs);

    // RO
    FILE *mun_ro;
    mun_ro = fopen("mun_ro.bin","rb");


    if(mun_ro != NULL){
        while(fread(&num_munRO,sizeof(num_munRO),1,mun_ro)){
            num_mun_aux = num_munRO;
        }
        num_munRO = num_mun_aux;

        numMunicipios[20] -= num_munRO;
    }
    fclose(mun_ro);

    // RR
    FILE *mun_rr;
    mun_rr = fopen("mun_rr.bin","rb");


    if(mun_rr != NULL){
        while(fread(&num_munRR,sizeof(num_munRR),1,mun_rr)){
            num_mun_aux = num_munRR;
        }
        num_munRR = num_mun_aux;

        numMunicipios[21] -= num_munRR;
    }
    fclose(mun_rr);

    // SC
    FILE *mun_sc;
    mun_sc = fopen("mun_sc.bin","rb");


    if(mun_sc != NULL){
        while(fread(&num_munSC,sizeof(num_munSC),1,mun_sc)){
            num_mun_aux = num_munSC;
        }
        num_munSC = num_mun_aux;

        numMunicipios[22] -= num_munSC;
    }
    fclose(mun_sc);

    // SP
    FILE *mun_sp;
    mun_sp = fopen("mun_sp.bin","rb");


    if(mun_sp != NULL){
        while(fread(&num_munSP,sizeof(num_munSP),1,mun_sp)){
            num_mun_aux = num_munSP;
        }
        num_munSP = num_mun_aux;

        numMunicipios[23] -= num_munSP;
    }
    fclose(mun_sp);

    // SE
    FILE *mun_se;
    mun_se = fopen("mun_se.bin","rb");


    if(mun_se != NULL){
        while(fread(&num_munSE,sizeof(num_munSE),1,mun_se)){
            num_mun_aux = num_munSE;
        }
        num_munSE = num_mun_aux;

        numMunicipios[24] -= num_munSE;
    }
    fclose(mun_se);

    // TO
    FILE *mun_to;
    mun_to = fopen("mun_to.bin","rb");


    if(mun_to != NULL){
        while(fread(&num_munTO,sizeof(num_munTO),1,mun_to)){
            num_mun_aux = num_munTO;
        }
        num_munTO = num_mun_aux;

        numMunicipios[25] -= num_munTO;
    }
    fclose(mun_to);

}


//Cadastrar municipios
void func_cad_mun(){

    char cadMunicipio[3];
    int tamStr,i;


    // Esse comando faz com que nao tenha novos numeros aleatorios a cada nova execucao do programa.
    srand( (unsigned)time(NULL) );

    printf("\nMUNICIPIOS RESTANTE PARA O CADASTRO NO TRE: \n");
    estados_Strings();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro do municipio: ");
    fgets(cadMunicipio,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(cadMunicipio);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        cadMunicipio[i] =toupper(cadMunicipio[i]);  // para maiuscula
    }

    /* Aqui verifica qual a UF foi digitada, a partir disso, haverá uma condição para qual
     * Estado será cadastrado (No caso vai ser cadastrado por meio de uma struct), se uma UF for digitado errado
     * havera uma mensagem relatado que a UF não existe...
     *
     * O comando rand() retorna um numero aleatorio (no caso o codigo do municipio)
     *
     *  */
    if(!(strcmp(cadMunicipio,"AC"))){

        FILE *arq_mun_ac; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[0] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_ac = fopen("arq_mun_ac.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_ac != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_ac();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&ac.eleitoresMunicipio);
            ac.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_ac);

            arq_mun_ac = fopen("arq_mun_ac.bin","ab");

            strcpy(ac.nomeMunicipio,nome_mun);


            fwrite(&ac, sizeof(struct municipio),1,arq_mun_ac); //
            estados_municipios_ac();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",ac.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",ac.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",ac.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[0]);
            linha();
            fclose(arq_mun_ac);
        }


    }
    else if(!(strcmp(cadMunicipio,"AL"))){

        FILE *arq_mun_al; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[1] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_al = fopen("arq_mun_al.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_al != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_al();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&al.eleitoresMunicipio);
            al.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_al);

            arq_mun_al = fopen("arq_mun_al.bin","ab");

            strcpy(al.nomeMunicipio,nome_mun);


            fwrite(&al, sizeof(struct municipio),1,arq_mun_al); //
            estados_municipios_al();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",al.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",al.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",al.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[1]);
            linha();
            fclose(arq_mun_al);
        }


    }
    else if(!(strcmp(cadMunicipio,"AP"))){

        FILE *arq_mun_ap; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[2] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_ap = fopen("arq_mun_ap.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_ap != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_ap();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&ap.eleitoresMunicipio);
            ap.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_ap);

            arq_mun_ap = fopen("arq_mun_ap.bin","ab");

            strcpy(ap.nomeMunicipio,nome_mun);


            fwrite(&ap, sizeof(struct municipio),1,arq_mun_ap); //
            estados_municipios_ap();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",ap.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",ap.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",ap.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[2]);
            linha();
            fclose(arq_mun_ap);
        }


    }
    else if(!(strcmp(cadMunicipio,"AM"))){

        FILE *arq_mun_am; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[3] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_am = fopen("arq_mun_am.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_am != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_am();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&am.eleitoresMunicipio);
            am.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_am);

            arq_mun_am = fopen("arq_mun_am.bin","ab");

            strcpy(am.nomeMunicipio,nome_mun);


            fwrite(&am, sizeof(struct municipio),1,arq_mun_am); //
            estados_municipios_am();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",am.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",am.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",am.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[3]);
            linha();
            fclose(arq_mun_am);
        }


    }
    else if(!(strcmp(cadMunicipio,"BA"))){

        FILE *arq_mun_ba; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[4] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_ba = fopen("arq_mun_am.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_ba != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_ba();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&ba.eleitoresMunicipio);
            ba.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_ba);

            arq_mun_ba = fopen("arq_mun_ba.bin","ab");

            strcpy(ba.nomeMunicipio,nome_mun);


            fwrite(&ba, sizeof(struct municipio),1,arq_mun_ba); //
            estados_municipios_ba();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",ba.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",ba.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",ba.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[4]);
            linha();
            fclose(arq_mun_ba);
        }


    }
    else if(!(strcmp(cadMunicipio,"CE"))){

        FILE *arq_mun_ce; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[5] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_ce = fopen("arq_mun_ce.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_ce != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_ce();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&ce.eleitoresMunicipio);
            ce.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_ce);

            arq_mun_ce = fopen("arq_mun_ce.bin","ab");

            strcpy(ce.nomeMunicipio,nome_mun);


            fwrite(&ce, sizeof(struct municipio),1,arq_mun_ce); //
            estados_municipios_ce();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",ce.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",ce.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",ce.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[5]);
            linha();
            fclose(arq_mun_ce);
        }


    }
    else if(!(strcmp(cadMunicipio,"ES"))){

        FILE *arq_mun_es; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[6] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_es = fopen("arq_mun_es.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_es != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_es();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&es.eleitoresMunicipio);
            es.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_es);

            arq_mun_es = fopen("arq_mun_es.bin","ab");

            strcpy(es.nomeMunicipio,nome_mun);


            fwrite(&es, sizeof(struct municipio),1,arq_mun_es); //
            estados_municipios_es();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",es.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",es.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",es.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[6]);
            linha();
            fclose(arq_mun_es);
        }


    }
    else if(!(strcmp(cadMunicipio,"GO"))){

        FILE *arq_mun_go; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[7] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_go = fopen("arq_mun_go.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_go != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_go();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&go.eleitoresMunicipio);
            go.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_go);

            arq_mun_go = fopen("arq_mun_go.bin","ab");

            strcpy(go.nomeMunicipio,nome_mun);


            fwrite(&go, sizeof(struct municipio),1,arq_mun_go); //
            estados_municipios_go();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",go.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",go.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",go.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[7]);
            linha();
            fclose(arq_mun_go);
        }


    }
    else if(!(strcmp(cadMunicipio,"MA"))){

        FILE *arq_mun_ma; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[8] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_ma = fopen("arq_mun_ma.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_ma != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_ma();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&ma.eleitoresMunicipio);
            ma.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_ma);

            arq_mun_ma = fopen("arq_mun_ma.bin","ab");

            strcpy(ma.nomeMunicipio,nome_mun);


            fwrite(&ma, sizeof(struct municipio),1,arq_mun_ma); //
            estados_municipios_ma();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",ma.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",ma.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",ma.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[8]);
            linha();
            fclose(arq_mun_ma);
        }


    }
    else if(!(strcmp(cadMunicipio,"MT"))){

        FILE *arq_mun_mt; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[9] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_mt = fopen("arq_mun_mt.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_mt != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_mt();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&mt.eleitoresMunicipio);
            mt.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_mt);

            arq_mun_mt = fopen("arq_mun_mt.bin","ab");

            strcpy(mt.nomeMunicipio,nome_mun);


            fwrite(&mt, sizeof(struct municipio),1,arq_mun_mt); //
            estados_municipios_mt();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",mt.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",mt.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",mt.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[9]);
            linha();
            fclose(arq_mun_mt);
        }


    }
    else if(!(strcmp(cadMunicipio,"MS"))){

        FILE *arq_mun_ms; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[10] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_ms = fopen("arq_mun_ms.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_ms != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_ms();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&ms.eleitoresMunicipio);
            ms.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_ms);

            arq_mun_ms = fopen("arq_mun_ms.bin","ab");

            strcpy(ms.nomeMunicipio,nome_mun);


            fwrite(&ms, sizeof(struct municipio),1,arq_mun_ms); //
            estados_municipios_ms();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",ms.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",ms.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",ms.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[10]);
            linha();
            fclose(arq_mun_ms);
        }


    }
    else if(!(strcmp(cadMunicipio,"MG"))){

        FILE *arq_mun_mg; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[11] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_mg = fopen("arq_mun_mg.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_mg != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_mg();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&mg.eleitoresMunicipio);
            mg.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_mg);

            arq_mun_mg = fopen("arq_mun_mg.bin","ab");

            strcpy(mg.nomeMunicipio,nome_mun);


            fwrite(&mg, sizeof(struct municipio),1,arq_mun_mg); //
            estados_municipios_mg();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",mg.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",mg.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",mg.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[11]);
            linha();
            fclose(arq_mun_mg);
        }


    }
    else if(!(strcmp(cadMunicipio,"PA"))){

        FILE *arq_mun_pa; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[12] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_pa = fopen("arq_mun_pa.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_pa != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_pa();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&pa.eleitoresMunicipio);
            pa.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_pa);

            arq_mun_pa = fopen("arq_mun_pa.bin","ab");

            strcpy(pa.nomeMunicipio,nome_mun);


            fwrite(&pa, sizeof(struct municipio),1,arq_mun_pa); //
            estados_municipios_pa();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",pa.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",pa.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",pa.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[12]);
            linha();
            fclose(arq_mun_pa);
        }


    }
    else if(!(strcmp(cadMunicipio,"PB"))){

        FILE *arq_mun_pb; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[13] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_pb = fopen("arq_mun_pb.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_pb != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_pb();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&pb.eleitoresMunicipio);
            pb.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_pb);

            arq_mun_pb = fopen("arq_mun_pb.bin","ab");

            strcpy(pb.nomeMunicipio,nome_mun);


            fwrite(&pb, sizeof(struct municipio),1,arq_mun_pb); //
            estados_municipios_pb();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",pb.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",pb.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",pb.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[13]);
            linha();
            fclose(arq_mun_pb);
        }


    }
    else if(!(strcmp(cadMunicipio,"PR"))){

        FILE *arq_mun_pr; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[14] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_pr = fopen("arq_mun_pr.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_pr != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_pr();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&pr.eleitoresMunicipio);
            pr.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_pr);

            arq_mun_pr = fopen("arq_mun_pr.bin","ab");

            strcpy(pr.nomeMunicipio,nome_mun);


            fwrite(&pr, sizeof(struct municipio),1,arq_mun_pr); //
            estados_municipios_pr();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",pr.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",pr.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",pr.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[14]);
            linha();
            fclose(arq_mun_pr);
        }


    }
    else if(!(strcmp(cadMunicipio,"PE"))){

        FILE *arq_mun_pe; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[15] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_pe = fopen("arq_mun_pr.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_pe != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_pe();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&pe.eleitoresMunicipio);
            pe.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_pe);

            arq_mun_pe = fopen("arq_mun_pe.bin","ab");

            strcpy(pe.nomeMunicipio,nome_mun);


            fwrite(&pe, sizeof(struct municipio),1,arq_mun_pe); //
            estados_municipios_pe();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",pe.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",pe.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",pe.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[15]);
            linha();
            fclose(arq_mun_pe);
        }


    }
    else if(!(strcmp(cadMunicipio,"PI"))){

        FILE *arq_mun_pi; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[16] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_pi = fopen("arq_mun_pi.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_pi != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_pi();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&pi.eleitoresMunicipio);
            pi.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_pi);

            arq_mun_pi = fopen("arq_mun_pi.bin","ab");

            strcpy(pi.nomeMunicipio,nome_mun);


            fwrite(&pi, sizeof(struct municipio),1,arq_mun_pi); //
            estados_municipios_pi();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",pi.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",pi.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",pi.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[16]);
            linha();
            fclose(arq_mun_pi);
        }


    }
    else if(!(strcmp(cadMunicipio,"RJ"))){

        FILE *arq_mun_rj; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[17] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_rj = fopen("arq_mun_rj.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_rj != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_rj();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&rj.eleitoresMunicipio);
            rj.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_rj);

            arq_mun_rj = fopen("arq_mun_rj.bin","ab");

            strcpy(rj.nomeMunicipio,nome_mun);


            fwrite(&rj, sizeof(struct municipio),1,arq_mun_rj); //
            estados_municipios_rj();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",rj.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",rj.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",rj.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[17]);
            linha();
            fclose(arq_mun_rj);
        }


    }
    else if(!(strcmp(cadMunicipio,"RN"))){

        FILE *arq_mun_rn; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[18] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_rn = fopen("arq_mun_rn.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_rn != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_rn();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&rn.eleitoresMunicipio);
            rn.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_rn);

            arq_mun_rn = fopen("arq_mun_rn.bin","ab");

            strcpy(rn.nomeMunicipio,nome_mun);


            fwrite(&rn, sizeof(struct municipio),1,arq_mun_rn); //
            estados_municipios_rn();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",rn.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",rn.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",rn.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[18]);
            linha();
            fclose(arq_mun_rn);
        }


    }
    else if(!(strcmp(cadMunicipio,"RS"))){

        FILE *arq_mun_rs; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[19] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_rs = fopen("arq_mun_rs.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_rs != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_rs();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&rs.eleitoresMunicipio);
            rs.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_rs);

            arq_mun_rs = fopen("arq_mun_rs.bin","ab");

            strcpy(rs.nomeMunicipio,nome_mun);


            fwrite(&rs, sizeof(struct municipio),1,arq_mun_rs); //
            estados_municipios_rs();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",rs.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",rs.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",rs.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[19]);
            linha();
            fclose(arq_mun_rs);
        }


    }
    else if(!(strcmp(cadMunicipio,"RO"))){

        FILE *arq_mun_ro; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[20] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_ro = fopen("arq_mun_ro.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_ro != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_ro();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&ro.eleitoresMunicipio);
            ro.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_ro);

            arq_mun_ro = fopen("arq_mun_ro.bin","ab");

            strcpy(ro.nomeMunicipio,nome_mun);


            fwrite(&ro, sizeof(struct municipio),1,arq_mun_ro); //
            estados_municipios_ro();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",ro.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",ro.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",ro.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[20]);
            linha();
            fclose(arq_mun_ro);
        }


    }
    else if(!(strcmp(cadMunicipio,"RR"))){

        FILE *arq_mun_rr; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[21] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_rr = fopen("arq_mun_rr.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_rr != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_rr();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&rr.eleitoresMunicipio);
            rr.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_rr);

            arq_mun_rr = fopen("arq_mun_rr.bin","ab");

            strcpy(rr.nomeMunicipio,nome_mun);


            fwrite(&rr, sizeof(struct municipio),1,arq_mun_rr); //
            estados_municipios_rr();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",rr.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",rr.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",rr.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[21]);
            linha();
            fclose(arq_mun_rr);
        }


    }
    else if(!(strcmp(cadMunicipio,"SC"))){

        FILE *arq_mun_sc; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[22] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_sc = fopen("arq_mun_sc.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_sc != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_sc();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&sc.eleitoresMunicipio);
            sc.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_sc);

            arq_mun_sc = fopen("arq_mun_sc.bin","ab");

            strcpy(sc.nomeMunicipio,nome_mun);


            fwrite(&sc, sizeof(struct municipio),1,arq_mun_sc); //
            estados_municipios_sc();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",sc.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",sc.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",sc.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[22]);
            linha();
            fclose(arq_mun_sc);
        }


    }
    else if(!(strcmp(cadMunicipio,"SP"))){

        FILE *arq_mun_sp; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[23] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_sp = fopen("arq_mun_sp.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_sp != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_sp();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&sp.eleitoresMunicipio);
            sp.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_sp);

            arq_mun_sp = fopen("arq_mun_sc.bin","ab");

            strcpy(sp.nomeMunicipio,nome_mun);


            fwrite(&sp, sizeof(struct municipio),1,arq_mun_sp); //
            estados_municipios_sp();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",sp.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",sp.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",sp.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[23]);
            linha();
            fclose(arq_mun_sp);
        }


    }
    else if(!(strcmp(cadMunicipio,"SE"))){

        FILE *arq_mun_se; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[24] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_se = fopen("arq_mun_se.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_se != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_se();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&se.eleitoresMunicipio);
            se.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_se);

            arq_mun_se = fopen("arq_mun_se.bin","ab");

            strcpy(se.nomeMunicipio,nome_mun);


            fwrite(&se, sizeof(struct municipio),1,arq_mun_se); //
            estados_municipios_se();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",se.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",se.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",se.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[24]);
            linha();
            fclose(arq_mun_se);
        }


    }
    else if(!(strcmp(cadMunicipio,"TO"))){

        FILE *arq_mun_to; // Numeros de nunicipios que estao no arquivo no Estado

        printf("\nINSCRICAO DE UM MUNICIPIO NO ESTADO: %s",cadMunicipio);
        printf("\n");

        if(numMunicipios[25] == 0){
            printf("\nTODOS OS MUNICIPIOS DO(A) (%s) JA FORAM PREENCHIDOS",cadMunicipio);
        }else{

            arq_mun_to = fopen("arq_mun_to.bin","rb");

            printf("\nDIGITE O NOME DO MUNICIPIO: ");
            getchar();
            fgets(nome_mun,100,stdin);


            if(arq_mun_to != NULL){
                do{
                    repetir_nome_mun = verificar_municipio_to();
                }while(repetir_nome_mun == 1);
            }

            printf("\nDIGITE A QUANTIDADE DE ELEITORES NO MUNICIPIO:  ");
            scanf("%ld",&to.eleitoresMunicipio);
            to.codigoMunicipio = 10000 + (rand() % 99999); // Adicina um código aleatório para o municipio

            fclose(arq_mun_to);

            arq_mun_to = fopen("arq_mun_to.bin","ab");

            strcpy(to.nomeMunicipio,nome_mun);


            fwrite(&to, sizeof(struct municipio),1,arq_mun_to); //
            estados_municipios_to();

            linha();
            printf("NOME DO MUNICIPIO: %s\n",to.nomeMunicipio);
            printf("ELEITORES NO MUNICIPIO: %ld\n",to.eleitoresMunicipio);
            printf("CODIGO DO MUNICIPIO: %ld\n",to.codigoMunicipio);

            printf("\nQuantidade de Municipios restantes no (%s): %d",cadMunicipio,numMunicipios[25]);
            linha();
            fclose(arq_mun_to);
        }


    }
    else{
        printf("########## OPACAO INVALIDA ##########\n");
    }

}