#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * TRABALHO FINAL DE INTRODUCAO A PROGRAMACAO
 *
 * DUPLA:
 *
 * Paulo Victor Santos Magalhães
 * Caio Farias Soares
 *
 */

long int var_proc_vote_titulo;

int v_titulo;
int v_titulo_dado;

long int votos_cont = 0;
int aux;
int aux2 = 0;

const char *estados[30];

long int verificar_voto;

struct municipio{
    long int eleitoresMunicipio; // Numeros de eleitores de cada municipio
    char nomeMunicipio[100]; // Nome do municipio
    long int codigoMunicipio; // Codigo unico para cada municipio
}ac,al,ap,am,ba,ce,es,go,ma,mt,ms,mg,pa,pb,pr,pe,pi,rj,rn,rs,ro,rr,sc,sp,se,to;

struct info_zona{
    char endereco_zona[100];
    char telefone_zona[100];
    char juiz_zona[100];
    char chefe_zona[100];
    char municipio_zona[100];
    int numero_zona;

}ac_zona,al_zona,ap_zona,am_zona,ba_zona,ce_zona,es_zona,go_zona,ma_zona,mt_zona,ms_zona,mg_zona,pa_zona,pb_zona,pr_zona,pe_zona,pi_zona,rj_zona,rn_zona,rs_zona,ro_zona,rr_zona,sc_zona,sp_zona,se_zona,to_zona;

struct info_secao{

    char cep_secao[20];
    char bairro_secao[100];
    int num_zona_secao;
    char local_secao[100];
    int num_secao;
    int cod_local_secao;
    long int aptos_votar_secao;

}ac_secao,al_secao,ap_secao,am_secao,ba_secao,ce_secao,es_secao,go_secao,ma_secao,mt_secao,ms_secao,mg_secao,pa_secao,pb_secao,pr_secao,pe_secao,pi_secao,rj_secao,rn_secao,rs_secao,ro_secao,rr_secao,sc_secao,sp_secao,se_secao,to_secao;

struct cad_eleic{

    long int ano_eleicao;

}eleicoes;


struct info_partidos{
    char nome_partido[100];
    char sigla_partido[10];
    char representante_partido[100];
    long int cpf_repre_partido;
    long int cnpj_partido;
    int numero_partido;
}partidos;

struct info_candidados{
    char nome_candidato[100];
    char municipio_candidato[100];
    char sigla_partido_candidato[10];
    int numero_candidato;
    long int cpf_candidato;
    long int rg_candidato;
}candidatos_ac,candidatos_al,candidatos_ap,candidatos_am,candidatos_ba,candidatos_ce,candidatos_es,candidatos_go,candidatos_ma,candidatos_mt,candidatos_ms,candidatos_mg,candidatos_pa,candidatos_pb,candidatos_pr,candidatos_pe,candidatos_pi,candidatos_rj,candidatos_rn,candidatos_rs,candidatos_ro,candidatos_rr,candidatos_sc,candidatos_sp,candidatos_se,candidatos_to;

// Funcao para colocar linhas no programa, visualmente polui menos
void linha(){

    printf("\n=======================================\n");

}


// Mostrar Estados
void estados_aparecer() {
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

    linha();
    printf("UF DOS ESTADOS");
    linha();

    for (i = 0; i < 26; ++i) {
        if (!(aux)) {
            printf("\n[%s] ", estados[i]);
            ++aux;
        } else {
            printf("    [%s] ", estados[i]);
            aux = 0;
        }

    }
    linha();
}

struct dados_eleitores_votacao{
    long int titulo_eleitor;
    char municipio_eleitor[100];
    int num_zona_eleitor;
    int num_secao_eleitor;
}d_eleitor_ac,d_eleitor_al,d_eleitor_ap,d_eleitor_am,d_eleitor_ba,d_eleitor_ce,d_eleitor_es,d_eleitor_go,d_eleitor_ma,d_eleitor_mt,d_eleitor_ms,d_eleitor_mg,d_eleitor_pa,d_eleitor_pb,d_eleitor_pr,d_eleitor_pe,d_eleitor_pi,d_eleitor_rj,d_eleitor_rn,d_eleitor_rs,d_eleitor_ro,d_eleitor_rr,d_eleitor_sc,d_eleitor_sp,d_eleitor_se,d_eleitor_to;

struct voto{
    char nome_candidato[100];
    long int numeros_votos;
    char municipio[100];
    char sigla_partido[10];
}ac_v,al_v,ap_v,am_v,ba_v,ce_v,es_v,go_v,ma_v,mt_v,ms_v,mg_v,pa_v,pb_v,pr_v,pe_v,pi_v,rj_v,rn_v,rs_v,ro_v,rr_v,sc_v,sp_v,se_v,to_v;


// Informacoes do cadastro dos eleitores
struct info_eleitores{
    char nome_eleitor[100];
    char endereco_eleitor[100];
    long int rg_eleitor;
    long int cpf_eleitor;
    long int titulo_eleitor;
    int num_zona_eleitor;
    int cod_secao_eleitor;
}eleitor_ac,eleitor_al,eleitor_ap,eleitor_am,eleitor_ba,eleitor_ce,eleitor_es,eleitor_go,eleitor_ma,eleitor_mt,eleitor_ms,eleitor_mg,eleitor_pa,eleitor_pb,eleitor_pr,eleitor_pe,eleitor_pi,eleitor_rj,eleitor_rn,eleitor_rs,eleitor_ro,eleitor_rr,eleitor_sc,eleitor_sp,eleitor_se,eleitor_to;


/*
 * CÓDIGOS VOLTADO PARA A ANALISAR DADOS DOS ELEITORES
 */



