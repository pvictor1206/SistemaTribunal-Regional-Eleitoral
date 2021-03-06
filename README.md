# SistemaTribunal-Regional-Eleitoral

O Tribunal Regional Eleitoral (TRE) é o órgão judiciário encarregado do gerenciamento de eleições em âmbito estadual. O siguinte sistema é separado em duas partes, um para cadastro e outro para votação.

Um sistema em linguagem C para controlar/realizar uma eleição. Com o intuito de facilitar o processamento da apuração eleitoral da eleição municipal a ser realizada, o TRE (Tribunal Regional Eleitoral) resolveu informatizar o processo para eleição do prefeito. Sabe-se que cada município é dividido em várias zonas eleitorais que, por sua vez, são divididas em várias seções nas quais os eleitores estão vinculados. Cada candidato deve estar vinculado a um único partido político. Vale ressaltar que o voto é secreto e, assim, não pode ser vinculado ao eleitor.

Funcionalidades do sistema;
- cadastro de município;
- cadastro de zonas eleitorais;
- cadastro de seções;
- cadastro de eleitores;
- cadastro de eleição;
- cadastro de partidos;
- cadastro de candidatos;
- realizar votação; e
- mostrar resultado.

Requisitos não-funcionais:
- realizar armazenamento persistente em arquivos binários
- ter dois programas em C: um para os cadastros de município, zonas, seções, eleitores e eleição; e um outro para realizar votação e mostrar resultado.

### Tutorial de utilização
O sistema é separado em dois programas, um para o cadastro das informações e outro para votação.
Para abrir o programa de cadastro das informações, só basta inserir os arquivos C em uma pasta e compilar o arquivo chamado "main.c".
Os arquivos para o cadastro segue-se abaixo:
1. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/main.c">main.c</a>
2. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/candidatos_cadastro.c">candidatos_cadastro.c</a>
3. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/eleicao_cadastro.c">eleicao_cadastro.c</a>
4. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/eleitores_cadastro.c">eleitores_cadastro.c</a>
5. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/geral.c">geral.c</a>
6. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/municipio_alterar.c">municipio_alterar.c</a>
7. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/municipio_cadastro.c">municipio_cadastro.c</a>
8. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/partidos_cadastro.c">partidos_cadastro.c</a>
9. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/secao_alterar.c">secao_alterar.c</a>
10. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/secao_cadastro.c">secao_cadastro.c</a>
11. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/zona_alterar.c">zona_alterar.c</a>
12. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Cadatro_codigo/zona_cadastro.c">zona_cadastro.c</a>

Para abrir o programa de votação, só basta inserir os arquivos em C em uma pasta e compilar o arquivo chamado "main.c".
Os arquivos para a votação segue-se abaixo:
1. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Votacao_codigo/main.c">main.c</a>
2. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Votacao_codigo/resultado.c">resultado.c</a>
3. <a href="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/Votacao_codigo/votacao.c">votacao.c</a>



### Primeira Parte:
1 - Ao iniciar o programa do cadastro, irá aparecer uma janela com as seguintes opções:
<img src="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/imagens/img01.png">

2 - Se inserir o número 1 seguindo as informações do menu, irá aparecer as opções de cadastro:
<img src="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/imagens/img02.png">

3 - Logo após, aparece o número de municípios que restam para realizar o cadastro em cada Estado:
<img src="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/imagens/img03.png">

4 - Informe as informações pedida pelo sistema:
<img src="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/imagens/img04.png">

#### Basta fazer esses passos tem todas as opções.

### Segunda Parte:
Na próxima etapa do sistema TRE, os arquivos gerados no sistema de cadastro terão que ser utilizados. Nessa etapa serão realizadas as votações e os resultados da votação.
<img src="https://github.com/pvictor1206/SistemaTribunal-Regional-Eleitoral/blob/main/imagens/img13.png">