void verificar_titulo_ac() {
    FILE *arq_vot_eleitores_ac;
    arq_vot_eleitores_ac = fopen("arq_vot_eleitores_ac.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_ac != NULL) {
        do {
            fread(&d_eleitor_ac, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_ac);
            if (var_proc_vote_titulo == d_eleitor_ac.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_ac)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_ac);
}

void verificar_titulo_al() {
    FILE *arq_vot_eleitores_al;
    arq_vot_eleitores_al = fopen("arq_vot_eleitores_al.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_al != NULL) {
        do {
            fread(&d_eleitor_al, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_al);
            if (var_proc_vote_titulo == d_eleitor_al.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_al)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_al);
}

void verificar_titulo_ap() {
    FILE *arq_vot_eleitores_ap;
    arq_vot_eleitores_ap = fopen("arq_vot_eleitores_ap.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_ap != NULL) {
        do {
            fread(&d_eleitor_ap, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_ap);
            if (var_proc_vote_titulo == d_eleitor_ap.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_ap)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_ap);
}

void verificar_titulo_am() {
    FILE *arq_vot_eleitores_am;
    arq_vot_eleitores_am = fopen("arq_vot_eleitores_am.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_am != NULL) {
        do {
            fread(&d_eleitor_am, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_am);
            if (var_proc_vote_titulo == d_eleitor_am.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_am)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_am);
}

void verificar_titulo_ba() {
    FILE *arq_vot_eleitores_ba;
    arq_vot_eleitores_ba = fopen("arq_vot_eleitores_ba.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_ba != NULL) {
        do {
            fread(&d_eleitor_ba, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_ba);
            if (var_proc_vote_titulo == d_eleitor_ba.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_ba)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_ba);
}

void verificar_titulo_ce() {
    FILE *arq_vot_eleitores_ce;
    arq_vot_eleitores_ce = fopen("arq_vot_eleitores_ce.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_ce != NULL) {
        do {
            fread(&d_eleitor_ce, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_ce);
            if (var_proc_vote_titulo == d_eleitor_ce.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_ce)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_ce);
}

void verificar_titulo_es() {
    FILE *arq_vot_eleitores_es;
    arq_vot_eleitores_es = fopen("arq_vot_eleitores_es.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_es != NULL) {
        do {
            fread(&d_eleitor_es, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_es);
            if (var_proc_vote_titulo == d_eleitor_es.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_es)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_es);
}

void verificar_titulo_go() {
    FILE *arq_vot_eleitores_go;
    arq_vot_eleitores_go = fopen("arq_vot_eleitores_go.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_go != NULL) {
        do {
            fread(&d_eleitor_go, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_go);
            if (var_proc_vote_titulo == d_eleitor_go.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_go)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_go);
}

void verificar_titulo_ma() {
    FILE *arq_vot_eleitores_ma;
    arq_vot_eleitores_ma = fopen("arq_vot_eleitores_ma.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_ma != NULL) {
        do {
            fread(&d_eleitor_ma, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_ma);
            if (var_proc_vote_titulo == d_eleitor_ma.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_ma)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_ma);
}

void verificar_titulo_mt() {
    FILE *arq_vot_eleitores_mt;
    arq_vot_eleitores_mt = fopen("arq_vot_eleitores_mt.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_mt != NULL) {
        do {
            fread(&d_eleitor_mt, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_mt);
            if (var_proc_vote_titulo == d_eleitor_mt.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_mt)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_mt);
}

void verificar_titulo_ms() {
    FILE *arq_vot_eleitores_ms;
    arq_vot_eleitores_ms = fopen("arq_vot_eleitores_ms.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_ms != NULL) {
        do {
            fread(&d_eleitor_ms, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_ms);
            if (var_proc_vote_titulo == d_eleitor_ms.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_ms)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_ms);
}

void verificar_titulo_mg() {
    FILE *arq_vot_eleitores_mg;
    arq_vot_eleitores_mg = fopen("arq_vot_eleitores_mg.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_mg != NULL) {
        do {
            fread(&d_eleitor_mg, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_mg);
            if (var_proc_vote_titulo == d_eleitor_mg.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_mg)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_mg);
}

void verificar_titulo_pa() {
    FILE *arq_vot_eleitores_pa;
    arq_vot_eleitores_pa = fopen("arq_vot_eleitores_pa.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_pa != NULL) {
        do {
            fread(&d_eleitor_pa, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_pa);
            if (var_proc_vote_titulo == d_eleitor_pa.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_pa)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_pa);
}

void verificar_titulo_pb() {
    FILE *arq_vot_eleitores_pb;
    arq_vot_eleitores_pb = fopen("arq_vot_eleitores_pb.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_pb != NULL) {
        do {
            fread(&d_eleitor_pb, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_pb);
            if (var_proc_vote_titulo == d_eleitor_pb.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_pb)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_pb);
}

void verificar_titulo_pr() {
    FILE *arq_vot_eleitores_pr;
    arq_vot_eleitores_pr = fopen("arq_vot_eleitores_pr.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_pr != NULL) {
        do {
            fread(&d_eleitor_pr, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_pr);
            if (var_proc_vote_titulo == d_eleitor_pr.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_pr)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_pr);
}

void verificar_titulo_pe() {
    FILE *arq_vot_eleitores_pe;
    arq_vot_eleitores_pe = fopen("arq_vot_eleitores_pe.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_pe != NULL) {
        do {
            fread(&d_eleitor_pe, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_pe);
            if (var_proc_vote_titulo == d_eleitor_pe.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_pe)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_pe);
}

void verificar_titulo_pi() {
    FILE *arq_vot_eleitores_pi;
    arq_vot_eleitores_pi = fopen("arq_vot_eleitores_pi.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_pi != NULL) {
        do {
            fread(&d_eleitor_pi, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_pi);
            if (var_proc_vote_titulo == d_eleitor_pi.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_pi)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_pi);
}

void verificar_titulo_rj() {
    FILE *arq_vot_eleitores_rj;
    arq_vot_eleitores_rj = fopen("arq_vot_eleitores_rj.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_rj != NULL) {
        do {
            fread(&d_eleitor_rj, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_rj);
            if (var_proc_vote_titulo == d_eleitor_rj.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_rj)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_rj);
}

void verificar_titulo_rn() {
    FILE *arq_vot_eleitores_rn;
    arq_vot_eleitores_rn = fopen("arq_vot_eleitores_rn.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_rn != NULL) {
        do {
            fread(&d_eleitor_rn, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_rn);
            if (var_proc_vote_titulo == d_eleitor_rn.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_rn)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_rn);
}

void verificar_titulo_rs() {
    FILE *arq_vot_eleitores_rs;
    arq_vot_eleitores_rs = fopen("arq_vot_eleitores_rs.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_rs != NULL) {
        do {
            fread(&d_eleitor_rs, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_rs);
            if (var_proc_vote_titulo == d_eleitor_rs.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_rs)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_rs);
}

void verificar_titulo_ro() {
    FILE *arq_vot_eleitores_ro;
    arq_vot_eleitores_ro = fopen("arq_vot_eleitores_ro.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_ro != NULL) {
        do {
            fread(&d_eleitor_ro, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_ro);
            if (var_proc_vote_titulo == d_eleitor_ro.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_ro)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_ro);
}

void verificar_titulo_rr() {
    FILE *arq_vot_eleitores_rr;
    arq_vot_eleitores_rr = fopen("arq_vot_eleitores_rr.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_rr != NULL) {
        do {
            fread(&d_eleitor_rr, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_rr);
            if (var_proc_vote_titulo == d_eleitor_rr.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_rr)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_rr);
}

void verificar_titulo_sc() {
    FILE *arq_vot_eleitores_sc;
    arq_vot_eleitores_sc = fopen("arq_vot_eleitores_sc.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_sc != NULL) {
        do {
            fread(&d_eleitor_sc, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_sc);
            if (var_proc_vote_titulo == d_eleitor_sc.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_sc)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_sc);
}

void verificar_titulo_sp() {
    FILE *arq_vot_eleitores_sp;
    arq_vot_eleitores_sp = fopen("arq_vot_eleitores_sp.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_sp != NULL) {
        do {
            fread(&d_eleitor_sp, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_sp);
            if (var_proc_vote_titulo == d_eleitor_sp.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_sp)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_sp);
}

void verificar_titulo_se() {
    FILE *arq_vot_eleitores_se;
    arq_vot_eleitores_se = fopen("arq_vot_eleitores_se.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_se != NULL) {
        do {
            fread(&d_eleitor_se, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_se);
            if (var_proc_vote_titulo == d_eleitor_se.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_se)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_se);
}

void verificar_titulo_to() {
    FILE *arq_vot_eleitores_to;
    arq_vot_eleitores_to = fopen("arq_vot_eleitores_to.bin", "rb");


    v_titulo_dado = 0;

    if (arq_vot_eleitores_to != NULL) {
        do {
            fread(&d_eleitor_to, sizeof(struct dados_eleitores_votacao), 1, arq_vot_eleitores_to);
            if (var_proc_vote_titulo == d_eleitor_to.titulo_eleitor) {
                v_titulo_dado = 1;
            }
        } while (!feof(arq_vot_eleitores_to)); // enquanto não chegar ao final do arquivo
    }



    fclose(arq_vot_eleitores_to);
}


// Verificar se existe um mesmo titulo no arquivo de eleitores que votaram
void verificar_titulo_geral_ac(){

    //AC
    FILE *arq_eleitores_ac;
    arq_eleitores_ac = fopen("arq_eleitores_ac.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_ac != NULL){
        do {
            fread(&eleitor_ac, sizeof(struct info_eleitores), 1, arq_eleitores_ac);
            if(var_proc_vote_titulo == eleitor_ac.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_ac();
            }
        } while (!feof(arq_eleitores_ac)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_ac);

}

void verificar_titulo_geral_al(){

    //AL
    FILE *arq_eleitores_al;
    arq_eleitores_al = fopen("arq_eleitores_al.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_al != NULL){
        do {
            fread(&eleitor_al, sizeof(struct info_eleitores), 1, arq_eleitores_al);
            if(var_proc_vote_titulo == eleitor_al.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_al();
            }
        } while (!feof(arq_eleitores_al)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_al);

}

void verificar_titulo_geral_ap(){

    //AP
    FILE *arq_eleitores_ap;
    arq_eleitores_ap = fopen("arq_eleitores_ap.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_ap != NULL){
        do {
            fread(&eleitor_ap, sizeof(struct info_eleitores), 1, arq_eleitores_ap);
            if(var_proc_vote_titulo == eleitor_ap.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_ap();
            }
        } while (!feof(arq_eleitores_ap)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_ap);

}

void verificar_titulo_geral_am(){

    //AM
    FILE *arq_eleitores_am;
    arq_eleitores_am = fopen("arq_eleitores_am.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_am != NULL){
        do {
            fread(&eleitor_am, sizeof(struct info_eleitores), 1, arq_eleitores_am);
            if(var_proc_vote_titulo == eleitor_am.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_am();
            }
        } while (!feof(arq_eleitores_am)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_am);

}

void verificar_titulo_geral_ba(){

    //BA
    FILE *arq_eleitores_ba;
    arq_eleitores_ba = fopen("arq_eleitores_ba.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_ba != NULL){
        do {
            fread(&eleitor_ba, sizeof(struct info_eleitores), 1, arq_eleitores_ba);
            if(var_proc_vote_titulo == eleitor_ba.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_ba();
            }
        } while (!feof(arq_eleitores_ba)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_ba);

}

void verificar_titulo_geral_ce(){

    //BA
    FILE *arq_eleitores_ce;
    arq_eleitores_ce = fopen("arq_eleitores_ce.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_ce != NULL){
        do {
            fread(&eleitor_ce, sizeof(struct info_eleitores), 1, arq_eleitores_ce);
            if(var_proc_vote_titulo == eleitor_ce.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_ce();
            }
        } while (!feof(arq_eleitores_ce)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_ce);

}

void verificar_titulo_geral_es(){

    //ES
    FILE *arq_eleitores_es;
    arq_eleitores_es = fopen("arq_eleitores_es.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_es != NULL){
        do {
            fread(&eleitor_es, sizeof(struct info_eleitores), 1, arq_eleitores_es);
            if(var_proc_vote_titulo == eleitor_es.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_es();
            }
        } while (!feof(arq_eleitores_es)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_es);

}

void verificar_titulo_geral_go(){

    //GO
    FILE *arq_eleitores_go;
    arq_eleitores_go = fopen("arq_eleitores_go.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_go != NULL){
        do {
            fread(&eleitor_go, sizeof(struct info_eleitores), 1, arq_eleitores_go);
            if(var_proc_vote_titulo == eleitor_go.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_go();
            }
        } while (!feof(arq_eleitores_go)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_go);

}

void verificar_titulo_geral_ma(){

    //MA
    FILE *arq_eleitores_ma;
    arq_eleitores_ma = fopen("arq_eleitores_ma.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_ma != NULL){
        do {
            fread(&eleitor_ma, sizeof(struct info_eleitores), 1, arq_eleitores_ma);
            if(var_proc_vote_titulo == eleitor_ma.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_ma();
            }
        } while (!feof(arq_eleitores_ma)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_ma);

}

void verificar_titulo_geral_mt(){

    //MT
    FILE *arq_eleitores_mt;
    arq_eleitores_mt = fopen("arq_eleitores_mt.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_mt != NULL){
        do {
            fread(&eleitor_mt, sizeof(struct info_eleitores), 1, arq_eleitores_mt);
            if(var_proc_vote_titulo == eleitor_mt.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_mt();
            }
        } while (!feof(arq_eleitores_mt)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_mt);

}

void verificar_titulo_geral_ms(){

    //MS
    FILE *arq_eleitores_ms;
    arq_eleitores_ms = fopen("arq_eleitores_ms.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_ms != NULL){
        do {
            fread(&eleitor_ms, sizeof(struct info_eleitores), 1, arq_eleitores_ms);
            if(var_proc_vote_titulo == eleitor_ms.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_ms();
            }
        } while (!feof(arq_eleitores_ms)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_ms);

}

void verificar_titulo_geral_mg(){

    //MG
    FILE *arq_eleitores_mg;
    arq_eleitores_mg = fopen("arq_eleitores_mg.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_mg != NULL){
        do {
            fread(&eleitor_mg, sizeof(struct info_eleitores), 1, arq_eleitores_mg);
            if(var_proc_vote_titulo == eleitor_mg.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_mg();
            }
        } while (!feof(arq_eleitores_mg)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_mg);

}

void verificar_titulo_geral_pa(){

    //PA
    FILE *arq_eleitores_pa;
    arq_eleitores_pa = fopen("arq_eleitores_pa.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_pa != NULL){
        do {
            fread(&eleitor_pa, sizeof(struct info_eleitores), 1, arq_eleitores_pa);
            if(var_proc_vote_titulo == eleitor_pa.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_pa();
            }
        } while (!feof(arq_eleitores_pa)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_pa);

}

void verificar_titulo_geral_pb(){

    //PB
    FILE *arq_eleitores_pb;
    arq_eleitores_pb = fopen("arq_eleitores_pb.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_pb != NULL){
        do {
            fread(&eleitor_pb, sizeof(struct info_eleitores), 1, arq_eleitores_pb);
            if(var_proc_vote_titulo == eleitor_pb.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_pb();
            }
        } while (!feof(arq_eleitores_pb)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_pb);

}

void verificar_titulo_geral_pr(){

    //PR
    FILE *arq_eleitores_pr;
    arq_eleitores_pr = fopen("arq_eleitores_pr.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_pr != NULL){
        do {
            fread(&eleitor_pr, sizeof(struct info_eleitores), 1, arq_eleitores_pr);
            if(var_proc_vote_titulo == eleitor_pr.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_pr();
            }
        } while (!feof(arq_eleitores_pr)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_pr);

}

void verificar_titulo_geral_pe(){

    //PE
    FILE *arq_eleitores_pe;
    arq_eleitores_pe = fopen("arq_eleitores_pe.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_pe != NULL){
        do {
            fread(&eleitor_pe, sizeof(struct info_eleitores), 1, arq_eleitores_pe);
            if(var_proc_vote_titulo == eleitor_pe.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_pe();
            }
        } while (!feof(arq_eleitores_pe)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_pe);

}

void verificar_titulo_geral_pi(){

    //PI
    FILE *arq_eleitores_pi;
    arq_eleitores_pi = fopen("arq_eleitores_pi.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_pi != NULL){
        do {
            fread(&eleitor_pi, sizeof(struct info_eleitores), 1, arq_eleitores_pi);
            if(var_proc_vote_titulo == eleitor_pi.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_pi();
            }
        } while (!feof(arq_eleitores_pi)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_pi);

}

void verificar_titulo_geral_rj(){

    //RJ
    FILE *arq_eleitores_rj;
    arq_eleitores_rj = fopen("arq_eleitores_rj.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_rj != NULL){
        do {
            fread(&eleitor_rj, sizeof(struct info_eleitores), 1, arq_eleitores_rj);
            if(var_proc_vote_titulo == eleitor_rj.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_rj();
            }
        } while (!feof(arq_eleitores_rj)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_rj);

}

void verificar_titulo_geral_rn(){

    //RN
    FILE *arq_eleitores_rn;
    arq_eleitores_rn = fopen("arq_eleitores_rn.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_rn != NULL){
        do {
            fread(&eleitor_rn, sizeof(struct info_eleitores), 1, arq_eleitores_rn);
            if(var_proc_vote_titulo == eleitor_rn.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_rn();
            }
        } while (!feof(arq_eleitores_rn)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_rn);

}

void verificar_titulo_geral_rs(){

    //RS
    FILE *arq_eleitores_rs;
    arq_eleitores_rs = fopen("arq_eleitores_rs.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_rs != NULL){
        do {
            fread(&eleitor_rs, sizeof(struct info_eleitores), 1, arq_eleitores_rs);
            if(var_proc_vote_titulo == eleitor_rs.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_rs();
            }
        } while (!feof(arq_eleitores_rs)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_rs);

}

void verificar_titulo_geral_ro(){

    //RO
    FILE *arq_eleitores_ro;
    arq_eleitores_ro = fopen("arq_eleitores_ro.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_ro != NULL){
        do {
            fread(&eleitor_ro, sizeof(struct info_eleitores), 1, arq_eleitores_ro);
            if(var_proc_vote_titulo == eleitor_ro.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_ro();
            }
        } while (!feof(arq_eleitores_ro)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_ro);

}

void verificar_titulo_geral_rr(){

    //RR
    FILE *arq_eleitores_rr;
    arq_eleitores_rr = fopen("arq_eleitores_rr.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_rr != NULL){
        do {
            fread(&eleitor_rr, sizeof(struct info_eleitores), 1, arq_eleitores_rr);
            if(var_proc_vote_titulo == eleitor_rr.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_rr();
            }
        } while (!feof(arq_eleitores_rr)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_rr);

}

void verificar_titulo_geral_sc(){

    //SC
    FILE *arq_eleitores_sc;
    arq_eleitores_sc = fopen("arq_eleitores_sc.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_sc != NULL){
        do {
            fread(&eleitor_sc, sizeof(struct info_eleitores), 1, arq_eleitores_sc);
            if(var_proc_vote_titulo == eleitor_sc.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_sc();
            }
        } while (!feof(arq_eleitores_sc)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_sc);

}

void verificar_titulo_geral_sp(){

    //SP
    FILE *arq_eleitores_sp;
    arq_eleitores_sp = fopen("arq_eleitores_sp.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_sp != NULL){
        do {
            fread(&eleitor_sp, sizeof(struct info_eleitores), 1, arq_eleitores_sp);
            if(var_proc_vote_titulo == eleitor_sp.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_sp();
            }
        } while (!feof(arq_eleitores_sp)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_sp);

}

void verificar_titulo_geral_se(){

    //SE
    FILE *arq_eleitores_se;
    arq_eleitores_se = fopen("arq_eleitores_se.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_se != NULL){
        do {
            fread(&eleitor_se, sizeof(struct info_eleitores), 1, arq_eleitores_se);
            if(var_proc_vote_titulo == eleitor_se.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_se();
            }
        } while (!feof(arq_eleitores_se)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_se);

}

void verificar_titulo_geral_to(){

    //TO
    FILE *arq_eleitores_to;
    arq_eleitores_to = fopen("arq_eleitores_to.bin","rb");

    v_titulo = 0;

    if(arq_eleitores_to != NULL){
        do {
            fread(&eleitor_to, sizeof(struct info_eleitores), 1, arq_eleitores_to);
            if(var_proc_vote_titulo == eleitor_to.titulo_eleitor){
                v_titulo = 1;
                verificar_titulo_to();
            }
        } while (!feof(arq_eleitores_to)); // enquanto não chegar ao final do arquivo
    }


    fclose(arq_eleitores_to);

}




//Votacao para os candidatos
int voto_candidato_ac(){
    //AC
    FILE *arq_candidato_ac;
    FILE *arq_voto_ac;
    arq_candidato_ac = fopen("arq_candidato_ac.bin","rb");
    arq_voto_ac = fopen("arq_voto_ac.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_ac, sizeof(struct info_candidados), 1, arq_candidato_ac);
        if(candidatos_ac.numero_candidato == verificar_voto){

            if(arq_voto_ac != NULL || aux2 == 1) {

                do {
                    fread(&ac_v, sizeof(struct voto), 1, arq_voto_ac);
                    if (!(strcmp(ac_v.nome_candidato, candidatos_ac.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = ac_v.numeros_votos;
                        fseek(arq_voto_ac,100,SEEK_CUR);

                        votos_cont += 1;
                        ac_v.numeros_votos = votos_cont;

                        fwrite(&ac_v, sizeof(struct voto), 1, arq_voto_ac);

                        fclose(arq_candidato_ac);
                        fclose(arq_voto_ac);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_ac));

            }

            if(arq_voto_ac != NULL && aux == 0){
                strcpy(ac_v.municipio, candidatos_ac.municipio_candidato);
                strcpy(ac_v.nome_candidato, candidatos_ac.nome_candidato);
                strcpy(ac_v.sigla_partido, candidatos_ac.sigla_partido_candidato);
                ac_v.numeros_votos = 1;
                fwrite(&ac_v, sizeof(struct voto), 1, arq_voto_ac);

                fclose(arq_candidato_ac);
                fclose(arq_voto_ac);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_ac)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_ac);
    fclose(arq_voto_ac);

    return 0;
}

int voto_candidato_al(){
    //AL
    FILE *arq_candidato_al;
    FILE *arq_voto_al;
    arq_candidato_al = fopen("arq_candidato_al.bin","rb");
    arq_voto_al = fopen("arq_voto_al.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_al, sizeof(struct info_candidados), 1, arq_candidato_al);
        if(candidatos_al.numero_candidato == verificar_voto){

            if(arq_voto_al != NULL || aux2 == 1) {

                do {
                    fread(&al_v, sizeof(struct voto), 1, arq_voto_al);
                    if (!(strcmp(al_v.nome_candidato, candidatos_al.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = al_v.numeros_votos;
                        fseek(arq_voto_al,100,SEEK_CUR);

                        votos_cont += 1;
                        al_v.numeros_votos = votos_cont;

                        fwrite(&al_v, sizeof(struct voto), 1, arq_voto_al);

                        fclose(arq_candidato_al);
                        fclose(arq_voto_al);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_al));

            }

            if(arq_voto_al != NULL && aux == 0){
                strcpy(al_v.municipio, candidatos_al.municipio_candidato);
                strcpy(al_v.nome_candidato, candidatos_al.nome_candidato);
                strcpy(al_v.sigla_partido, candidatos_al.sigla_partido_candidato);
                al_v.numeros_votos = 1;
                fwrite(&al_v, sizeof(struct voto), 1, arq_voto_al);

                fclose(arq_candidato_al);
                fclose(arq_voto_al);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_al)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_al);
    fclose(arq_voto_al);

    return 0;
}

int voto_candidato_ap(){
    //AP
    FILE *arq_candidato_ap;
    FILE *arq_voto_ap;
    arq_candidato_ap = fopen("arq_candidato_ap.bin","rb");
    arq_voto_ap = fopen("arq_voto_ap.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_ap, sizeof(struct info_candidados), 1, arq_candidato_ap);
        if(candidatos_ap.numero_candidato == verificar_voto){

            if(arq_voto_ap != NULL || aux2 == 1) {

                do {
                    fread(&ap_v, sizeof(struct voto), 1, arq_voto_ap);
                    if (!(strcmp(ap_v.nome_candidato, candidatos_ap.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = ap_v.numeros_votos;
                        fseek(arq_voto_ap,100,SEEK_CUR);

                        votos_cont += 1;
                        ap_v.numeros_votos = votos_cont;

                        fwrite(&ap_v, sizeof(struct voto), 1, arq_voto_ap);

                        fclose(arq_candidato_ap);
                        fclose(arq_voto_ap);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_ap));

            }

            if(arq_voto_ap != NULL && aux == 0){
                strcpy(ap_v.municipio, candidatos_ap.municipio_candidato);
                strcpy(ap_v.nome_candidato, candidatos_ap.nome_candidato);
                strcpy(ap_v.sigla_partido, candidatos_ap.sigla_partido_candidato);
                ap_v.numeros_votos = 1;
                fwrite(&ap_v, sizeof(struct voto), 1, arq_voto_ap);

                fclose(arq_candidato_ap);
                fclose(arq_voto_ap);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_ap)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_ap);
    fclose(arq_voto_ap);

    return 0;
}

int voto_candidato_am(){
    //AM
    FILE *arq_candidato_am;
    FILE *arq_voto_am;
    arq_candidato_am = fopen("arq_candidato_am.bin","rb");
    arq_voto_am = fopen("arq_voto_am.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_am, sizeof(struct info_candidados), 1, arq_candidato_am);
        if(candidatos_am.numero_candidato == verificar_voto){

            if(arq_voto_am != NULL || aux2 == 1) {

                do {
                    fread(&am_v, sizeof(struct voto), 1, arq_voto_am);
                    if (!(strcmp(am_v.nome_candidato, candidatos_am.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = am_v.numeros_votos;
                        fseek(arq_voto_am,100,SEEK_CUR);

                        votos_cont += 1;
                        am_v.numeros_votos = votos_cont;

                        fwrite(&am_v, sizeof(struct voto), 1, arq_voto_am);

                        fclose(arq_candidato_am);
                        fclose(arq_voto_am);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_am));

            }

            if(arq_voto_am != NULL && aux == 0){
                strcpy(am_v.municipio, candidatos_am.municipio_candidato);
                strcpy(am_v.nome_candidato, candidatos_am.nome_candidato);
                strcpy(am_v.sigla_partido, candidatos_am.sigla_partido_candidato);
                am_v.numeros_votos = 1;
                fwrite(&am_v, sizeof(struct voto), 1, arq_voto_am);

                fclose(arq_candidato_am);
                fclose(arq_voto_am);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_am)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_am);
    fclose(arq_voto_am);

    return 0;
}

int voto_candidato_ba(){
    //BA
    FILE *arq_candidato_ba;
    FILE *arq_voto_ba;
    arq_candidato_ba = fopen("arq_candidato_ba.bin","rb");
    arq_voto_ba = fopen("arq_voto_ba.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_ba, sizeof(struct info_candidados), 1, arq_candidato_ba);
        if(candidatos_ba.numero_candidato == verificar_voto){

            if(arq_voto_ba != NULL || aux2 == 1) {

                do {
                    fread(&ba_v, sizeof(struct voto), 1, arq_voto_ba);
                    if (!(strcmp(ba_v.nome_candidato, candidatos_ba.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = ba_v.numeros_votos;
                        fseek(arq_voto_ba,100,SEEK_CUR);

                        votos_cont += 1;
                        ba_v.numeros_votos = votos_cont;

                        fwrite(&ba_v, sizeof(struct voto), 1, arq_voto_ba);

                        fclose(arq_candidato_ba);
                        fclose(arq_voto_ba);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_ba));

            }

            if(arq_voto_ba != NULL && aux == 0){
                strcpy(ba_v.municipio, candidatos_ba.municipio_candidato);
                strcpy(ba_v.nome_candidato, candidatos_ba.nome_candidato);
                strcpy(ba_v.sigla_partido, candidatos_ba.sigla_partido_candidato);
                ba_v.numeros_votos = 1;
                fwrite(&ba_v, sizeof(struct voto), 1, arq_voto_ba);

                fclose(arq_candidato_ba);
                fclose(arq_voto_ba);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_ba)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_ba);
    fclose(arq_voto_ba);

    return 0;
}

int voto_candidato_ce(){
    //CE
    FILE *arq_candidato_ce;
    FILE *arq_voto_ce;
    arq_candidato_ce = fopen("arq_candidato_ce.bin","rb");
    arq_voto_ce = fopen("arq_voto_ce.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_ce, sizeof(struct info_candidados), 1, arq_candidato_ce);
        if(candidatos_ce.numero_candidato == verificar_voto){

            if(arq_voto_ce != NULL || aux2 == 1) {

                do {
                    fread(&ce_v, sizeof(struct voto), 1, arq_voto_ce);
                    if (!(strcmp(ce_v.nome_candidato, candidatos_ce.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = ce_v.numeros_votos;
                        fseek(arq_voto_ce,100,SEEK_CUR);

                        votos_cont += 1;
                        ce_v.numeros_votos = votos_cont;

                        fwrite(&ce_v, sizeof(struct voto), 1, arq_voto_ce);

                        fclose(arq_candidato_ce);
                        fclose(arq_voto_ce);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_ce));

            }

            if(arq_voto_ce != NULL && aux == 0){
                strcpy(ce_v.municipio, candidatos_ce.municipio_candidato);
                strcpy(ce_v.nome_candidato, candidatos_ce.nome_candidato);
                strcpy(ce_v.sigla_partido, candidatos_ce.sigla_partido_candidato);
                ce_v.numeros_votos = 1;
                fwrite(&ce_v, sizeof(struct voto), 1, arq_voto_ce);

                fclose(arq_candidato_ce);
                fclose(arq_voto_ce);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_ce)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_ce);
    fclose(arq_voto_ce);

    return 0;
}

int voto_candidato_es(){
    //ES
    FILE *arq_candidato_es;
    FILE *arq_voto_es;
    arq_candidato_es = fopen("arq_candidato_es.bin","rb");
    arq_voto_es = fopen("arq_voto_es.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_es, sizeof(struct info_candidados), 1, arq_candidato_es);
        if(candidatos_es.numero_candidato == verificar_voto){

            if(arq_voto_es != NULL || aux2 == 1) {

                do {
                    fread(&es_v, sizeof(struct voto), 1, arq_voto_es);
                    if (!(strcmp(es_v.nome_candidato, candidatos_es.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = es_v.numeros_votos;
                        fseek(arq_voto_es,100,SEEK_CUR);

                        votos_cont += 1;
                        es_v.numeros_votos = votos_cont;

                        fwrite(&es_v, sizeof(struct voto), 1, arq_voto_es);

                        fclose(arq_candidato_es);
                        fclose(arq_voto_es);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_es));

            }

            if(arq_voto_es != NULL && aux == 0){
                strcpy(es_v.municipio, candidatos_es.municipio_candidato);
                strcpy(es_v.nome_candidato, candidatos_es.nome_candidato);
                strcpy(es_v.sigla_partido, candidatos_es.sigla_partido_candidato);
                es_v.numeros_votos = 1;
                fwrite(&es_v, sizeof(struct voto), 1, arq_voto_es);

                fclose(arq_candidato_es);
                fclose(arq_voto_es);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_es)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_es);
    fclose(arq_voto_es);

    return 0;
}

int voto_candidato_go(){
    //GO
    FILE *arq_candidato_go;
    FILE *arq_voto_go;
    arq_candidato_go = fopen("arq_candidato_go.bin","rb");
    arq_voto_go = fopen("arq_voto_go.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_go, sizeof(struct info_candidados), 1, arq_candidato_go);
        if(candidatos_go.numero_candidato == verificar_voto){

            if(arq_voto_go != NULL || aux2 == 1) {

                do {
                    fread(&go_v, sizeof(struct voto), 1, arq_voto_go);
                    if (!(strcmp(go_v.nome_candidato, candidatos_go.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = go_v.numeros_votos;
                        fseek(arq_voto_go,100,SEEK_CUR);

                        votos_cont += 1;
                        go_v.numeros_votos = votos_cont;

                        fwrite(&go_v, sizeof(struct voto), 1, arq_voto_go);

                        fclose(arq_candidato_go);
                        fclose(arq_voto_go);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_go));

            }

            if(arq_voto_go != NULL && aux == 0){
                strcpy(go_v.municipio, candidatos_go.municipio_candidato);
                strcpy(go_v.nome_candidato, candidatos_go.nome_candidato);
                strcpy(go_v.sigla_partido, candidatos_go.sigla_partido_candidato);
                go_v.numeros_votos = 1;
                fwrite(&go_v, sizeof(struct voto), 1, arq_voto_go);

                fclose(arq_candidato_go);
                fclose(arq_voto_go);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_go)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_go);
    fclose(arq_voto_go);

    return 0;
}

int voto_candidato_ma(){
    //MA
    FILE *arq_candidato_ma;
    FILE *arq_voto_ma;
    arq_candidato_ma = fopen("arq_candidato_ma.bin","rb");
    arq_voto_ma = fopen("arq_voto_ma.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_ma, sizeof(struct info_candidados), 1, arq_candidato_ma);
        if(candidatos_ma.numero_candidato == verificar_voto){

            if(arq_voto_ma != NULL || aux2 == 1) {

                do {
                    fread(&ma_v, sizeof(struct voto), 1, arq_voto_ma);
                    if (!(strcmp(ma_v.nome_candidato, candidatos_ma.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = ma_v.numeros_votos;
                        fseek(arq_voto_ma,100,SEEK_CUR);

                        votos_cont += 1;
                        ma_v.numeros_votos = votos_cont;

                        fwrite(&ma_v, sizeof(struct voto), 1, arq_voto_ma);

                        fclose(arq_candidato_ma);
                        fclose(arq_voto_ma);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_ma));

            }

            if(arq_voto_ma != NULL && aux == 0){
                strcpy(ma_v.municipio, candidatos_ma.municipio_candidato);
                strcpy(ma_v.nome_candidato, candidatos_ma.nome_candidato);
                strcpy(ma_v.sigla_partido, candidatos_ma.sigla_partido_candidato);
                ma_v.numeros_votos = 1;
                fwrite(&ma_v, sizeof(struct voto), 1, arq_voto_ma);

                fclose(arq_candidato_ma);
                fclose(arq_voto_ma);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_ma)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_ma);
    fclose(arq_voto_ma);

    return 0;
}

int voto_candidato_mt(){
    //MT
    FILE *arq_candidato_mt;
    FILE *arq_voto_mt;
    arq_candidato_mt = fopen("arq_candidato_mt.bin","rb");
    arq_voto_mt = fopen("arq_voto_mt.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_mt, sizeof(struct info_candidados), 1, arq_candidato_mt);
        if(candidatos_mt.numero_candidato == verificar_voto){

            if(arq_voto_mt != NULL || aux2 == 1) {

                do {
                    fread(&mt_v, sizeof(struct voto), 1, arq_voto_mt);
                    if (!(strcmp(mt_v.nome_candidato, candidatos_mt.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = mt_v.numeros_votos;
                        fseek(arq_voto_mt,100,SEEK_CUR);

                        votos_cont += 1;
                        mt_v.numeros_votos = votos_cont;

                        fwrite(&mt_v, sizeof(struct voto), 1, arq_voto_mt);

                        fclose(arq_candidato_mt);
                        fclose(arq_voto_mt);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_mt));

            }

            if(arq_voto_mt != NULL && aux == 0){
                strcpy(mt_v.municipio, candidatos_mt.municipio_candidato);
                strcpy(mt_v.nome_candidato, candidatos_mt.nome_candidato);
                strcpy(mt_v.sigla_partido, candidatos_mt.sigla_partido_candidato);
                mt_v.numeros_votos = 1;
                fwrite(&mt_v, sizeof(struct voto), 1, arq_voto_mt);

                fclose(arq_candidato_mt);
                fclose(arq_voto_mt);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_mt)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_mt);
    fclose(arq_voto_mt);

    return 0;
}

int voto_candidato_ms(){
    //MS
    FILE *arq_candidato_ms;
    FILE *arq_voto_ms;
    arq_candidato_ms = fopen("arq_candidato_ms.bin","rb");
    arq_voto_ms = fopen("arq_voto_ms.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_ms, sizeof(struct info_candidados), 1, arq_candidato_ms);
        if(candidatos_ms.numero_candidato == verificar_voto){

            if(arq_voto_ms != NULL || aux2 == 1) {

                do {
                    fread(&ms_v, sizeof(struct voto), 1, arq_voto_ms);
                    if (!(strcmp(ms_v.nome_candidato, candidatos_ms.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = ms_v.numeros_votos;
                        fseek(arq_voto_ms,100,SEEK_CUR);

                        votos_cont += 1;
                        ms_v.numeros_votos = votos_cont;

                        fwrite(&ms_v, sizeof(struct voto), 1, arq_voto_ms);

                        fclose(arq_candidato_ms);
                        fclose(arq_voto_ms);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_ms));

            }

            if(arq_voto_ms != NULL && aux == 0){
                strcpy(ms_v.municipio, candidatos_ms.municipio_candidato);
                strcpy(ms_v.nome_candidato, candidatos_ms.nome_candidato);
                strcpy(ms_v.sigla_partido, candidatos_ms.sigla_partido_candidato);
                ms_v.numeros_votos = 1;
                fwrite(&ms_v, sizeof(struct voto), 1, arq_voto_ms);

                fclose(arq_candidato_ms);
                fclose(arq_voto_ms);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_ms)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_ms);
    fclose(arq_voto_ms);

    return 0;
}

int voto_candidato_mg(){
    //MG
    FILE *arq_candidato_mg;
    FILE *arq_voto_mg;
    arq_candidato_mg = fopen("arq_candidato_mg.bin","rb");
    arq_voto_mg = fopen("arq_voto_mg.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_mg, sizeof(struct info_candidados), 1, arq_candidato_mg);
        if(candidatos_mg.numero_candidato == verificar_voto){

            if(arq_voto_mg != NULL || aux2 == 1) {

                do {
                    fread(&mg_v, sizeof(struct voto), 1, arq_voto_mg);
                    if (!(strcmp(mg_v.nome_candidato, candidatos_mg.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = mg_v.numeros_votos;
                        fseek(arq_voto_mg,100,SEEK_CUR);

                        votos_cont += 1;
                        mg_v.numeros_votos = votos_cont;

                        fwrite(&mg_v, sizeof(struct voto), 1, arq_voto_mg);

                        fclose(arq_candidato_mg);
                        fclose(arq_voto_mg);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_mg));

            }

            if(arq_voto_mg != NULL && aux == 0){
                strcpy(mg_v.municipio, candidatos_mg.municipio_candidato);
                strcpy(mg_v.nome_candidato, candidatos_mg.nome_candidato);
                strcpy(mg_v.sigla_partido, candidatos_mg.sigla_partido_candidato);
                mg_v.numeros_votos = 1;
                fwrite(&mg_v, sizeof(struct voto), 1, arq_voto_mg);

                fclose(arq_candidato_mg);
                fclose(arq_voto_mg);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_mg)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_mg);
    fclose(arq_voto_mg);

    return 0;
}

int voto_candidato_pa(){
    //PA
    FILE *arq_candidato_pa;
    FILE *arq_voto_pa;
    arq_candidato_pa = fopen("arq_candidato_pa.bin","rb");
    arq_voto_pa = fopen("arq_voto_pa.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_pa, sizeof(struct info_candidados), 1, arq_candidato_pa);
        if(candidatos_pa.numero_candidato == verificar_voto){

            if(arq_voto_pa != NULL || aux2 == 1) {

                do {
                    fread(&pa_v, sizeof(struct voto), 1, arq_voto_pa);
                    if (!(strcmp(pa_v.nome_candidato, candidatos_pa.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = pa_v.numeros_votos;
                        fseek(arq_voto_pa,100,SEEK_CUR);

                        votos_cont += 1;
                        pa_v.numeros_votos = votos_cont;

                        fwrite(&pa_v, sizeof(struct voto), 1, arq_voto_pa);

                        fclose(arq_candidato_pa);
                        fclose(arq_voto_pa);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_pa));

            }

            if(arq_voto_pa != NULL && aux == 0){
                strcpy(pa_v.municipio, candidatos_pa.municipio_candidato);
                strcpy(pa_v.nome_candidato, candidatos_pa.nome_candidato);
                strcpy(pa_v.sigla_partido, candidatos_pa.sigla_partido_candidato);
                pa_v.numeros_votos = 1;
                fwrite(&pa_v, sizeof(struct voto), 1, arq_voto_pa);

                fclose(arq_candidato_pa);
                fclose(arq_voto_pa);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_pa)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_pa);
    fclose(arq_voto_pa);

    return 0;
}

int voto_candidato_pb(){
    //PB
    FILE *arq_candidato_pb;
    FILE *arq_voto_pb;
    arq_candidato_pb = fopen("arq_candidato_pb.bin","rb");
    arq_voto_pb = fopen("arq_voto_pb.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_pb, sizeof(struct info_candidados), 1, arq_candidato_pb);
        if(candidatos_pb.numero_candidato == verificar_voto){

            if(arq_voto_pb != NULL || aux2 == 1) {

                do {
                    fread(&pb_v, sizeof(struct voto), 1, arq_voto_pb);
                    if (!(strcmp(pb_v.nome_candidato, candidatos_pb.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = pb_v.numeros_votos;
                        fseek(arq_voto_pb,100,SEEK_CUR);

                        votos_cont += 1;
                        pb_v.numeros_votos = votos_cont;

                        fwrite(&pb_v, sizeof(struct voto), 1, arq_voto_pb);

                        fclose(arq_candidato_pb);
                        fclose(arq_voto_pb);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_pb));

            }

            if(arq_voto_pb != NULL && aux == 0){
                strcpy(pb_v.municipio, candidatos_pb.municipio_candidato);
                strcpy(pb_v.nome_candidato, candidatos_pb.nome_candidato);
                strcpy(pb_v.sigla_partido, candidatos_pb.sigla_partido_candidato);
                pb_v.numeros_votos = 1;
                fwrite(&pb_v, sizeof(struct voto), 1, arq_voto_pb);

                fclose(arq_candidato_pb);
                fclose(arq_voto_pb);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_pb)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_pb);
    fclose(arq_voto_pb);

    return 0;
}

int voto_candidato_pr(){
    //PR
    FILE *arq_candidato_pr;
    FILE *arq_voto_pr;
    arq_candidato_pr = fopen("arq_candidato_pr.bin","rb");
    arq_voto_pr = fopen("arq_voto_pr.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_pr, sizeof(struct info_candidados), 1, arq_candidato_pr);
        if(candidatos_pr.numero_candidato == verificar_voto){

            if(arq_voto_pr != NULL || aux2 == 1) {

                do {
                    fread(&pr_v, sizeof(struct voto), 1, arq_voto_pr);
                    if (!(strcmp(pr_v.nome_candidato, candidatos_pr.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = pr_v.numeros_votos;
                        fseek(arq_voto_pr,100,SEEK_CUR);

                        votos_cont += 1;
                        pr_v.numeros_votos = votos_cont;

                        fwrite(&pr_v, sizeof(struct voto), 1, arq_voto_pr);

                        fclose(arq_candidato_pr);
                        fclose(arq_voto_pr);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_pr));

            }

            if(arq_voto_pr != NULL && aux == 0){
                strcpy(pr_v.municipio, candidatos_pr.municipio_candidato);
                strcpy(pr_v.nome_candidato, candidatos_pr.nome_candidato);
                strcpy(pr_v.sigla_partido, candidatos_pr.sigla_partido_candidato);
                pr_v.numeros_votos = 1;
                fwrite(&pr_v, sizeof(struct voto), 1, arq_voto_pr);

                fclose(arq_candidato_pr);
                fclose(arq_voto_pr);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_pr)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_pr);
    fclose(arq_voto_pr);

    return 0;
}

int voto_candidato_pe(){
    //PE
    FILE *arq_candidato_pe;
    FILE *arq_voto_pe;
    arq_candidato_pe = fopen("arq_candidato_pe.bin","rb");
    arq_voto_pe = fopen("arq_voto_pe.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_pe, sizeof(struct info_candidados), 1, arq_candidato_pe);
        if(candidatos_pe.numero_candidato == verificar_voto){

            if(arq_voto_pe != NULL || aux2 == 1) {

                do {
                    fread(&pe_v, sizeof(struct voto), 1, arq_voto_pe);
                    if (!(strcmp(pe_v.nome_candidato, candidatos_pe.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = pe_v.numeros_votos;
                        fseek(arq_voto_pe,100,SEEK_CUR);

                        votos_cont += 1;
                        pe_v.numeros_votos = votos_cont;

                        fwrite(&pe_v, sizeof(struct voto), 1, arq_voto_pe);

                        fclose(arq_candidato_pe);
                        fclose(arq_voto_pe);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_pe));

            }

            if(arq_voto_pe != NULL && aux == 0){
                strcpy(pe_v.municipio, candidatos_pe.municipio_candidato);
                strcpy(pe_v.nome_candidato, candidatos_pe.nome_candidato);
                strcpy(pe_v.sigla_partido, candidatos_pe.sigla_partido_candidato);
                pe_v.numeros_votos = 1;
                fwrite(&pe_v, sizeof(struct voto), 1, arq_voto_pe);

                fclose(arq_candidato_pe);
                fclose(arq_voto_pe);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_pe)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_pe);
    fclose(arq_voto_pe);

    return 0;
}

int voto_candidato_pi(){
    //PI
    FILE *arq_candidato_pi;
    FILE *arq_voto_pi;
    arq_candidato_pi = fopen("arq_candidato_pi.bin","rb");
    arq_voto_pi = fopen("arq_voto_pi.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_pi, sizeof(struct info_candidados), 1, arq_candidato_pi);
        if(candidatos_pi.numero_candidato == verificar_voto){

            if(arq_voto_pi != NULL || aux2 == 1) {

                do {
                    fread(&pi_v, sizeof(struct voto), 1, arq_voto_pi);
                    if (!(strcmp(pi_v.nome_candidato, candidatos_pi.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = pi_v.numeros_votos;
                        fseek(arq_voto_pi,100,SEEK_CUR);

                        votos_cont += 1;
                        pi_v.numeros_votos = votos_cont;

                        fwrite(&pi_v, sizeof(struct voto), 1, arq_voto_pi);

                        fclose(arq_candidato_pi);
                        fclose(arq_voto_pi);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_pi));

            }

            if(arq_voto_pi != NULL && aux == 0){
                strcpy(pi_v.municipio, candidatos_pi.municipio_candidato);
                strcpy(pi_v.nome_candidato, candidatos_pi.nome_candidato);
                strcpy(pi_v.sigla_partido, candidatos_pi.sigla_partido_candidato);
                pi_v.numeros_votos = 1;
                fwrite(&pi_v, sizeof(struct voto), 1, arq_voto_pi);

                fclose(arq_candidato_pi);
                fclose(arq_voto_pi);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_pi)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_pi);
    fclose(arq_voto_pi);

    return 0;
}

int voto_candidato_rj(){
    //RJ
    FILE *arq_candidato_rj;
    FILE *arq_voto_rj;
    arq_candidato_rj = fopen("arq_candidato_rj.bin","rb");
    arq_voto_rj = fopen("arq_voto_rj.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_rj, sizeof(struct info_candidados), 1, arq_candidato_rj);
        if(candidatos_rj.numero_candidato == verificar_voto){

            if(arq_voto_rj != NULL || aux2 == 1) {

                do {
                    fread(&rj_v, sizeof(struct voto), 1, arq_voto_rj);
                    if (!(strcmp(rj_v.nome_candidato, candidatos_rj.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = rj_v.numeros_votos;
                        fseek(arq_voto_rj,100,SEEK_CUR);

                        votos_cont += 1;
                        rj_v.numeros_votos = votos_cont;

                        fwrite(&rj_v, sizeof(struct voto), 1, arq_voto_rj);

                        fclose(arq_candidato_rj);
                        fclose(arq_voto_rj);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_rj));

            }

            if(arq_voto_rj != NULL && aux == 0){
                strcpy(rj_v.municipio, candidatos_rj.municipio_candidato);
                strcpy(rj_v.nome_candidato, candidatos_rj.nome_candidato);
                strcpy(rj_v.sigla_partido, candidatos_rj.sigla_partido_candidato);
                rj_v.numeros_votos = 1;
                fwrite(&rj_v, sizeof(struct voto), 1, arq_voto_rj);

                fclose(arq_candidato_rj);
                fclose(arq_voto_rj);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_rj)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_rj);
    fclose(arq_voto_rj);

    return 0;
}

int voto_candidato_rn(){
    //RN
    FILE *arq_candidato_rn;
    FILE *arq_voto_rn;
    arq_candidato_rn = fopen("arq_candidato_rn.bin","rb");
    arq_voto_rn = fopen("arq_voto_rn.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_rn, sizeof(struct info_candidados), 1, arq_candidato_rn);
        if(candidatos_rn.numero_candidato == verificar_voto){

            if(arq_voto_rn != NULL || aux2 == 1) {

                do {
                    fread(&rn_v, sizeof(struct voto), 1, arq_voto_rn);
                    if (!(strcmp(rn_v.nome_candidato, candidatos_rn.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = rn_v.numeros_votos;
                        fseek(arq_voto_rn,100,SEEK_CUR);

                        votos_cont += 1;
                        rn_v.numeros_votos = votos_cont;

                        fwrite(&rn_v, sizeof(struct voto), 1, arq_voto_rn);

                        fclose(arq_candidato_rn);
                        fclose(arq_voto_rn);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_rn));

            }

            if(arq_voto_rn != NULL && aux == 0){
                strcpy(rn_v.municipio, candidatos_rn.municipio_candidato);
                strcpy(rn_v.nome_candidato, candidatos_rn.nome_candidato);
                strcpy(rn_v.sigla_partido, candidatos_rn.sigla_partido_candidato);
                rn_v.numeros_votos = 1;
                fwrite(&rn_v, sizeof(struct voto), 1, arq_voto_rn);

                fclose(arq_candidato_rn);
                fclose(arq_voto_rn);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_rn)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_rn);
    fclose(arq_voto_rn);

    return 0;
}

int voto_candidato_rs(){
    //RS
    FILE *arq_candidato_rs;
    FILE *arq_voto_rs;
    arq_candidato_rs = fopen("arq_candidato_rs.bin","rb");
    arq_voto_rs = fopen("arq_voto_rs.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_rs, sizeof(struct info_candidados), 1, arq_candidato_rs);
        if(candidatos_rs.numero_candidato == verificar_voto){

            if(arq_voto_rs != NULL || aux2 == 1) {

                do {
                    fread(&rs_v, sizeof(struct voto), 1, arq_voto_rs);
                    if (!(strcmp(rs_v.nome_candidato, candidatos_rs.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = rs_v.numeros_votos;
                        fseek(arq_voto_rs,100,SEEK_CUR);

                        votos_cont += 1;
                        rs_v.numeros_votos = votos_cont;

                        fwrite(&rs_v, sizeof(struct voto), 1, arq_voto_rs);

                        fclose(arq_candidato_rs);
                        fclose(arq_voto_rs);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_rs));

            }

            if(arq_voto_rs != NULL && aux == 0){
                strcpy(rs_v.municipio, candidatos_rs.municipio_candidato);
                strcpy(rs_v.nome_candidato, candidatos_rs.nome_candidato);
                strcpy(rs_v.sigla_partido, candidatos_rs.sigla_partido_candidato);
                rs_v.numeros_votos = 1;
                fwrite(&rs_v, sizeof(struct voto), 1, arq_voto_rs);

                fclose(arq_candidato_rs);
                fclose(arq_voto_rs);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_rs)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_rs);
    fclose(arq_voto_rs);

    return 0;
}

int voto_candidato_ro(){
    //RO
    FILE *arq_candidato_ro;
    FILE *arq_voto_ro;
    arq_candidato_ro = fopen("arq_candidato_ro.bin","rb");
    arq_voto_ro = fopen("arq_voto_ro.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_ro, sizeof(struct info_candidados), 1, arq_candidato_ro);
        if(candidatos_ro.numero_candidato == verificar_voto){

            if(arq_voto_ro != NULL || aux2 == 1) {

                do {
                    fread(&ro_v, sizeof(struct voto), 1, arq_voto_ro);
                    if (!(strcmp(ro_v.nome_candidato, candidatos_ro.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = ro_v.numeros_votos;
                        fseek(arq_voto_ro,100,SEEK_CUR);

                        votos_cont += 1;
                        ro_v.numeros_votos = votos_cont;

                        fwrite(&ro_v, sizeof(struct voto), 1, arq_voto_ro);

                        fclose(arq_candidato_ro);
                        fclose(arq_voto_ro);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_ro));

            }

            if(arq_voto_ro != NULL && aux == 0){
                strcpy(ro_v.municipio, candidatos_ro.municipio_candidato);
                strcpy(ro_v.nome_candidato, candidatos_ro.nome_candidato);
                strcpy(ro_v.sigla_partido, candidatos_ro.sigla_partido_candidato);
                ro_v.numeros_votos = 1;
                fwrite(&ro_v, sizeof(struct voto), 1, arq_voto_ro);

                fclose(arq_candidato_ro);
                fclose(arq_voto_ro);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_ro)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_ro);
    fclose(arq_voto_ro);

    return 0;
}

int voto_candidato_rr(){
    //RR
    FILE *arq_candidato_rr;
    FILE *arq_voto_rr;
    arq_candidato_rr = fopen("arq_candidato_rr.bin","rb");
    arq_voto_rr = fopen("arq_voto_rr.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_rr, sizeof(struct info_candidados), 1, arq_candidato_rr);
        if(candidatos_rr.numero_candidato == verificar_voto){

            if(arq_voto_rr != NULL || aux2 == 1) {

                do {
                    fread(&rr_v, sizeof(struct voto), 1, arq_voto_rr);
                    if (!(strcmp(rr_v.nome_candidato, candidatos_rr.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = rr_v.numeros_votos;
                        fseek(arq_voto_rr,100,SEEK_CUR);

                        votos_cont += 1;
                        rr_v.numeros_votos = votos_cont;

                        fwrite(&rr_v, sizeof(struct voto), 1, arq_voto_rr);

                        fclose(arq_candidato_rr);
                        fclose(arq_voto_rr);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_rr));

            }

            if(arq_voto_rr != NULL && aux == 0){
                strcpy(rr_v.municipio, candidatos_rr.municipio_candidato);
                strcpy(rr_v.nome_candidato, candidatos_rr.nome_candidato);
                strcpy(rr_v.sigla_partido, candidatos_rr.sigla_partido_candidato);
                rr_v.numeros_votos = 1;
                fwrite(&rr_v, sizeof(struct voto), 1, arq_voto_rr);

                fclose(arq_candidato_rr);
                fclose(arq_voto_rr);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_rr)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_rr);
    fclose(arq_voto_rr);

    return 0;
}

int voto_candidato_sc(){
    //SC
    FILE *arq_candidato_sc;
    FILE *arq_voto_sc;
    arq_candidato_sc = fopen("arq_candidato_sc.bin","rb");
    arq_voto_sc = fopen("arq_voto_sc.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_sc, sizeof(struct info_candidados), 1, arq_candidato_sc);
        if(candidatos_sc.numero_candidato == verificar_voto){

            if(arq_voto_sc != NULL || aux2 == 1) {

                do {
                    fread(&sc_v, sizeof(struct voto), 1, arq_voto_sc);
                    if (!(strcmp(sc_v.nome_candidato, candidatos_sc.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = sc_v.numeros_votos;
                        fseek(arq_voto_sc,100,SEEK_CUR);

                        votos_cont += 1;
                        sc_v.numeros_votos = votos_cont;

                        fwrite(&sc_v, sizeof(struct voto), 1, arq_voto_sc);

                        fclose(arq_candidato_sc);
                        fclose(arq_voto_sc);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_sc));

            }

            if(arq_voto_sc != NULL && aux == 0){
                strcpy(sc_v.municipio, candidatos_sc.municipio_candidato);
                strcpy(sc_v.nome_candidato, candidatos_sc.nome_candidato);
                strcpy(sc_v.sigla_partido, candidatos_sc.sigla_partido_candidato);
                sc_v.numeros_votos = 1;
                fwrite(&sc_v, sizeof(struct voto), 1, arq_voto_sc);

                fclose(arq_candidato_sc);
                fclose(arq_voto_sc);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_sc)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_sc);
    fclose(arq_voto_sc);

    return 0;
}

int voto_candidato_sp(){
    //SP
    FILE *arq_candidato_sp;
    FILE *arq_voto_sp;
    arq_candidato_sp = fopen("arq_candidato_sp.bin","rb");
    arq_voto_sp = fopen("arq_voto_sp.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_sp, sizeof(struct info_candidados), 1, arq_candidato_sp);
        if(candidatos_sp.numero_candidato == verificar_voto){

            if(arq_voto_sp != NULL || aux2 == 1) {

                do {
                    fread(&sp_v, sizeof(struct voto), 1, arq_voto_sp);
                    if (!(strcmp(sp_v.nome_candidato, candidatos_sp.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = sp_v.numeros_votos;
                        fseek(arq_voto_sp,100,SEEK_CUR);

                        votos_cont += 1;
                        sp_v.numeros_votos = votos_cont;

                        fwrite(&sp_v, sizeof(struct voto), 1, arq_voto_sp);

                        fclose(arq_candidato_sp);
                        fclose(arq_voto_sp);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_sp));

            }

            if(arq_voto_sp != NULL && aux == 0){
                strcpy(sp_v.municipio, candidatos_sp.municipio_candidato);
                strcpy(sp_v.nome_candidato, candidatos_sp.nome_candidato);
                strcpy(sp_v.sigla_partido, candidatos_sp.sigla_partido_candidato);
                sp_v.numeros_votos = 1;
                fwrite(&sp_v, sizeof(struct voto), 1, arq_voto_sp);

                fclose(arq_candidato_sp);
                fclose(arq_voto_sp);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_sp)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_sp);
    fclose(arq_voto_sp);

    return 0;
}

int voto_candidato_se(){
    //SE
    FILE *arq_candidato_se;
    FILE *arq_voto_se;
    arq_candidato_se = fopen("arq_candidato_se.bin","rb");
    arq_voto_se = fopen("arq_voto_se.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_se, sizeof(struct info_candidados), 1, arq_candidato_se);
        if(candidatos_se.numero_candidato == verificar_voto){

            if(arq_voto_se != NULL || aux2 == 1) {

                do {
                    fread(&se_v, sizeof(struct voto), 1, arq_voto_se);
                    if (!(strcmp(se_v.nome_candidato, candidatos_se.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = se_v.numeros_votos;
                        fseek(arq_voto_se,100,SEEK_CUR);

                        votos_cont += 1;
                        se_v.numeros_votos = votos_cont;

                        fwrite(&se_v, sizeof(struct voto), 1, arq_voto_se);

                        fclose(arq_candidato_se);
                        fclose(arq_voto_se);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_se));

            }

            if(arq_voto_se != NULL && aux == 0){
                strcpy(se_v.municipio, candidatos_se.municipio_candidato);
                strcpy(se_v.nome_candidato, candidatos_se.nome_candidato);
                strcpy(se_v.sigla_partido, candidatos_se.sigla_partido_candidato);
                se_v.numeros_votos = 1;
                fwrite(&se_v, sizeof(struct voto), 1, arq_voto_se);

                fclose(arq_candidato_se);
                fclose(arq_voto_se);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_se)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_se);
    fclose(arq_voto_se);

    return 0;
}

int voto_candidato_to(){
    //TO
    FILE *arq_candidato_to;
    FILE *arq_voto_to;
    arq_candidato_to = fopen("arq_candidato_to.bin","rb");
    arq_voto_to = fopen("arq_voto_to.bin","ab+");

    votos_cont = 0;
    aux = 0;

    do {
        fread(&candidatos_to, sizeof(struct info_candidados), 1, arq_candidato_to);
        if(candidatos_to.numero_candidato == verificar_voto){

            if(arq_voto_to != NULL || aux2 == 1) {

                do {
                    fread(&to_v, sizeof(struct voto), 1, arq_voto_to);
                    if (!(strcmp(to_v.nome_candidato, candidatos_to.nome_candidato))) {

                        aux = 1;
                        int aux3 = 0;

                        votos_cont = to_v.numeros_votos;
                        fseek(arq_voto_to,100,SEEK_CUR);

                        votos_cont += 1;
                        to_v.numeros_votos = votos_cont;

                        fwrite(&to_v, sizeof(struct voto), 1, arq_voto_to);

                        fclose(arq_candidato_to);
                        fclose(arq_voto_to);

                        aux2 = 1;

                        return 1;

                    }

                } while (!feof(arq_voto_to));

            }

            if(arq_voto_to != NULL && aux == 0){
                strcpy(to_v.municipio, candidatos_to.municipio_candidato);
                strcpy(to_v.nome_candidato, candidatos_to.nome_candidato);
                strcpy(to_v.sigla_partido, candidatos_to.sigla_partido_candidato);
                to_v.numeros_votos = 1;
                fwrite(&to_v, sizeof(struct voto), 1, arq_voto_to);

                fclose(arq_candidato_to);
                fclose(arq_voto_to);

                aux2 = 1;

                return 1;
            }
        }


    } while (!feof(arq_candidato_to)); // enquanto não chegar ao final do arquivo


    fclose(arq_candidato_to);
    fclose(arq_voto_to);

    return 0;
}




/*
 * CÓDIGOS VOLTADO PARA A VOTACAO
 */

int func_proc_vote() {


    char cad_dados[3]; // ira ficar amarzenada a UF que o usuario digitar
    int tamStr,i;

    estados_aparecer();

    getchar();
    printf("\nDigite a UF do Estado para o cadastro da secao eleitoral: ");
    fgets(cad_dados,3,stdin);

    // Converte minuscula em maiscula
    tamStr = strlen(cad_dados);
    for(i=0; i < tamStr; i++)
    {                            // Converte cada caracter de Str
        cad_dados[i] =toupper(cad_dados[i]);  // para maiuscula
    }

    // Fazer o cadastro de secoes eleitorais
    // É necessario zonas eleitorais para fazer o cadastro da secao
    if(!(strcmp(cad_dados,"AC"))) {

        FILE *arq_zona_ac;
        FILE *arq_secao_ac;
        FILE *arq_mun_ac;
        FILE *arq_candidato_ac;
        FILE *arq_vot_eleitores_ac;


        arq_vot_eleitores_ac = fopen("arq_vot_eleitores_ac.bin","ab");
        arq_zona_ac = fopen("arq_zona_ac.bin", "rb");
        arq_secao_ac = fopen("arq_secao_ac.bin", "rb");
        arq_mun_ac = fopen("arq_mun_ac.bin", "rb");
        arq_candidato_ac = fopen("arq_candidato_ac.bin","rb");

        if (arq_zona_ac != NULL || arq_secao_ac != NULL || arq_mun_ac != NULL || arq_candidato_ac != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_ac.municipio_eleitor, 100, stdin);

            while (fread(&ac, sizeof(struct municipio), 1, arq_mun_ac)) {
                if (!(strcmp(ac.nomeMunicipio, d_eleitor_ac.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_ac.num_zona_eleitor);

                    while (fread(&ac_zona, sizeof(struct info_zona), 1, arq_zona_ac)) {
                        if (ac_zona.numero_zona == d_eleitor_ac.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_ac.num_secao_eleitor);

                            while (fread(&ac_secao, sizeof(struct info_secao), 1, arq_secao_ac)) {
                                if (ac_secao.num_secao == d_eleitor_ac.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_ac(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_ac()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_ac.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_ac.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_ac.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_ac, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_ac);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_ac);
        fclose(arq_secao_ac);
        fclose(arq_mun_ac);
        fclose(arq_candidato_ac);
        fclose(arq_vot_eleitores_ac);
    }

    else if(!(strcmp(cad_dados,"AL"))) {

        FILE *arq_zona_al;
        FILE *arq_secao_al;
        FILE *arq_mun_al;
        FILE *arq_candidato_al;
        FILE *arq_vot_eleitores_al;


        arq_vot_eleitores_al = fopen("arq_vot_eleitores_al.bin","ab");
        arq_zona_al = fopen("arq_zona_al.bin", "rb");
        arq_secao_al = fopen("arq_secao_al.bin", "rb");
        arq_mun_al = fopen("arq_mun_al.bin", "rb");
        arq_candidato_al = fopen("arq_candidato_al.bin","rb");

        if (arq_zona_al != NULL || arq_secao_al != NULL || arq_mun_al != NULL || arq_candidato_al != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_al.municipio_eleitor, 100, stdin);

            while (fread(&al, sizeof(struct municipio), 1, arq_mun_al)) {
                if (!(strcmp(al.nomeMunicipio, d_eleitor_al.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_al.num_zona_eleitor);

                    while (fread(&al_zona, sizeof(struct info_zona), 1, arq_zona_al)) {
                        if (al_zona.numero_zona == d_eleitor_al.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_al.num_secao_eleitor);

                            while (fread(&al_secao, sizeof(struct info_secao), 1, arq_secao_al)) {
                                if (al_secao.num_secao == d_eleitor_al.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_al(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_al()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_al.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_al.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_al.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_al, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_al);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_al);
        fclose(arq_secao_al);
        fclose(arq_mun_al);
        fclose(arq_candidato_al);
        fclose(arq_vot_eleitores_al);
    }

    else if(!(strcmp(cad_dados,"AP"))) {

        FILE *arq_zona_ap;
        FILE *arq_secao_ap;
        FILE *arq_mun_ap;
        FILE *arq_candidato_ap;
        FILE *arq_vot_eleitores_ap;


        arq_vot_eleitores_ap = fopen("arq_vot_eleitores_ap.bin","ab");
        arq_zona_ap = fopen("arq_zona_ap.bin", "rb");
        arq_secao_ap = fopen("arq_secao_ap.bin", "rb");
        arq_mun_ap = fopen("arq_mun_ap.bin", "rb");
        arq_candidato_ap = fopen("arq_candidato_ap.bin","rb");

        if (arq_zona_ap != NULL || arq_secao_ap != NULL || arq_mun_ap != NULL || arq_candidato_ap != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_ap.municipio_eleitor, 100, stdin);

            while (fread(&ap, sizeof(struct municipio), 1, arq_mun_ap)) {
                if (!(strcmp(ap.nomeMunicipio, d_eleitor_ap.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_ap.num_zona_eleitor);

                    while (fread(&ap_zona, sizeof(struct info_zona), 1, arq_zona_ap)) {
                        if (ap_zona.numero_zona == d_eleitor_ap.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_ap.num_secao_eleitor);

                            while (fread(&ap_secao, sizeof(struct info_secao), 1, arq_secao_ap)) {
                                if (ap_secao.num_secao == d_eleitor_ap.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_ap(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_ap()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_ap.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_ap.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_ap.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_ap, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_ap);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_ap);
        fclose(arq_secao_ap);
        fclose(arq_mun_ap);
        fclose(arq_candidato_ap);
        fclose(arq_vot_eleitores_ap);

    }

    else if(!(strcmp(cad_dados,"AM"))) {

        FILE *arq_zona_am;
        FILE *arq_secao_am;
        FILE *arq_mun_am;
        FILE *arq_candidato_am;
        FILE *arq_vot_eleitores_am;


        arq_vot_eleitores_am = fopen("arq_vot_eleitores_am.bin","ab");
        arq_zona_am = fopen("arq_zona_am.bin", "rb");
        arq_secao_am = fopen("arq_secao_am.bin", "rb");
        arq_mun_am = fopen("arq_mun_am.bin", "rb");
        arq_candidato_am = fopen("arq_candidato_am.bin","rb");

        if (arq_zona_am != NULL || arq_secao_am != NULL || arq_mun_am != NULL || arq_candidato_am != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_am.municipio_eleitor, 100, stdin);

            while (fread(&am, sizeof(struct municipio), 1, arq_mun_am)) {
                if (!(strcmp(am.nomeMunicipio, d_eleitor_am.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_am.num_zona_eleitor);

                    while (fread(&am_zona, sizeof(struct info_zona), 1, arq_zona_am)) {
                        if (am_zona.numero_zona == d_eleitor_am.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_am.num_secao_eleitor);

                            while (fread(&am_secao, sizeof(struct info_secao), 1, arq_secao_am)) {
                                if (am_secao.num_secao == d_eleitor_am.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_am(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_am()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_am.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_am.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_am.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_am, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_am);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_am);
        fclose(arq_secao_am);
        fclose(arq_mun_am);
        fclose(arq_candidato_am);
        fclose(arq_vot_eleitores_am);

    }

    else if(!(strcmp(cad_dados,"BA"))) {

        FILE *arq_zona_ba;
        FILE *arq_secao_ba;
        FILE *arq_mun_ba;
        FILE *arq_candidato_ba;
        FILE *arq_vot_eleitores_ba;


        arq_vot_eleitores_ba = fopen("arq_vot_eleitores_ba.bin","ab");
        arq_zona_ba = fopen("arq_zona_ba.bin", "rb");
        arq_secao_ba = fopen("arq_secao_ba.bin", "rb");
        arq_mun_ba = fopen("arq_mun_ba.bin", "rb");
        arq_candidato_ba = fopen("arq_candidato_ba.bin","rb");

        if (arq_zona_ba != NULL || arq_secao_ba != NULL || arq_mun_ba != NULL || arq_candidato_ba != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_ba.municipio_eleitor, 100, stdin);

            while (fread(&ba, sizeof(struct municipio), 1, arq_mun_ba)) {
                if (!(strcmp(ba.nomeMunicipio, d_eleitor_ba.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_ba.num_zona_eleitor);

                    while (fread(&ba_zona, sizeof(struct info_zona), 1, arq_zona_ba)) {
                        if (am_zona.numero_zona == d_eleitor_ba.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_ba.num_secao_eleitor);

                            while (fread(&ba_secao, sizeof(struct info_secao), 1, arq_secao_ba)) {
                                if (ba_secao.num_secao == d_eleitor_ba.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_ba(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_ba()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_ba.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_ba.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_ba.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_ba, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_ba);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_ba);
        fclose(arq_secao_ba);
        fclose(arq_mun_ba);
        fclose(arq_candidato_ba);
        fclose(arq_vot_eleitores_ba);

    }

    else if(!(strcmp(cad_dados,"CE"))) {

        FILE *arq_zona_ce;
        FILE *arq_secao_ce;
        FILE *arq_mun_ce;
        FILE *arq_candidato_ce;
        FILE *arq_vot_eleitores_ce;


        arq_vot_eleitores_ce = fopen("arq_vot_eleitores_ce.bin","ab");
        arq_zona_ce = fopen("arq_zona_ce.bin", "rb");
        arq_secao_ce = fopen("arq_secao_ce.bin", "rb");
        arq_mun_ce = fopen("arq_mun_ce.bin", "rb");
        arq_candidato_ce = fopen("arq_candidato_ce.bin","rb");

        if (arq_zona_ce != NULL || arq_secao_ce != NULL || arq_mun_ce != NULL || arq_candidato_ce != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_ce.municipio_eleitor, 100, stdin);

            while (fread(&ce, sizeof(struct municipio), 1, arq_mun_ce)) {
                if (!(strcmp(ce.nomeMunicipio, d_eleitor_ce.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_ce.num_zona_eleitor);

                    while (fread(&ce_zona, sizeof(struct info_zona), 1, arq_zona_ce)) {
                        if (ce_zona.numero_zona == d_eleitor_ce.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_ce.num_secao_eleitor);

                            while (fread(&ce_secao, sizeof(struct info_secao), 1, arq_secao_ce)) {
                                if (ce_secao.num_secao == d_eleitor_ce.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_ce(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_ce()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_ce.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_ce.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_ce.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_ce, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_ce);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_ce);
        fclose(arq_secao_ce);
        fclose(arq_mun_ce);
        fclose(arq_candidato_ce);
        fclose(arq_vot_eleitores_ce);

    }

    else if(!(strcmp(cad_dados,"ES"))) {

        FILE *arq_zona_es;
        FILE *arq_secao_es;
        FILE *arq_mun_es;
        FILE *arq_candidato_es;
        FILE *arq_vot_eleitores_es;


        arq_vot_eleitores_es = fopen("arq_vot_eleitores_es.bin","ab");
        arq_zona_es = fopen("arq_zona_es.bin", "rb");
        arq_secao_es = fopen("arq_secao_es.bin", "rb");
        arq_mun_es = fopen("arq_mun_es.bin", "rb");
        arq_candidato_es = fopen("arq_candidato_es.bin","rb");

        if (arq_zona_es != NULL || arq_secao_es != NULL || arq_mun_es != NULL || arq_candidato_es != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_es.municipio_eleitor, 100, stdin);

            while (fread(&es, sizeof(struct municipio), 1, arq_mun_es)) {
                if (!(strcmp(es.nomeMunicipio, d_eleitor_es.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_es.num_zona_eleitor);

                    while (fread(&es_zona, sizeof(struct info_zona), 1, arq_zona_es)) {
                        if (es_zona.numero_zona == d_eleitor_es.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_es.num_secao_eleitor);

                            while (fread(&es_secao, sizeof(struct info_secao), 1, arq_secao_es)) {
                                if (es_secao.num_secao == d_eleitor_es.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_es(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_es()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_es.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_es.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_es.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_es, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_es);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_es);
        fclose(arq_secao_es);
        fclose(arq_mun_es);
        fclose(arq_candidato_es);
        fclose(arq_vot_eleitores_es);

    }

    else if(!(strcmp(cad_dados,"GO"))) {

        FILE *arq_zona_go;
        FILE *arq_secao_go;
        FILE *arq_mun_go;
        FILE *arq_candidato_go;
        FILE *arq_vot_eleitores_go;


        arq_vot_eleitores_go = fopen("arq_vot_eleitores_go.bin","ab");
        arq_zona_go = fopen("arq_zona_go.bin", "rb");
        arq_secao_go = fopen("arq_secao_go.bin", "rb");
        arq_mun_go = fopen("arq_mun_go.bin", "rb");
        arq_candidato_go = fopen("arq_candidato_go.bin","rb");

        if (arq_zona_go != NULL || arq_secao_go != NULL || arq_mun_go != NULL || arq_candidato_go != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_go.municipio_eleitor, 100, stdin);

            while (fread(&go, sizeof(struct municipio), 1, arq_mun_go)) {
                if (!(strcmp(go.nomeMunicipio, d_eleitor_go.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_go.num_zona_eleitor);

                    while (fread(&go_zona, sizeof(struct info_zona), 1, arq_zona_go)) {
                        if (go_zona.numero_zona == d_eleitor_go.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_go.num_secao_eleitor);

                            while (fread(&go_secao, sizeof(struct info_secao), 1, arq_secao_go)) {
                                if (go_secao.num_secao == d_eleitor_go.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_go(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_go()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_go.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_go.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_go.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_go, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_go);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_go);
        fclose(arq_secao_go);
        fclose(arq_mun_go);
        fclose(arq_candidato_go);
        fclose(arq_vot_eleitores_go);

    }

    else if(!(strcmp(cad_dados,"MA"))) {

        FILE *arq_zona_ma;
        FILE *arq_secao_ma;
        FILE *arq_mun_ma;
        FILE *arq_candidato_ma;
        FILE *arq_vot_eleitores_ma;


        arq_vot_eleitores_ma = fopen("arq_vot_eleitores_ma.bin","ab");
        arq_zona_ma = fopen("arq_zona_ma.bin", "rb");
        arq_secao_ma = fopen("arq_secao_ma.bin", "rb");
        arq_mun_ma = fopen("arq_mun_ma.bin", "rb");
        arq_candidato_ma = fopen("arq_candidato_ma.bin","rb");

        if (arq_zona_ma != NULL || arq_secao_ma != NULL || arq_mun_ma != NULL || arq_candidato_ma != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_ma.municipio_eleitor, 100, stdin);

            while (fread(&ma, sizeof(struct municipio), 1, arq_mun_ma)) {
                if (!(strcmp(ma.nomeMunicipio, d_eleitor_ma.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_ma.num_zona_eleitor);

                    while (fread(&ma_zona, sizeof(struct info_zona), 1, arq_zona_ma)) {
                        if (ma_zona.numero_zona == d_eleitor_ma.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_ma.num_secao_eleitor);

                            while (fread(&ma_secao, sizeof(struct info_secao), 1, arq_secao_ma)) {
                                if (ma_secao.num_secao == d_eleitor_ma.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_ma(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_ma()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_ma.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_ma.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_ma.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_ma, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_ma);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_ma);
        fclose(arq_secao_ma);
        fclose(arq_mun_ma);
        fclose(arq_candidato_ma);
        fclose(arq_vot_eleitores_ma);

    }

    else if(!(strcmp(cad_dados,"MT"))) {

        FILE *arq_zona_mt;
        FILE *arq_secao_mt;
        FILE *arq_mun_mt;
        FILE *arq_candidato_mt;
        FILE *arq_vot_eleitores_mt;


        arq_vot_eleitores_mt = fopen("arq_vot_eleitores_mt.bin","ab");
        arq_zona_mt = fopen("arq_zona_mt.bin", "rb");
        arq_secao_mt = fopen("arq_secao_mt.bin", "rb");
        arq_mun_mt = fopen("arq_mun_mt.bin", "rb");
        arq_candidato_mt = fopen("arq_candidato_mt.bin","rb");

        if (arq_zona_mt != NULL || arq_secao_mt != NULL || arq_mun_mt != NULL || arq_candidato_mt != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_mt.municipio_eleitor, 100, stdin);

            while (fread(&mt, sizeof(struct municipio), 1, arq_mun_mt)) {
                if (!(strcmp(mt.nomeMunicipio, d_eleitor_mt.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_mt.num_zona_eleitor);

                    while (fread(&mt_zona, sizeof(struct info_zona), 1, arq_zona_mt)) {
                        if (mt_zona.numero_zona == d_eleitor_mt.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_mt.num_secao_eleitor);

                            while (fread(&mt_secao, sizeof(struct info_secao), 1, arq_secao_mt)) {
                                if (mt_secao.num_secao == d_eleitor_mt.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_mt(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_mt()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_mt.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_mt.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_mt.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_mt, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_mt);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_mt);
        fclose(arq_secao_mt);
        fclose(arq_mun_mt);
        fclose(arq_candidato_mt);
        fclose(arq_vot_eleitores_mt);

    }

    else if(!(strcmp(cad_dados,"MS"))) {

        FILE *arq_zona_ms;
        FILE *arq_secao_ms;
        FILE *arq_mun_ms;
        FILE *arq_candidato_ms;
        FILE *arq_vot_eleitores_ms;


        arq_vot_eleitores_ms = fopen("arq_vot_eleitores_ms.bin","ab");
        arq_zona_ms = fopen("arq_zona_ms.bin", "rb");
        arq_secao_ms = fopen("arq_secao_ms.bin", "rb");
        arq_mun_ms = fopen("arq_mun_ms.bin", "rb");
        arq_candidato_ms = fopen("arq_candidato_ms.bin","rb");

        if (arq_zona_ms != NULL || arq_secao_ms != NULL || arq_mun_ms != NULL || arq_candidato_ms != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_ms.municipio_eleitor, 100, stdin);

            while (fread(&ms, sizeof(struct municipio), 1, arq_mun_ms)) {
                if (!(strcmp(ms.nomeMunicipio, d_eleitor_ms.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_ms.num_zona_eleitor);

                    while (fread(&ms_zona, sizeof(struct info_zona), 1, arq_zona_ms)) {
                        if (ms_zona.numero_zona == d_eleitor_ms.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_ms.num_secao_eleitor);

                            while (fread(&ms_secao, sizeof(struct info_secao), 1, arq_secao_ms)) {
                                if (ms_secao.num_secao == d_eleitor_ms.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_ms(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_ms()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_ms.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_ms.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_ms.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_ms, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_ms);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_ms);
        fclose(arq_secao_ms);
        fclose(arq_mun_ms);
        fclose(arq_candidato_ms);
        fclose(arq_vot_eleitores_ms);

    }

    else if(!(strcmp(cad_dados,"MG"))) {

        FILE *arq_zona_mg;
        FILE *arq_secao_mg;
        FILE *arq_mun_mg;
        FILE *arq_candidato_mg;
        FILE *arq_vot_eleitores_mg;


        arq_vot_eleitores_mg = fopen("arq_vot_eleitores_mg.bin","ab");
        arq_zona_mg = fopen("arq_zona_mg.bin", "rb");
        arq_secao_mg = fopen("arq_secao_mg.bin", "rb");
        arq_mun_mg = fopen("arq_mun_mg.bin", "rb");
        arq_candidato_mg = fopen("arq_candidato_mg.bin","rb");

        if (arq_zona_mg != NULL || arq_secao_mg != NULL || arq_mun_mg != NULL || arq_candidato_mg != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_mg.municipio_eleitor, 100, stdin);

            while (fread(&mg, sizeof(struct municipio), 1, arq_mun_mg)) {
                if (!(strcmp(mg.nomeMunicipio, d_eleitor_mg.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_mg.num_zona_eleitor);

                    while (fread(&mg_zona, sizeof(struct info_zona), 1, arq_zona_mg)) {
                        if (mg_zona.numero_zona == d_eleitor_mg.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_mg.num_secao_eleitor);

                            while (fread(&mg_secao, sizeof(struct info_secao), 1, arq_secao_mg)) {
                                if (mg_secao.num_secao == d_eleitor_mg.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_mg(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_mg()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_mg.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_mg.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_mg.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_mg, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_mg);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_mg);
        fclose(arq_secao_mg);
        fclose(arq_mun_mg);
        fclose(arq_candidato_mg);
        fclose(arq_vot_eleitores_mg);

    }

    else if(!(strcmp(cad_dados,"PA"))) {

        FILE *arq_zona_pa;
        FILE *arq_secao_pa;
        FILE *arq_mun_pa;
        FILE *arq_candidato_pa;
        FILE *arq_vot_eleitores_pa;


        arq_vot_eleitores_pa = fopen("arq_vot_eleitores_pa.bin","ab");
        arq_zona_pa = fopen("arq_zona_pa.bin", "rb");
        arq_secao_pa = fopen("arq_secao_pa.bin", "rb");
        arq_mun_pa = fopen("arq_mun_pa.bin", "rb");
        arq_candidato_pa = fopen("arq_candidato_pa.bin","rb");

        if (arq_zona_pa != NULL || arq_secao_pa != NULL || arq_mun_pa != NULL || arq_candidato_pa != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_pa.municipio_eleitor, 100, stdin);

            while (fread(&pa, sizeof(struct municipio), 1, arq_mun_pa)) {
                if (!(strcmp(pa.nomeMunicipio, d_eleitor_pa.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_pa.num_zona_eleitor);

                    while (fread(&pa_zona, sizeof(struct info_zona), 1, arq_zona_pa)) {
                        if (pa_zona.numero_zona == d_eleitor_pa.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_pa.num_secao_eleitor);

                            while (fread(&pa_secao, sizeof(struct info_secao), 1, arq_secao_pa)) {
                                if (pa_secao.num_secao == d_eleitor_pa.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_pa(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_pa()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_pa.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_pa.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_pa.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_pa, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_pa);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_pa);
        fclose(arq_secao_pa);
        fclose(arq_mun_pa);
        fclose(arq_candidato_pa);
        fclose(arq_vot_eleitores_pa);

    }

    else if(!(strcmp(cad_dados,"PB"))) {

        FILE *arq_zona_pb;
        FILE *arq_secao_pb;
        FILE *arq_mun_pb;
        FILE *arq_candidato_pb;
        FILE *arq_vot_eleitores_pb;


        arq_vot_eleitores_pb = fopen("arq_vot_eleitores_pb.bin","ab");
        arq_zona_pb = fopen("arq_zona_pb.bin", "rb");
        arq_secao_pb = fopen("arq_secao_pb.bin", "rb");
        arq_mun_pb = fopen("arq_mun_pb.bin", "rb");
        arq_candidato_pb = fopen("arq_candidato_pb.bin","rb");

        if (arq_zona_pb != NULL || arq_secao_pb != NULL || arq_mun_pb != NULL || arq_candidato_pb != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_pb.municipio_eleitor, 100, stdin);

            while (fread(&pb, sizeof(struct municipio), 1, arq_mun_pb)) {
                if (!(strcmp(pb.nomeMunicipio, d_eleitor_pb.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_pb.num_zona_eleitor);

                    while (fread(&pb_zona, sizeof(struct info_zona), 1, arq_zona_pb)) {
                        if (pb_zona.numero_zona == d_eleitor_pb.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_pb.num_secao_eleitor);

                            while (fread(&pb_secao, sizeof(struct info_secao), 1, arq_secao_pb)) {
                                if (pb_secao.num_secao == d_eleitor_pb.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_pb(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_pb()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_pb.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_pb.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_pb.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_pb, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_pb);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_pb);
        fclose(arq_secao_pb);
        fclose(arq_mun_pb);
        fclose(arq_candidato_pb);
        fclose(arq_vot_eleitores_pb);

    }

    else if(!(strcmp(cad_dados,"PR"))) {

        FILE *arq_zona_pr;
        FILE *arq_secao_pr;
        FILE *arq_mun_pr;
        FILE *arq_candidato_pr;
        FILE *arq_vot_eleitores_pr;


        arq_vot_eleitores_pr = fopen("arq_vot_eleitores_pr.bin","ab");
        arq_zona_pr = fopen("arq_zona_pr.bin", "rb");
        arq_secao_pr = fopen("arq_secao_pr.bin", "rb");
        arq_mun_pr = fopen("arq_mun_pr.bin", "rb");
        arq_candidato_pr = fopen("arq_candidato_pr.bin","rb");

        if (arq_zona_pr != NULL || arq_secao_pr != NULL || arq_mun_pr != NULL || arq_candidato_pr != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_pr.municipio_eleitor, 100, stdin);

            while (fread(&pr, sizeof(struct municipio), 1, arq_mun_pr)) {
                if (!(strcmp(pr.nomeMunicipio, d_eleitor_pr.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_pr.num_zona_eleitor);

                    while (fread(&pr_zona, sizeof(struct info_zona), 1, arq_zona_pr)) {
                        if (pr_zona.numero_zona == d_eleitor_pr.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_pr.num_secao_eleitor);

                            while (fread(&pr_secao, sizeof(struct info_secao), 1, arq_secao_pr)) {
                                if (pr_secao.num_secao == d_eleitor_pr.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_pr(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_pr()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_pr.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_pr.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_pr.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_pr, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_pr);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_pr);
        fclose(arq_secao_pr);
        fclose(arq_mun_pr);
        fclose(arq_candidato_pr);
        fclose(arq_vot_eleitores_pr);

    }

    else if(!(strcmp(cad_dados,"PE"))) {

        FILE *arq_zona_pe;
        FILE *arq_secao_pe;
        FILE *arq_mun_pe;
        FILE *arq_candidato_pe;
        FILE *arq_vot_eleitores_pe;


        arq_vot_eleitores_pe = fopen("arq_vot_eleitores_pe.bin","ab");
        arq_zona_pe = fopen("arq_zona_pe.bin", "rb");
        arq_secao_pe = fopen("arq_secao_pe.bin", "rb");
        arq_mun_pe = fopen("arq_mun_pe.bin", "rb");
        arq_candidato_pe = fopen("arq_candidato_pe.bin","rb");

        if (arq_zona_pe != NULL || arq_secao_pe != NULL || arq_mun_pe != NULL || arq_candidato_pe != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_pe.municipio_eleitor, 100, stdin);

            while (fread(&pe, sizeof(struct municipio), 1, arq_mun_pe)) {
                if (!(strcmp(pe.nomeMunicipio, d_eleitor_pe.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_pe.num_zona_eleitor);

                    while (fread(&pe_zona, sizeof(struct info_zona), 1, arq_zona_pe)) {
                        if (pe_zona.numero_zona == d_eleitor_pe.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_pe.num_secao_eleitor);

                            while (fread(&pe_secao, sizeof(struct info_secao), 1, arq_secao_pe)) {
                                if (pe_secao.num_secao == d_eleitor_pe.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_pe(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_pe()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_pe.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_pe.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_pe.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_pe, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_pe);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_pe);
        fclose(arq_secao_pe);
        fclose(arq_mun_pe);
        fclose(arq_candidato_pe);
        fclose(arq_vot_eleitores_pe);

    }

    else if(!(strcmp(cad_dados,"PI"))) {

        FILE *arq_zona_pi;
        FILE *arq_secao_pi;
        FILE *arq_mun_pi;
        FILE *arq_candidato_pi;
        FILE *arq_vot_eleitores_pi;


        arq_vot_eleitores_pi = fopen("arq_vot_eleitores_pi.bin","ab");
        arq_zona_pi = fopen("arq_zona_pi.bin", "rb");
        arq_secao_pi = fopen("arq_secao_pi.bin", "rb");
        arq_mun_pi = fopen("arq_mun_pi.bin", "rb");
        arq_candidato_pi = fopen("arq_candidato_pi.bin","rb");

        if (arq_zona_pi != NULL || arq_secao_pi != NULL || arq_mun_pi != NULL || arq_candidato_pi != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_pi.municipio_eleitor, 100, stdin);

            while (fread(&pi, sizeof(struct municipio), 1, arq_mun_pi)) {
                if (!(strcmp(pi.nomeMunicipio, d_eleitor_pi.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_pi.num_zona_eleitor);

                    while (fread(&pi_zona, sizeof(struct info_zona), 1, arq_zona_pi)) {
                        if (pi_zona.numero_zona == d_eleitor_pi.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_pi.num_secao_eleitor);

                            while (fread(&pi_secao, sizeof(struct info_secao), 1, arq_secao_pi)) {
                                if (pi_secao.num_secao == d_eleitor_pi.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_pi(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_pi()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_pi.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_pi.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_pi.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_pi, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_pi);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_pi);
        fclose(arq_secao_pi);
        fclose(arq_mun_pi);
        fclose(arq_candidato_pi);
        fclose(arq_vot_eleitores_pi);

    }

    else if(!(strcmp(cad_dados,"RJ"))) {

        FILE *arq_zona_rj;
        FILE *arq_secao_rj;
        FILE *arq_mun_rj;
        FILE *arq_candidato_rj;
        FILE *arq_vot_eleitores_rj;


        arq_vot_eleitores_rj = fopen("arq_vot_eleitores_rj.bin","ab");
        arq_zona_rj = fopen("arq_zona_rj.bin", "rb");
        arq_secao_rj = fopen("arq_secao_rj.bin", "rb");
        arq_mun_rj = fopen("arq_mun_rj.bin", "rb");
        arq_candidato_rj = fopen("arq_candidato_rj.bin","rb");

        if (arq_zona_rj != NULL || arq_secao_rj != NULL || arq_mun_rj != NULL || arq_candidato_rj != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_rj.municipio_eleitor, 100, stdin);

            while (fread(&rj, sizeof(struct municipio), 1, arq_mun_rj)) {
                if (!(strcmp(rj.nomeMunicipio, d_eleitor_rj.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_rj.num_zona_eleitor);

                    while (fread(&rj_zona, sizeof(struct info_zona), 1, arq_zona_rj)) {
                        if (rj_zona.numero_zona == d_eleitor_rj.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_rj.num_secao_eleitor);

                            while (fread(&rj_secao, sizeof(struct info_secao), 1, arq_secao_rj)) {
                                if (rj_secao.num_secao == d_eleitor_rj.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_rj(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_rj()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_rj.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_rj.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_rj.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_rj, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_rj);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_rj);
        fclose(arq_secao_rj);
        fclose(arq_mun_rj);
        fclose(arq_candidato_rj);
        fclose(arq_vot_eleitores_rj);

    }

    else if(!(strcmp(cad_dados,"RN"))) {

        FILE *arq_zona_rn;
        FILE *arq_secao_rn;
        FILE *arq_mun_rn;
        FILE *arq_candidato_rn;
        FILE *arq_vot_eleitores_rn;


        arq_vot_eleitores_rn = fopen("arq_vot_eleitores_rn.bin","ab");
        arq_zona_rn = fopen("arq_zona_rn.bin", "rb");
        arq_secao_rn = fopen("arq_secao_rn.bin", "rb");
        arq_mun_rn = fopen("arq_mun_rn.bin", "rb");
        arq_candidato_rn = fopen("arq_candidato_rn.bin","rb");

        if (arq_zona_rn != NULL || arq_secao_rn != NULL || arq_mun_rn != NULL || arq_candidato_rn != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_rn.municipio_eleitor, 100, stdin);

            while (fread(&rn, sizeof(struct municipio), 1, arq_mun_rn)) {
                if (!(strcmp(rn.nomeMunicipio, d_eleitor_rn.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_rn.num_zona_eleitor);

                    while (fread(&rn_zona, sizeof(struct info_zona), 1, arq_zona_rn)) {
                        if (rn_zona.numero_zona == d_eleitor_rn.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_rn.num_secao_eleitor);

                            while (fread(&rn_secao, sizeof(struct info_secao), 1, arq_secao_rn)) {
                                if (rn_secao.num_secao == d_eleitor_rn.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_rn(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_rn()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_rn.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_rn.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_rn.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_rn, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_rn);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_rn);
        fclose(arq_secao_rn);
        fclose(arq_mun_rn);
        fclose(arq_candidato_rn);
        fclose(arq_vot_eleitores_rn);

    }

    else if(!(strcmp(cad_dados,"RS"))) {

        FILE *arq_zona_rs;
        FILE *arq_secao_rs;
        FILE *arq_mun_rs;
        FILE *arq_candidato_rs;
        FILE *arq_vot_eleitores_rs;


        arq_vot_eleitores_rs = fopen("arq_vot_eleitores_rs.bin","ab");
        arq_zona_rs = fopen("arq_zona_rs.bin", "rb");
        arq_secao_rs = fopen("arq_secao_rs.bin", "rb");
        arq_mun_rs = fopen("arq_mun_rs.bin", "rb");
        arq_candidato_rs = fopen("arq_candidato_rs.bin","rb");

        if (arq_zona_rs != NULL || arq_secao_rs != NULL || arq_mun_rs != NULL || arq_candidato_rs != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_rs.municipio_eleitor, 100, stdin);

            while (fread(&rs, sizeof(struct municipio), 1, arq_mun_rs)) {
                if (!(strcmp(rs.nomeMunicipio, d_eleitor_rs.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_rs.num_zona_eleitor);

                    while (fread(&rs_zona, sizeof(struct info_zona), 1, arq_zona_rs)) {
                        if (rs_zona.numero_zona == d_eleitor_rs.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_rs.num_secao_eleitor);

                            while (fread(&rs_secao, sizeof(struct info_secao), 1, arq_secao_rs)) {
                                if (rs_secao.num_secao == d_eleitor_rs.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_rs(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_rs()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_rs.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_rs.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_rs.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_rs, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_rs);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_rs);
        fclose(arq_secao_rs);
        fclose(arq_mun_rs);
        fclose(arq_candidato_rs);
        fclose(arq_vot_eleitores_rs);

    }

    else if(!(strcmp(cad_dados,"RO"))) {

        FILE *arq_zona_ro;
        FILE *arq_secao_ro;
        FILE *arq_mun_ro;
        FILE *arq_candidato_ro;
        FILE *arq_vot_eleitores_ro;


        arq_vot_eleitores_ro = fopen("arq_vot_eleitores_ro.bin","ab");
        arq_zona_ro = fopen("arq_zona_ro.bin", "rb");
        arq_secao_ro = fopen("arq_secao_ro.bin", "rb");
        arq_mun_ro = fopen("arq_mun_ro.bin", "rb");
        arq_candidato_ro = fopen("arq_candidato_ro.bin","rb");

        if (arq_zona_ro != NULL || arq_secao_ro != NULL || arq_mun_ro != NULL || arq_candidato_ro != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_ro.municipio_eleitor, 100, stdin);

            while (fread(&ro, sizeof(struct municipio), 1, arq_mun_ro)) {
                if (!(strcmp(ro.nomeMunicipio, d_eleitor_ro.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_ro.num_zona_eleitor);

                    while (fread(&ro_zona, sizeof(struct info_zona), 1, arq_zona_ro)) {
                        if (ro_zona.numero_zona == d_eleitor_ro.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_ro.num_secao_eleitor);

                            while (fread(&ro_secao, sizeof(struct info_secao), 1, arq_secao_ro)) {
                                if (ro_secao.num_secao == d_eleitor_ro.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_ro(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_ro()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_ro.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_ro.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_ro.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_ro, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_ro);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_ro);
        fclose(arq_secao_ro);
        fclose(arq_mun_ro);
        fclose(arq_candidato_ro);
        fclose(arq_vot_eleitores_ro);

    }

    else if(!(strcmp(cad_dados,"RR"))) {

        FILE *arq_zona_rr;
        FILE *arq_secao_rr;
        FILE *arq_mun_rr;
        FILE *arq_candidato_rr;
        FILE *arq_vot_eleitores_rr;


        arq_vot_eleitores_rr = fopen("arq_vot_eleitores_rr.bin","ab");
        arq_zona_rr = fopen("arq_zona_rr.bin", "rb");
        arq_secao_rr = fopen("arq_secao_rr.bin", "rb");
        arq_mun_rr = fopen("arq_mun_rr.bin", "rb");
        arq_candidato_rr = fopen("arq_candidato_rr.bin","rb");

        if (arq_zona_rr != NULL || arq_secao_rr != NULL || arq_mun_rr != NULL || arq_candidato_rr != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_rr.municipio_eleitor, 100, stdin);

            while (fread(&rr, sizeof(struct municipio), 1, arq_mun_rr)) {
                if (!(strcmp(rr.nomeMunicipio, d_eleitor_rr.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_rr.num_zona_eleitor);

                    while (fread(&rr_zona, sizeof(struct info_zona), 1, arq_zona_rr)) {
                        if (rr_zona.numero_zona == d_eleitor_rr.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_rr.num_secao_eleitor);

                            while (fread(&rr_secao, sizeof(struct info_secao), 1, arq_secao_rr)) {
                                if (rr_secao.num_secao == d_eleitor_rr.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_rr(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_rr()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_rr.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_rr.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_rr.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_rr, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_rr);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_rr);
        fclose(arq_secao_rr);
        fclose(arq_mun_rr);
        fclose(arq_candidato_rr);
        fclose(arq_vot_eleitores_rr);

    }

    else if(!(strcmp(cad_dados,"SC"))) {

        FILE *arq_zona_sc;
        FILE *arq_secao_sc;
        FILE *arq_mun_sc;
        FILE *arq_candidato_sc;
        FILE *arq_vot_eleitores_sc;


        arq_vot_eleitores_sc = fopen("arq_vot_eleitores_sc.bin","ab");
        arq_zona_sc = fopen("arq_zona_sc.bin", "rb");
        arq_secao_sc = fopen("arq_secao_sc.bin", "rb");
        arq_mun_sc = fopen("arq_mun_sc.bin", "rb");
        arq_candidato_sc = fopen("arq_candidato_sc.bin","rb");

        if (arq_zona_sc != NULL || arq_secao_sc != NULL || arq_mun_sc != NULL || arq_candidato_sc != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_sc.municipio_eleitor, 100, stdin);

            while (fread(&sc, sizeof(struct municipio), 1, arq_mun_sc)) {
                if (!(strcmp(sc.nomeMunicipio, d_eleitor_sc.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_sc.num_zona_eleitor);

                    while (fread(&sc_zona, sizeof(struct info_zona), 1, arq_zona_sc)) {
                        if (sc_zona.numero_zona == d_eleitor_sc.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_sc.num_secao_eleitor);

                            while (fread(&sc_secao, sizeof(struct info_secao), 1, arq_secao_sc)) {
                                if (sc_secao.num_secao == d_eleitor_sc.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_sc(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_sc()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_sc.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_sc.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_sc.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_sc, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_sc);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_sc);
        fclose(arq_secao_sc);
        fclose(arq_mun_sc);
        fclose(arq_candidato_sc);
        fclose(arq_vot_eleitores_sc);

    }

    else if(!(strcmp(cad_dados,"SP"))) {

        FILE *arq_zona_sp;
        FILE *arq_secao_sp;
        FILE *arq_mun_sp;
        FILE *arq_candidato_sp;
        FILE *arq_vot_eleitores_sp;


        arq_vot_eleitores_sp = fopen("arq_vot_eleitores_sp.bin","ab");
        arq_zona_sp = fopen("arq_zona_sp.bin", "rb");
        arq_secao_sp = fopen("arq_secao_sp.bin", "rb");
        arq_mun_sp = fopen("arq_mun_sp.bin", "rb");
        arq_candidato_sp = fopen("arq_candidato_sp.bin","rb");

        if (arq_zona_sp != NULL || arq_secao_sp != NULL || arq_mun_sp != NULL || arq_candidato_sp != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_sp.municipio_eleitor, 100, stdin);

            while (fread(&sp, sizeof(struct municipio), 1, arq_mun_sp)) {
                if (!(strcmp(sp.nomeMunicipio, d_eleitor_sp.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_sp.num_zona_eleitor);

                    while (fread(&sp_zona, sizeof(struct info_zona), 1, arq_zona_sp)) {
                        if (sp_zona.numero_zona == d_eleitor_sp.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_sp.num_secao_eleitor);

                            while (fread(&sp_secao, sizeof(struct info_secao), 1, arq_secao_sp)) {
                                if (sp_secao.num_secao == d_eleitor_sp.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_sp(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_sp()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_sp.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_sp.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_sp.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_sp, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_sp);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_sp);
        fclose(arq_secao_sp);
        fclose(arq_mun_sp);
        fclose(arq_candidato_sp);
        fclose(arq_vot_eleitores_sp);

    }

    else if(!(strcmp(cad_dados,"SE"))) {

        FILE *arq_zona_se;
        FILE *arq_secao_se;
        FILE *arq_mun_se;
        FILE *arq_candidato_se;
        FILE *arq_vot_eleitores_se;


        arq_vot_eleitores_se = fopen("arq_vot_eleitores_se.bin","ab");
        arq_zona_se = fopen("arq_zona_se.bin", "rb");
        arq_secao_se = fopen("arq_secao_se.bin", "rb");
        arq_mun_se = fopen("arq_mun_se.bin", "rb");
        arq_candidato_se = fopen("arq_candidato_se.bin","rb");

        if (arq_zona_se != NULL || arq_secao_se != NULL || arq_mun_se != NULL || arq_candidato_se != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_se.municipio_eleitor, 100, stdin);

            while (fread(&se, sizeof(struct municipio), 1, arq_mun_se)) {
                if (!(strcmp(se.nomeMunicipio, d_eleitor_se.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_se.num_zona_eleitor);

                    while (fread(&se_zona, sizeof(struct info_zona), 1, arq_zona_se)) {
                        if (se_zona.numero_zona == d_eleitor_se.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_se.num_secao_eleitor);

                            while (fread(&se_secao, sizeof(struct info_secao), 1, arq_secao_se)) {
                                if (se_secao.num_secao == d_eleitor_se.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_se(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_se()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_se.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_se.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_se.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_se, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_se);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_se);
        fclose(arq_secao_se);
        fclose(arq_mun_se);
        fclose(arq_candidato_se);
        fclose(arq_vot_eleitores_se);

    }

    else if(!(strcmp(cad_dados,"TO"))) {

        FILE *arq_zona_to;
        FILE *arq_secao_to;
        FILE *arq_mun_to;
        FILE *arq_candidato_to;
        FILE *arq_vot_eleitores_to;


        arq_vot_eleitores_to = fopen("arq_vot_eleitores_to.bin","ab");
        arq_zona_to = fopen("arq_zona_to.bin", "rb");
        arq_secao_to = fopen("arq_secao_to.bin", "rb");
        arq_mun_to = fopen("arq_mun_to.bin", "rb");
        arq_candidato_to = fopen("arq_candidato_to.bin","rb");

        if (arq_zona_to != NULL || arq_secao_to != NULL || arq_mun_to != NULL || arq_candidato_to != NULL) {
            getchar();
            printf("\nMunicipio para a votacao: ");
            fgets(d_eleitor_to.municipio_eleitor, 100, stdin);

            while (fread(&to, sizeof(struct municipio), 1, arq_mun_to)) {
                if (!(strcmp(to.nomeMunicipio, d_eleitor_to.municipio_eleitor))) {

                    printf("\nNumero da zona eleitoral para a votacao: ");
                    scanf("%d", &d_eleitor_to.num_zona_eleitor);

                    while (fread(&to_zona, sizeof(struct info_zona), 1, arq_zona_to)) {
                        if (to_zona.numero_zona == d_eleitor_to.num_zona_eleitor){

                            printf("\nNumero da secao eleitoral para a votacao: ");
                            scanf("%d", &d_eleitor_to.num_secao_eleitor);

                            while (fread(&to_secao, sizeof(struct info_secao), 1, arq_secao_to)) {
                                if (to_secao.num_secao == d_eleitor_to.num_secao_eleitor) {

                                    linha();
                                    printf("\nInsira o numero do Titulo do eleitor: ");
                                    scanf("%ld", &var_proc_vote_titulo);

                                    verificar_titulo_geral_to(); // Verificar se o eleitor já votou

                                    if (v_titulo) {
                                        if (!(v_titulo_dado)) {

                                            printf("\nDigite o numero do candidato: ");
                                            scanf("%ld",&verificar_voto);

                                            if(voto_candidato_to()){
                                                linha();
                                                printf("\nVOTO COMPUTADO COM SUCESSO");
                                                printf("\nVOTO ADICIONADO NO CANDIDATO(A): %s",candidatos_to.nome_candidato);
                                                printf("\nPARTIDO (%s)",candidatos_to.sigla_partido_candidato);
                                                linha();
                                                d_eleitor_to.titulo_eleitor = var_proc_vote_titulo;

                                                fwrite(&d_eleitor_to, sizeof(struct dados_eleitores_votacao),1,arq_vot_eleitores_to);

                                            }else{
                                                linha();
                                                printf("\nCandidato nao encontrado");
                                                linha();
                                            }


                                        } else {
                                            linha();
                                            printf("\nEleitor ja votou");
                                            linha();
                                        }

                                    } else {
                                        linha();
                                        printf("\nNenhum arquivo ou dado encontrado");
                                        linha();
                                    }


                                }
                                else{
                                    linha();
                                    printf("NENHUMA SECAO ENCONTRADA");
                                    linha();
                                }
                            }


                        }
                        else{
                            linha();
                            printf("NENHUMA ZONA ENCONTRADA");
                            linha();
                        }
                    }

                }
                else{
                    linha();
                    printf("NENHUM MUNICIPIO ENCONTRADO");
                    linha();
                }
            }
        }
        else{
            linha();
            printf("DADOS INSUFICIENTES PARA INICIAR A VOTACAO");
            linha();
        }

        fclose(arq_zona_to);
        fclose(arq_secao_to);
        fclose(arq_mun_to);
        fclose(arq_candidato_to);
        fclose(arq_vot_eleitores_to);

    }
    else{
        printf("\n########## OPCAO INVALIDA ##########");
    }



    return 0;

}