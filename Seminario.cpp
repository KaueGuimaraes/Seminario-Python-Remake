/** UNIVERSIDADE ESTADUAL DE GOIAS
CURSO SUPERIOR DE TECNOLOGIA EM REDES DE COMPUTADORES
LINGUAGEM DE PROGRAMA��O I
BRUNO GUIMAR�ES DA SILVA


SEMIN�RIO - ALGORITMO F�RIAS

PACOTES ESPECIAIS DE F�RIAS. ADQUIRA O SEU PACOTE AUTOMATICAMENTE, S�O 10 �TIMAS OP��ES DE F�RIAS.

Veja abaixo as regras:

Escolha uma das nossas op��es de destino.
Voc� poder� comprar pacotes de 3 at� 18 dias de dura��o.
Nossos pacotes autom�ticos est�o dispon�veis para 1 at� 8 pessoas no m�ximo.
Para pacotes com maior dura��o ou grupos com mais de 6 pessoas, por favor nos contatar pelo telefone 0800-55-77-8001.
BOAS F�RIAS!!!

Qual ser� o destino das suas pr�ximas f�rias?

Digite:
1 - Orlando e Miami.
2 - Paris.
3 - Londres.
4 - Sydney.
5 - New York.
6 - Santiago do Chile.
7 - Tokyo.
8 - Rio de Janeiro.
9 - Fernando de Noronha.
10 - Caldas Novas.
0 - Encerrar o programa
 ###################################################################
 **/   

#include<stdio.h>
#include<string.h>

int destino=0, diarias=0, dias=0, pessoas=0, p=0, infantil=0, child=0, adult=0, origem=0, quartos=0, cover=0, lunch=0, pass=0, extra=0, extra_ad=0, extra_cr=0;
static int extras=0;
float aerea_ad=0.00, aerea_cr=0.00, aerea_inf=0.00, aerea=0.00, bus_ad=0.00, bus_cr=0.00, bus=0.00, hotel_ad=0.00, hotel_cr=0.00, hotel=0.00, rent_total=0.00, lunch_total=0.00, pass_ad=0.00;
float pass_cr=0.00, pass_total=0.00, extra_total=0.00, total_dolar=0.00, total_real=0.00, cambio=0.00;
int idade[8];
char buses, rent;

void MCOMIA(void);
void CDG(void);
void LON(void);
void SYD(void);
void JFK(void);
void SLZ(void);
void NRT(void);
void GIG(void);
void NOR(void);
void CDN(void);
void ONIBUS(void);
void DIARIAS(void);
void RENTALCAR(void);
void ALIMENTACAO(void);
void COMPLETA(void);
void JANTAR(void);
void ALMOCO(void);
void NOFOOD(void);
void DAYPASS(void);
void PGTO(void);
void verificaGrupo(pessoas);
void verificaOrigem(origem);

int main (void)
{
    for (p=0;p<8;p++) {
        idade[p] = 0; // inicializando o vetor em zeros        
        } // fim do for
    p=1;
    printf ("\n\t PACOTES ESPECIAIS DE FERIAS. ARQUIRA O SEU PACOTE AUTOMATICAMENTE, SAO 10 OTIMAS OPCOES DE FERIAS.");
    printf ("\n\n\t Veja abaixo as regras: \n\n\t Escolha uma das nossas opcoes de destinos.");
    printf ("\n\t  Voc� podera comprar pacotes de 3 ate 18 dias de duracao. \n\t Nossos pacotes automaticos estao disponiveis para 1 ate 8 pessoas no maximo.");
    printf ("\n\t Para pacotes com maior duracao ou grupos com mais de 8 pessoas, por favor nos contatar pelo telefone 0800-55-77-8001. \n\t\t. BOAS FERIAS!!!");
    printf ("\n\n\tQual sera o destino das suas proximas ferias? \n\n\t. Digite: \n\t 1 - Orlando e Miami. \n\t 2 - Paris. \n\t 3 - Londres. \n\t 4 - Sydney.");
    printf ("\n\t 5 - New York. \n\t 6 - Santiago do Chile.  \n\t 7 - Tokyo. \n\t 8 - Rio de Janeiro. \n\t 9 - Fernando de Noronha. \n\t 10 - Caldas Novas.");
    printf ("\n\t 0 - Encerrar o programa");
    scanf ("%d", &destino);
    
    switch (destino) {
           
           case 1 : MCOMIA(); //chamar� o algoritmo referente a escolha de Orlando e Miami
           break;
           
           case 2 : CDG(); // chamar� o algoritmo referente a escolha de Paris
           break;
           
           case 3 : LON(); // chamar� o algoritmo referente a escolha de Londres
           break;
           
           case 4 : SYD(); // chamar� o algoritmo referente a escolha de Sydney
           break;
           
           case 5 : JFK(); // chamar� o algoritmo referente a escolha de New York
           break;
           
           case 6 : SLZ(); // Chamar� o algoritmo referente a escolha de Santiago
           break;
           
           case 7 : NRTZ(); // Chamar� o algoritmo referente a escolha de Tokyo
           break;
           
           case 8 : GIG(); // Chamar� o algoritmo referente a escolha do Rio de Janeiro
           break;

           case 9 : NOR(); // Chamar� o algoritmo referente a escolha de Fernando de Noronha
           break;

           case 10 : CDN(); // Chamar� o algoritmo referente a escolha de Caldas Novas
           break;
                      
           case 0 : printf ("\n\nEncerrando o programa\n");
           break;
           
           default : printf ("\n\tDesculpe, mas no momento nao temos esta opcao escolhida");
           } // fim do switch case
           
           getchar ();
           return 0;
           
}//fim do main



void MCOMIA(void)
{
     printf ("\n\n\tVoce  Escolheu Aventuras Inesqueciveis em Orlando e as Praias de Miami para o seu proximo pacote de ferias, nos Estados Unidos");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 5 ate 18 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<5 || diarias>18) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 5 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 18 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino Miami e Orlando temos saidas de Goiania ou de Brasilia. \n De onde prefere o seu embarque inicial?");
     printf ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para saidas de Brasilia");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 949.00;
                    aerea_cr = child * 849.00;
                    aerea_inf = infantil * 709.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
                    
                    else // significa que a op��o escolhida foi a origem 2
                    {
                    aerea_ad = adult * 889.00;
                    aerea_cr = child * 889.00;
                    aerea_inf = infantil * 649.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens aereas: U$%.2f", aerea);
     
     ONIBUS();
     DIARIAS();
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino de Orlando e Miami, temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Ingresso para os fantasticos parques de Walt Disney World. ");
           printf ("\n\t 2 - \t Dia de compras no Sawgrass Mills e Dolphin Mall.");
           printf ("\n\t 3 - \t Discovery Cove e Sea World - venha nadar com os golfinhos");
           printf ("\n\t 4 - \t Ingresso para assistir ao jogo do Miami Heat ou Orlando Magic.");
           printf ("\n\t 5 - \t Ingressos para Universal Studios, Island of Adventures e Blue Men Group.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
           
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce  escolheu ingressos para os parques tematicos de Walt Disney World. Quantos ingressos deseja adquirir?");
                       printf ("\nATENCAO: crian�as de ate 4 anos completos nao pagam para entrar nos parques.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 74.50) + extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 2 : {
                       printf ("\nVoce  escolheu dia de compras no Sawgrass Mills e Dolphins Mall. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 12 anos completos nao pagam por esta atracao extra.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*15.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 3 : {
                       printf ("\nVoce  escolheu a atracao Discovery Cove e Sea World Adventure - Venha nadar com os golfinhos. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 5 anos completos nao pagam por esta atracao extra.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 179.50)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce  escolheu adquirir ingressos para um jogo de basketball de sua prefer�ncia dos times Miami Heat ou Orlando Magic.");
                       printf ("\nATENCAO: Ingresso adulto tem o valor de 89.00 dolares e crian�as abaixo de 12 anos completos pagam apenas 39.90 d�lares. Crian�as ate 5 anos completos n�o pagam ingresso.");
                       printf ("\nQuantos ingressos adulto voce deseja adquirir? \n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para crian�as de 5 a 12 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*69.00)+(extra_cr*39.90)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 5 : {
                       printf ("\nVoce escolheu ingressos para o Universal Studios - Island of Adventures Park and Blue Men Group. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 5 anos completos nao pagam para entrar nos parques.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*69.90)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void MCOMIA


void CDG(void)
{
     printf ("\n\n\tVoce Escolheu  a beleza e o charme de Paris - a cidade luz, na Franca");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 5 ate 18 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<5 || diarias>18) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 5 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 18 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino Paris temos saidas de Goiania ou de Brasilia. \n De onde prefere o seu embarque inicial?");
     prinft ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para saidas de Brasilia");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 1119.00;
                    aerea_cr = child * 889.00;
                    aerea_inf = infantil * 749.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, areea_ad, aerea_cr, aerea_inf);
                    }
                    
                    else // significa que a op��o escolhida foi a origem 2
                    {
                    aerea_ad = adult * 1049.00;
                    aerea_cr = child * 789.00;
                    aerea_inf = infantil * 689.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens aereas: U$%.2f," aerea);
          
     ONIBUS();
     DIARIAS();
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino de Paris temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Jantar romantico no alto da Torre Eifel. ");
           printf ("\n\t 2 - \t Ingressos para acesso ao Museu do Louvre.");
           printf ("\n\t 3 - \t Paris City Tour - conheca a cidade com conforto e comodidade");
           printf ("\n\t 4 - \t Visitas as vinicolas parisienses com direito a livre degustacao de vinhos.");
           printf ("\n\t 5 - \t Ingressos para entrada na EuroDisney.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
           
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce  escolheu um jantar romantico no alto da Torre Eifel para duas pessoas com direito a bebidas.");
                       printf ("\nEsta opcao e exclusiva para adultos - acima de 18 anos. Quantos bilhetes deseja adquirir?\\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 80.00) + extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                             
                  case 2 : {
                       printf ("\nVoce  escolheu adquirir entradas de acesso ao Museu do Louvre. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 10 anos completos nao pagam pelas entradas e nao necessitam de bilhetes.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*18.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                              
                  case 3 : {
                       printf ("\nVoce  escolheu um tour pela Cidade Luz atraves do pacote Paris-City-Tour. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 5 anos completos nao pagam pelo passeio, desde que acompanhadas por um adulto.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 29.90)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu um passeio as vin�colas locais e direito a degusta��o de vinhos durante o passeio. Criancas podem participar do passeio, mas nao podem consumir bebidas alcoolicas.");
                       prinft ("\nCriancas com menos de 5 anos completos nao pagam o passeio. Quantos ingressos adulto voce deseja adquirir? \n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para pessoas de 5 a 17 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*49.90)+(extra_cr*15.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                      
                  case 5 : {
                       printf ("\nVoce escolheu ingressos para o Parque Tematico da EuroDisney Paris. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 5 anos completos nao pagam para entrar no parque.");
                       scanf ("%d", &extra);
                       extra_total = (extra*92.50)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void CDG




void LON(void)
{
     printf ("\n\n\tVoce Escolheu uma visita a Londres, na Ilha da Gra Bretanha");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 5 ate 18 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<5 || diarias>18) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 5 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 18 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino de Londres temos saidas de Goiania ou de Brasilia. \n De onde prefere o seu embarque inicial?");
     prinft ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para saidas de Brasilia");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 1009.00;
                    aerea_cr = child * 949.00;
                    aerea_inf = infantil * 909.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
                    
                    else // significa que a op��o escolhida foi a origem 2
                    {
                    aerea_ad = adult * 949.00;
                    aerea_cr = child * 899.00;
                    aerea_inf = infantil * 829.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens aereas: U$%.2f," aerea);
                    
     ONIBUS();
     DIARIAS();
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino de Londres temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t London Aquarium. ");
           printf ("\n\t 2 - \t Acesso a todos os museus de Londres.");
           printf ("\n\t 3 - \t London City Tour - conheca a cidade com conforto e comodidade");
           printf ("\n\t 4 - \t London Eye - a roda gigante mais famosa do mundo.");
           printf ("\n\t 5 - \t Ingressos para o Madame Thousand.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
           
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce  escolheu um passeio pelo London Aquarium. Quantos ingressos deseja adquirir?");
                       printf ("\nATENCAO: criancas de ate 7 anos completos nao pagam por esta atracao:\\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 20.00) + extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                     
                  case 2 : {
                       printf ("\nVoce  escolheu passe livre para entrada em todos os museus de londres. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 8 anos completos nao pagam pelas entradas e nao necessitam de bilhetes.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*30.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                              
                  case 3 : {
                       printf ("\nVoce  escolheu um tour pela Cidade de Londres atraves do pacote London-City-Tour. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 8 anos completos nao pagam pelo passeio, desde que acompanhadas por um adulto.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 29.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu um passeio na London Eye - a roda gigante mais famosa do mundo. Criancas de ate 13 anos de idade pagam apenas a metade");
                       printf ("Criancas com menos de 3 anos de idade nao podem participar podem participar desta atracao. Quando ingressos adulto deseja adquirir?\n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQQuantos ingressos para criancas de 4 ate 13 anos de idade deseja adquirir? \n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*39.00)+(extra_cr*19.50)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                                                  
                  case 5 : {
                       printf ("\nVoce escolheu ingressos para o famoso Madame Thousand - o museu de cera. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 5 anos completos nao pagam para entrar no museu mas precisam estar acompanhadas de um adulto.\n");
                       scanf ("%d", &extra);
                       extra_total = (extra*24.9)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void LON




void SYD(void)
{
     printf ("\n\n\tVoce Escolheu se aventurar pela modernissima e chamosa Sydney, na Australia");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 7 ate 20 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<5 || diarias>20) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 7 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<7 || diarias>20); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 20 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<7 || diarias>20); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino de Sydney temos saidas de Goiania, Brasilia ou de Sao Paulo. \n De onde prefere o seu embarque inicial?");
     prinft ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para sa�das de Bras�lia. \n\t Digite 3 para sa�das de S�o Paulo");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 1899.00;
                    aerea_cr = child * 1699.00;
                    aerea_inf = infantil * 1499.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
                    
                    else if (origem==2){
                         aerea_ad = adult * 1699.00;
                         aerea_cr = child * 1499.00;
                         aerea_inf = infantil * 1399.00;
                         aerea = aerea_ad + aerea_cr + aerea_inf;
                         printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                                       }
                                       
                         else { // significa que obrigatoriamente a escolha foi da origem 3
                              aerea_ad = adult * 1449.00;
                              aerea_cr = child * 1399.00;
                              aerea_inf = infantil * 1299.00;
                              aerea = aerea_ad + aerea_cr + aerea_inf;
                              printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                              }
     printf ("\nPreco final das passagens aereas: U$%.2f," aerea);
     
     printf ("\nDeseja adicionar um onibus com o percurso de ida e volta saindo de Pires do Rio ate o aeroporto escolhido? Digite S para SIM ou N para NAO");
     scanf ("%c", &bus);
     if (bus== 'S' || bus=='s'){
               if (origem==3){
                  bus_ad = adult*50.00;
                  bus_cr = child*35.00;
                  bus = bus_ad+bus_cr;
                  printf ("\nPreco final do onibus: U$%.2f/n", bus);
                         }
                  
                  else {
                       bus_ad = adult*20.00;
                       bus_cr = child*10.00; // a categoria infantil ter� o �nibus gratis.
                  bus = bus_ad+bus_cr;
                  printf ("\nPreco final do onibus: U$%.2f/n", bus);
                         }
                              
                              } // fim do if bus==SIM
     
     dias = (diarias-3); // referentes aos dias dias que ser�o gastos nos avi�es ida e volta
     
     if (pessoas==1){
        	hotel_ad = (1*159.00*dias);
        	hotel = hotel_ad;
        	printf ("\n O pacote escolhido tera %d diarias de hotel em Sydney e o preco final das diarias com cafe da manha incluido sera de U$%.2f", dias, hotel);
         }
         else {
              printf ("\nQuantos quartos deseja reservar para a viagem?");
              scanf ("%d", &quartos);
              hotel_ad = (adult * 159.00 * dias);
              hotel_cr = (child * 69.00 * dias);
              hotel = (hotel_ad + hotel_cr) * quartos;
              printf ("\nO pacote escolhido tera %d diarias de hotel em Sydney em %d quartos e o preco final das diarias com cafe da manha gratis sera de U$%.2f", dias, quartos, hotel);
              }
     
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino de Sydney temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Entradas para o Sydney Aquarium. ");
           printf ("\n\t 2 - \t Bondi a Coogee - passeio pelo litoral.");
           printf ("\n\t 3 - \t Sydney City-tour -  incluindo Harbour Bridge e The Rocks");
           printf ("\n\t 4 - \t Safari e visita ao Outback australiano.");
           printf ("\n\t 5 - \t Mergulho nos corais com passeios de catamar�.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo

           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce  escolheu adquirir entradas para o Sydney Aquarium. Criancas de ate 5 anos completos nao pagam por esta atracao.");
                       printf ("Criancas de 5 ate 13 anos pagam metade do ingresso. Quantos ingressos adultos deseja adquirir?\n");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para criancas de 5 ate 13 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*20.00) + (extra_cr*10) + extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                                                      
                  case 2 : {
                       printf ("\nVoce escolheu Bondi a Coogee - passeio pelo litoral. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 13 anos completos nao pagam por este passeio, desde que acompanhados por um adulto.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*30.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                              
                  case 3 : {
                       printf ("\nVocee escolheu Sydney City-tour que inclui Harbour Bridge e The Rocks no passeio de 8 horas de dura��o. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: criancas de ate 13 anos completos nao pagam pelo passeio, desde que acompanhadas por um adulto\n.");
                       scanf ("%d", &extra_ad);
                       extra_total = (extra_ad*30.00)+ extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu Safari e visita ao Outback australiano, uma aventura pelo mundo perdido.");
                       printf ("\n ATENCAO: criancas de ate 13 anos pagam apenas a metade. Criancas com menos de 5 anos nao pagam ingressos\n. Quantos ingressos adulto deseja adquirir?\n");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para criancas de 5 ate 13 anos deseja adquirir?\n"):
                       scanf ("%d", &extra_cr)
                       extra_total = (extra_ad*90.00)+(extra_cr+45.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                                  
                  case 5 : {
                       printf ("\nVoce escolheu os mergulhos nos corais com passeios de catamar�. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 11 anos nao podem participar desta atracao:\n");
                       scanf ("%d", &extra);
                       extra_total = (extra*199.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void SYD




void JFK(void)
{
     printf ("\n\n\tVoce Escolheu conhecer a gigantesca e charmosa New York, com todos os seus arranha-ceus e seu esplendor, nos Estados Unidos");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 5 ate 18 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<5 || diarias>18) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 5 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 18 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino de New York City temos saidas de Goiania ou de Brasilia. \n De onde prefere o seu embarque inicial?");
     prinft ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para saidas de Brasilia");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 999.00;
                    aerea_cr = child * 899.00;
                    aerea_inf = infantil * 749.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
                    
                    else // significa que a op��o escolhida foi a origem 2
                    {
                    aerea_ad = adult * 889.00;
                    aerea_cr = child * 789.00;
                    aerea_inf = infantil * 649.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens aereas: U$%.2f," aerea);
     
     ONIBUS();
     DIARIAS();
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino de New York City, temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Top of the Rock. ");
           printf ("\n\t 2 - \t Visita � Est�tua da Liberdade.");
           printf ("\n\t 3 - \t Entrada no Empire State Building");
           printf ("\n\t 4 - \t Ingresso para os Musicais da Broadway.");
           printf ("\n\t 5 - \t New York City Tour com Broklyn Bridge.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
  
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce escolheu Top of the Rock. Quantos ingressos deseja adquirir?");
                       printf ("\nATENCAO: crian�as de ate 5 anos completos nao pagam para esta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 20.00) + extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                              
                  case 2 : {
                       printf ("\nVoce escolheu visita a Estatua da Liberdade. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 8 anos completos nao pagam por esta atracao extra desde que acompanhados por um adulto.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*50.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 3 : {
                       printf ("\nVoce escolheu acesso ao Empire State Building. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 5 anos completos nao pagam por esta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 18.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu adquirir ingressos para um dos musicais da Broadway de sua preferencia.");
                       printf ("\nATENCAO: Ingresso adulto tem o valor de 69.00 dolares e crian�as abaixo de 12 anos completos pagam apenas 29.00 d�lares. Crian�as ate 5 anos completos n�o pagam ingresso.");
                       printf ("\nQuantos ingressos adulto voce deseja adquirir? \n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para crian�as de 5 a 12 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*69.00)+(extra_cr*29.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                    
                  case 5 : {
                       printf ("\nVoce escolheu New York City Tour com Broklyn Bridge. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 5 anos completos nao pagam por este passeio.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*29.90)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void JFK




void SLZ(void)
{
     printf ("\n\n\tVoce Escolheu conhecer o charme da cosmopolita Santiago do Chile.");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 5 ate 18 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<5 || diarias>18) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 5 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 18 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<5 || diarias>18); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino de Santiago do Chile temos sa�das de Goi�nia ou de Bras�lia. \n De onde prefere o seu embarque inicial?");
     prinft ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para saidas de Brasilia");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 600.00;
                    aerea_cr = child * 499.00;
                    aerea_inf = infantil * 199.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
                    
                    else // significa que a op��o escolhida foi a origem 2
                    {
                    aerea_ad = adult * 499.00;
                    aerea_cr = child * 299.00;
                    aerea_inf = infantil * 99.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens aereas: U$%.2f," aerea);
     
     ONIBUS();
     DIARIAS();
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino em Santiago, temos ainda CINCO ATRA��ES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Jantar no famoso Restaurante Giratorio. ");
           printf ("\n\t 2 - \t Visita ao Cedro de Santa Lucia.");
           printf ("\n\t 3 - \t Santiago City-tour");
           printf ("\n\t 4 - \t Visitas a Vina de Mar e suas belas praias.");
           printf ("\n\t 5 - \t Visita a Valle Nevado.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
 
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce escolheu um jantar no famoso Restaurante Girat�rio para duas pessoas e com direito a bebidas. Esta opcao e exclusiva para adultos acima de 18 anos");
                       printf "(\nQuantos ingressos deseja adquirir?\n");
                       scanf ("%d", &extra);
                       extra_total = (extra * 49.90) + extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                                  
                  case 2 : {
                       printf ("\nVoce escolheu uma visita ao Cedro de Santa Lucia. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 12 anos completos nao pagam por este passeio.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*15.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 3 : {
                       printf ("\nVoce escolheu uma tour pela cidade Santiago City-tour. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 8 anos completos nao pagam por esta atracao, desde que acompanhadas por um adulto:\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*30.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu uma visita a Vina del Mar e suas belas praias. Criancas com menos de 8 anos completos nao pagam o passeio. Ate 14 anos pagam metade do valor.");
                       printf ("\nQuantos ingressos adulto voce deseja adquirir? \n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para crian�as de 8 a 14 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*80.00)+(extra_cr*40.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                    
                  case 5 : {
                       printf ("\nVoce escolheu visita a Valle Nevado. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 7 anos completos nao pagam esta atracao:\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*60.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void SLZ





void NRT(void)
{
     printf ("\n\n\tVoce Escolheu se aventurar pela gigantesca e tenologica Tokyo, no Jap�o");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 7 ate 20 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<7 || diarias>20) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 7 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<7 || diarias>20); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 20 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<7 || diarias>20); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino de Sydney temos saidas de Goiania, Brasilia ou de Sao Paulo. \n De onde prefere o seu embarque inicial?");
     prinft ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para sa�das de Bras�lia. \n\t Digite 3 para sa�das de S�o Paulo");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 2249.00;
                    aerea_cr = child * 2049.00;
                    aerea_inf = infantil * 1899.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
                    
                    else if (origem==2){
                         aerea_ad = adult * 2049.00;
                         aerea_cr = child * 1899.00;
                         aerea_inf = infantil * 1749.00;
                         aerea = aerea_ad + aerea_cr + aerea_inf;
                         printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                                       }
                                       
                         else { // significa que obrigatoriamente a escolha foi da origem 3
                              aerea_ad = adult * 1899.00;
                              aerea_cr = child * 1749.00;
                              aerea_inf = infantil * 1599.00;
                              aerea = aerea_ad + aerea_cr + aerea_inf;
                              printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                              }
     printf ("\nPreco final das passagens aereas: U$%.2f," aerea);
     
     printf ("\nDeseja adicionar um onibus com o percurso de ida e volta saindo de Pires do Rio ate o aeroporto escolhido? Digite S para SIM ou N para NAO");
     scanf ("%c", &bus);
     if (bus== 'S' || bus=='s'){
               if (origem==3){
                  bus_ad = adult*50.00;
                  bus_cr = child*35.00;
                  bus = bus_ad+bus_cr;
                  printf ("\nPreco final do onibus: U$%.2f/n", bus);
                         }
                  
                  else {
                       bus_ad = adult*20.00;
                       bus_cr = child*10.00; // a categoria infantil ter� o �nibus gratis.
                  bus = bus_ad+bus_cr;
                  printf ("\nPreco final do onibus: U$%.2f/n", bus);
                         }
                              
                              } // fim do if bus==SIM
     
     dias = (diarias-3); // referentes aos dias dias que ser�o gastos nos avi�es ida e volta
     
     if (pessoas==1){
        	hotel_ad = (1*199.00*dias);
        	hotel = hotel_ad;
        	printf ("\n O pacote escolhido tera %d diarias de hotel em Sydney e o preco final das diarias com cafe da manha incluido sera de U$%.2f", dias, hotel);
         }
         else {
              printf ("\nQuantos quartos deseja reservar para a viagem?");
              scanf ("%d", &quartos);
              hotel_ad = (adult * 199.00 * dias);
              hotel_cr = (child * 109.00 * dias);
              hotel = (hotel_ad + hotel_cr) * quartos;
              printf ("\nO pacote escolhido tera %d diarias de hotel em Sydney em %d quartos e o preco final das diarias com cafe da manha gratis sera de U$%.2f", dias, quartos, hotel);
              }
     
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino Tokyo temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Visita ao Templo de Asakusa Kannon. ");
           printf ("\n\t 2 - \t Entrada livre em todos os Museus de Tokyo.");
           printf ("\n\t 3 - \t Tokyo Great Cylcling Tour - um passeio pelas ruas de Tokyo de bikes.");
           printf ("\n\t 4 - \t Visita ao Pal�cio Imperial e Tokyo Metropolitan Government - TMG.");
           printf ("\n\t 5 - \t Monte Fuji e Asakusa.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo

           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce escolheu uma visita ao Templo de Asakusa Kannon. Criancas de ate 5 anos completos nao pagam por esta atracao.");
                       printf ("Criancas de 5 ate 13 anos pagam metade do ingresso. Quantos ingressos adultos deseja adquirir?\n");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para criancas de 5 ate 13 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*30.00) + (extra_cr*15.00) + extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                                                      
                  case 2 : {
                       printf ("\nVoce escolheu o Ticket Museum que da direito a entrada livre em todos os Museus de Tokyo - incluindo Nozu Museum - Tokyo Nacional Museum - Bridgestone Museum of Art e National Science Museum.");
                       printf ("\nQuantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as de ate 11 anos completos nao pagam pelo bilhete, desde que acompanhados por um adulto.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*50.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                              
                  case 3 : {
                       printf ("\nVocee escolheu Tokyo Great Cylcling Tour - um passeio pelas ruas de Tokyo de bike. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: menores de 12 anos nao podem participar do passeio em bicicletas proprias, mas podem participar em garupeiras de adultos sem pagar taxa extra\n.");
                       scanf ("%d", &extra_ad);
                       extra_total = (extra_ad*20.00)+ extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu uma Visita ao Pal�cio Imperial e Tokyo Metropolitan Government - TMG.");
                       printf ("\n ATENCAO: criancas de ate 13 anos pagam apenas a metade. Criancas com menos de 5 anos nao pagam ingressos\n. Quantos ingressos adulto deseja adquirir?\n");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para criancas de 5 ate 13 anos deseja adquirir?\n"):
                       scanf ("%d", &extra_cr)
                       extra_total = (extra_ad*90.00)+(extra_cr+45.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                                                  
                  case 5 : {
                       printf ("\nVoce escolheu visita ao Monte Fuji e Asakusa. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 13 anos nao podem participar desta atracao devido a escalada ao monte Fuji.\n");
                       scanf ("%d", &extra);
                       extra_total = (extra*399.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void NRT



void GIG(void)
{
     printf ("\n\n\tVoce Escolheu visitar a mais maravilhosa de todas as cidades: O Rio de Janeiro.");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 3 ate 18 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<3 || diarias>18) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 3 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<3 || diarias>18); // fim do do while
                    } //fim do if
                    else if (diarias>18) {
                         do {
                             printf ("Opcao Invalida, para pacotes com duracao acima de 18 dias, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<3 || diarias>18); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino do Rio de Janeiro temos saidas de Goiania ou de Brasilia por voos regualares ou diretamente de onibus de Pires do Rio. \n De onde prefere o seu embarque inicial?");
     printf ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para saidas de Brasilia \n\t Digite 3 para saidas de onibus de Pires do Rio");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 200.00;
                    aerea_cr = child * 159.00;
                    aerea_inf = infantil * 25.00; // apenas custos referentes a taxas aeroportu�rias
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     if (origem==2){
                    aerea_ad = adult * 179.00;
                    aerea_cr = child * 149.00;
                    aerea_inf = infantil * 25.00; // apenas custos referentes a taxas aeroportu�rias
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     if (origem==3){
                    aerea_ad = adult * 99.00;
                    aerea_cr = child * 49.50;
                    aerea_inf = infantil * 12.50; //apenas custos referentes a taxas rodovi�rias
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens: U$%.2f", aerea);
     
     if (origem==1 || origem==2) ONIBUS();
     DIARIAS();
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino no Rio de Janeiro, temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Visita ao Cristo Redentor e ao Pao de Acucar.");
           printf ("\n\t 2 - \t Rio de Janeiro City Tour com direito a entrada no Maracana.");
           printf ("\n\t 3 - \t Passeio no Jardim Bot�nico e Parque Nacional da Tijuca.");
           printf ("\n\t 4 - \t Visita ao Ensaio de uma Escola de Samba do grupo especial.");
           printf ("\n\t 5 - \t Visita ao Projac da Rede Globo.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
           
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce escolheu Visita ao Cristo Redentor e ao P�o de A��car. Criancas de ate 5 anos nao pagam por esta atracao.");
                       printf ("\nATENCAO: criancas de 5 ate 13 anos pagam metade do ingresso. Quantos ingressos para adulto deseja adquirir?\n");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para criancas de 5 ate 13 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*20.00)+(extra_cr*10.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 2 : {
                       printf ("\nVoce escolheu Rio de Janeiro City Tour com direito a entrada no Maracan�. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as menores de 7 anos nao pagam por esta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*30.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 3 : {
                       printf ("\nVoce escolheu Visita ao Jardim Botanico e ao Parque Nacional da Tijuca. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 11 anos nao pagam por esta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 15.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu uma Visita ao Ensaio de uma Escola de Samba do grupo especial.");
                       printf ("\nATENCAO: Criancas de ate 13 anos de idade pagam apenas a metade. Criancas com menos de 5 anos nao pagam ingresso.");
                       printf ("\nQuantos ingressos adulto voce deseja adquirir? \n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para crian�as de 5 a 12 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*30.00)+(extra_cr*15.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 5 : {
                       printf ("\nVoce escolheu Visita ao Projac da Rede Globo. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 7 anos nao podem participar desta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*20.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void GIG



void NOR(void)
{
     printf ("\n\n\tVoce escolheu a calmaria paradis�aca das Ilhas do Arquip�lado de Fernando de Noronha, no Brasil.");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 3 ate 14 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<3 || diarias>14) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 3 dias e o maximo e de 14 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<3 || diarias>14); // fim do do while
                    } //fim do if
                    else if (diarias>14) {
                         do {
                             printf ("Opcao Invalida, de acordo com as leis municipais nao e permitido a venda de pacotes com duracao superior a 14 dias para Fernando de Noronha,");
                             printf ("\nquaisquer duvidas, favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<3 || diarias>14); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino de Fernando de Noronha temos saidas de Goiania de Brasilia ou diretamente de Recife. \n De onde prefere o embarque inicial?");
     printf ("\n\t Digite 1 para saidas de Goiania. \n\t Digite 2 para saidas de Brasilia \n\t Digite 3 para saidas de Recife");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 700.00;
                    aerea_cr = child * 600.00;
                    aerea_inf = infantil * 35.00; // apenas custos referentes a taxas aeroportu�rias
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     if (origem==2){
                    aerea_ad = adult * 600.00;
                    aerea_cr = child * 500.00;
                    aerea_inf = infantil * 35.00; // apenas custos referentes a taxas aeroportu�rias
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     if (origem==3){
                    aerea_ad = adult * 399.00;
                    aerea_cr = child * 299.00;
                    aerea_inf = infantil * 35.00; //apenas custos referentes a taxas aeroportu�rias
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens: U$%.2f", aerea);
     
     if (origem==1 || origem==2) ONIBUS();
        else if (origem==3) {
                            printf ("\nDeseja adicionar um onibus com o percurso ate Recife saindo de Pires do Rio? Digite S para SIM ou qualquer outra tecla para NAO");
                            scanf ("%c", &bus);
                            if (bus=='S' || bus=='s') {
                                         bus_ad = adult*99.00;
                                         bus_cr = child*10.00; // a categoria infantil ter� o �nibus gr�tis.
                                         bus = (bus_ad+bus_cr);
                                         printf ("\nPreco final do onibus: U$%.2f", bus);
                                         } // fim do if
                            } // fim do else if
                            
     DIARIAS();
     printf ("\nDeseja adicionar o aluguel de buggy para sua maior diversao em Fernando de Noronha? Digite S para SIM ou N para NAO:\n");
     scanf ("%c", &rent);
     if (rent=='S' || rent=='s'){
                   if (pessoas<5) { // ser� necess�rio apenas um ve�culo para este grupo de pessoas.
                                  printf ("Deseja protecao total ou parcial do buggy?\n Digite 1 para Prote��o Parcial ou Digite 2 para Prote��o Total\n")
                                  scanf ("%d", &cover);
                                  if (cover<1 || cover>2) {
                                               printf ("\nOpcao Invalida");
                                               return;
                                               }
                                  if (cover==1) rent_total = (dias * 29.90);
                                     else rent_total = (dias * 49.90);
                                  printf ("\nO pacote escolhido tera %d diarias de locacao de buggy e o preco final com a protecao escolhida sera de U$%.2f", dias, rent_total);
                    } // fim do if interno
                   } // fim do if externo
     else // acima de 4 pessoas ser�o necess�rios dois buggyes.
          {
          printf ("\nSerao cobrados dois buggys devido o numero de passageiros");
          printf ("\nDeseja protecao total ou parcial dos veiculos? \n Digite 1 para Protecao Parcial ou Digite 2 para Protecao Total\n");
          scanf ("%d", &cover);
                                  if (cover<1 || cover>2) {
                                               printf ("\nOpcao Invalida");
                                               return;
                                               }
                                  if (cover==1) rent_total = (dias * 29.90 * 2);
                                     else rent_total = (dias * 49.90 * 2);
                                  printf ("\nO pacote escolhido tera %d diarias de locacao de dois veiculos e o preco final com a protecao escolhida sera de U$%.2f", dias, rent_total);
         } // fim do else
} // fim do void
     
     
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino de Fernando de Noronha, temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Passeios de barco ao redor da ilha.");
           printf ("\n\t 2 - \t Aulas de mergulho e surf.");
           printf ("\n\t 3 - \t jantar romantico com direito a vinhos na Baia dos Golfinhos.");
           printf ("\n\t 4 - \t Visita ao Projeto TAMAR.");
           printf ("\n\t 5 - \t Passeio em busca dos tubaroes.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
           
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce escolheu um dos maravilhosos passeios ao redor da ilha. Criancas de ate 5 anos nao pagam por esta atracao.");
                       printf ("\nATENCAO: criancas de 5 ate 13 anos pagam metade do ingresso. Quantos ingressos para adulto deseja adquirir?\n");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para criancas de 5 ate 13 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*30.00)+(extra_cr*15.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 2 : {
                       printf ("\nVoce escolheu aulas de mergulho e surf com profissionais que trabalham na ilha. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as menores de 5 anos nao participam deste evento ate o momento.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*50.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 3 : {
                       printf ("\nVoce escolheu um jantar romantico com direito a vinhos na Baia dos Golfinhos. Cada bilhete da direito a duas pessoas jantarem. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 18 anos nao podem adquirir este bilhete.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 149.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu uma Visita ao Projeto TAMAR.");
                       printf ("\nATENCAO: Criancas de ate 13 anos de idade pagam apenas a metade. Criancas com ate 5 anos nao pagam o ingresso.");
                       printf ("\nQuantos ingressos adulto voce deseja adquirir? \n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para crian�as de 5 a 13 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*15.00)+(extra_cr*7.50)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 5 : {
                       printf ("\nVoce escolheu um passeio mar adentro em busca dos fantastico tubaroes e golfinhos. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 15 anos nao podem participar desta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*99.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void NOR



void CDN(void)
{
     printf ("\n\n\tVoce escolheu a maior bacia hidrotermal do mundo para se deliciar nas aguas quentes de Caldas Novas, no Brasil.");
     printf ("\nPara este destino nos lhe ofereceremos pacotes de 3 ate 14 dias de duracao. \n\t Pretende comprar um pacote de quantos dias?\t");
     scanf ("%d", &diarias);
     if (diarias<3 || diarias>14) { 
                    do {
                        printf ("\nOpcao Invalida, o minimo possivel e de 3 dias e o maximo e de 14 dias para este pacote.");
                        printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                        scanf ("%d", &diarias);
                        } while (diarias<3 || diarias>14); // fim do do while
                    } //fim do if
                    else if (diarias>14) {
                         do {
                             printf ("Opcao Invalida, para pacotes acima de 14 dias favor nos contatar atraves do telefone 0800-55-77-8001\n");
                             printf ("\nDigite novamente a quantidade de dias para o pacote:\t");
                             scanf ("%d", &diarias);
                        } while (diarias<3 || diarias>14); // fim do do while
                    } // fim do if
                         else printf ("\n\nPARABENS!!! \n\t Para esta viagem de %d dias, quantas pessoas viajarao, incluindo voce?\n", diarias);
                         scanf ("%d", &pessoas);
     if(!verificaGrupo(pessoas)) return;
     printf ("\nSerao cobrados \n\t%d tarifas valor infantil. \n\t %d tarifas valor crian�a. \n\t %d tarifas valor adulto.\n", infantil, child, adult);
     printf ("\nPara o destino de Caldas Novas temos saidas de Goiania, Brasilia ou de Pires do Rio. \n Onde sera a sua origem?");
     printf ("\n\t Digite 1 para Goiania. \n\t Digite 2 para Brasilia \n\t Digite 3 para Pires do Rio");
     scanf ("%d", &origem);
     if (!verificaOrigem(origem)) return;
     if (origem==1){
                    aerea_ad = adult * 50.00;
                    aerea_cr = child * 25.00;
                    aerea_inf = infantil * 5.00;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     if (origem==2){
                    aerea_ad = adult * 60.00;
                    aerea_cr = child * 30.00;
                    aerea_inf = infantil * 7.50;
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     if (origem==3){
                    aerea_ad = adult * 10.00;
                    aerea_cr = child * 7.50;
                    aerea_inf = infantil * 5.00; 
                    aerea = aerea_ad + aerea_cr + aerea_inf;
                    printf ("\n\t O preco das passagens para %d pessoas:\n\t U$%.2f para adultos \n\t U$%.2f para crian�as \n\t U$%.2f para infantil.\n\n", pessoas, aerea_ad, aerea_cr, aerea_inf);
                    }
     printf ("\nPreco final das passagens: U$%.2f", aerea);
                                    
     DIARIAS();
     RENTALCAR();
     ALIMENTACAO();
     
     if (rent_total = 0.00) DAYPASS(); //ser� oferecido um daypass somente caso n�o tenha escolhido o aluguel de ve�culo
     
     while (extras!=9) {
           printf ("\nMUITA ANTENCAO!!! Para o destino de Caldas Novas, temos ainda CINCO ATRACOES ESPECIAIS para lhe oferecer visando ainda mais a sua comodidade e divers�o.");
           printf ("\nVoce podera escolher tantas quantas quiser dentre as opcoes. Caso queira pular esta etapa e n�o escolher nenhuma basta digitar 0 ou quando terminar suas escolhas digite a op��o 9 do menu.");
           printf ("\n\n\t 1 - \t Ingressos para o Hot Park e Praia do Cerrado.");
           printf ("\n\t 2 - \t Visita ao Parque Estadual da Serra de Caldas e Jardim Japones.");
           printf ("\n\t 3 - \t Entrada na Lagoa Quente Resorts.");
           printf ("\n\t 4 - \t Ingressos para o Di-Roma Aquaclube.");
           printf ("\n\t 5 - \t Passeio panoramico de helicoptero pela cidade de Caldas Novas.\n\n");
           scanf ("%d", &extras); getchar();
           if (extras==9) PGTO();
              else {
                   if (extras<0 || extras>5) {
                                do {
                                    printf ("\nOpcao Invalida, ditite novamente sua opcao\t:");
                                    scanf ("%d", &extras); getchar();
                                    } while (extras<0 || extras>5) // fim do while
                                             } // fim do if interno
                    } // fim do if externo
           
           // "extras" refere-se a um dos 5 passeios dispon�veis e "extra" refere-se � quantidade de bilhetes escohido do determinado passeio
           
           switch (extras) {
                  
                  case 1 : {
                       printf ("\nVoce escolheu ingressos para o Hot Park e Praia do Cerrado. Criancas de ate 5 anos nao pagam por esta atracao.");
                       printf ("\nATENCAO: criancas de 5 ate 13 anos pagam metade do ingresso. Quantos ingressos para adulto deseja adquirir?\n");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para criancas de 5 ate 13 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*50.00)+(extra_cr*25.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 2 : {
                       printf ("\nVoce escolheu visita ao Parque Estadual da Serra de Caldas e Jardim Japones. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: crian�as menores de 7 anos nao pagam por esta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*20.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 3 : {
                       printf ("\nVoce escolheu ingressos para a Lagoa Quente Resort. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 6 anos nao pagam pela entrada no clube, desde que acompanhados de um adulto.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra * 50.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 4 : {
                       printf ("\nVoce escolheu ingressos para o Di-Roma Aquaclube.");
                       printf ("\nATENCAO: Criancas de ate 13 anos de idade pagam apenas a metade. Criancas com menos de 5 anos nao pagam o ingresso.");
                       printf ("\nQuantos ingressos adulto voce deseja adquirir? \n.");
                       scanf ("%d", &extra_ad);
                       printf ("\nQuantos ingressos para crian�as de 5 a 13 anos deseja adquirir?\n");
                       scanf ("%d", &extra_cr);
                       extra_total = (extra_ad*50.00)+(extra_cr*25.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                  
                  case 5 : {
                       printf ("\nVoce escolheu um passeio panoramico de helicoptero pela cidade de Caldas Novas. Quantos ingressos deseja adquirir?");
                       printf ("\n ATENCAO: Menores de 9 anos nao podem participar desta atracao.\t");
                       scanf ("%d", &extra);
                       extra_total = (extra*99.00)+extra_total;
                       printf ("\nDeseja escolher mais atracoes para seu pacote? \n\t Digite 1 para SIM. \n\t Digite 9 para NAO.\n");
                       scanf ("%d", &extras);
                       break;
                       }
                       
                  case 0 : PGTO();
                  
                  default : printf ("\nOpcao Invalida...");
                  
                          } // fim do switch case
     PGTO();
   
} // fim do void CDN


boolean veficaGrupo(inteiro pessoas)
{
        if (pessoas<1) {
                       printf ("\nOpcao Invalida"); // deve existir no m�nimo uma pessoa para viajar
                       return false;
                       }
                       else if (pessoas>6) {
                            printf ("\nOpcao Invalida. \n Para pacotes com grupos de mais de 6 pessoas, por favor nos contatar atraves do telefone 0800-55-77-8001\n");
                            return false;
                            }
                            else {
                                 for (p=0; p<pessoas; p++){
                                     printf ("\nDigite a idade da %d� pessoa:\t", p+1);
                                     scanf ("%d", &idade[p]);
                                     if (idade[p]<3) infantil+;
                                        else if (idade[p]<13) child+;
                                             else adult+;
                                                         } // fim do for
                               } // fim do else
                               
                       if (adult<1) {
                                    printf ("\nNao e possivel a compra de um dos nossos pacotes sem um adulto\n");
                                    return false;
                                    }
                                    else return true; // sempre que o algoritmo retornar true, ser� negado, tornando-se falso e n�o executando o return que encontra-se l� acima. 
                                                    // Caso d� algum erro, retornar� false, mudando para true l� acima e executando a linha de comando do return
} // fim do boolean 


boolean veficaOrigem(inteiro origem)
{
        if (origem<1){
                      printf ("\nOpcao Invalida");
                      return false;
                      }
        if (origem>2){
                      printf ("Opcao Invalida");
                      return false;
                      }
                      else return true;
} // fim do boolean


void ONIBUS(void)
{
     printf ("\nDeseja adicionar um onibus com o percurso de ida e volta saindo de Pires do Rio ate o aeroporto escolhido? Digite S para SIM ou qualquer outra tecla para NAO");
     scanf ("%c", &bus);
     if (bus=='S' || bus=='s') {
                  bus_ad = adult*20.00;
                  bus_cr = child*10.00; // a categoria infantil ter� o �nibus gr�tis.
                  bus = (bus_ad+bus_cr);
                  printf ("\nPreco final do onibus: U$%.2f", bus);
                         }
} // fim do void


void DIARIAS(void)
{
     dias = (diarias-2); // referentes aos dias que ser�o gastos nos avi�es ida e volta
     if (pessoas==1) {
                     hotel = (1*99.00*dias);
                     printf ("\n O pacote escolhido tera %d diarias de hotel e o preco final das diarias com cafe da manha incluido sera de U$%.2f", dias, hotel);
                     }
                     
                     else {
                          printf ("\nQuantos quartos deseja reservar para a viagem?\n");
                          scanf ("%d", &quartos);
                          hotel_ad = (adult*99.00*dias);
                          hotel_cr = (child*59.00*dias);
                          hotel = (hotel_ad+hotel_cr)*quartos;
                          printf ("\nO pacote escolhido tera %d diarias de hotel em %d quartos e o preco final das diarias com cafe da manha incluido sera de U$%.2f", dias, quartos, hotel);
                          } // fim do else
} // fim do void


void RENTALCAR(void)
{
     printf ("\nDeseja adicionar o aluguel de veiculo para sua maior comodidade no destino adquirido? Digite S para SIM ou N para NAO:\n");
     scanf ("%c", &rent);
     if (rent=='S' || rent=='s'){
                   if (pessoas<6) { // ser� necess�rio apenas um ve�culo para este grupo de pessoas.
                                  printf ("Deseja protecao total ou parcial do veiculo?\n Digite 1 para Prote��o Parcial ou Digite 2 para Prote��o Total\n")
                                  scanf ("%d", &cover);
                                  if (cover<1 || cover>2) {
                                               printf ("\nOpcao Invalida");
                                               return;
                                               }
                                  if (cover==1) rent_total = (dias * 49.90);
                                     else rent_total = (dias * 69.90);
                                  printf ("\nO pacote escolhido tera %d diarias de locacao de veiculo e o preco final com a protecao escolhida sera de U$%.2f", dias, rent_total);
                    } // fim do if interno
                   } // fim do if externo
     else // acima de 5 pessoas ser�o necess�rios dois ve�culos.
          {
          printf ("\nSerao cobrados dois veiculos devido o numero de passageiros");
          printf ("\nDeseja protecao total ou parcial dos veiculos? \n Digite 1 para Protecao Parcial ou Digite 2 para Protecao Total\n");
          scanf ("%d", &cover);
                                  if (cover<1 || cover>2) {
                                               printf ("\nOpcao Invalida");
                                               return;
                                               }
                                  if (cover==1) rent_total = (dias * 49.90 * 2);
                                     else rent_total = (dias * 69.90 * 2);
                                  printf ("\nO pacote escolhido tera %d diarias de locacao de dois veiculos e o preco final com a protecao escolhida sera de U$%.2f", dias, rent_total);
         } // fim do else
} // fim do void


void ALIMENTACAO(void)
{
     printf ("\nDurante a viagem, qual o tipo de pensao que deseja escolher:");
     printf ("\n\t 1 - \t Pensao completa com almo�o e jantar inclusos.");
     printf ("\n\t 2 - \t Pensao parcial apenas com o jantar incluso.");
     printf ("\n\t 3 - \t Pensao parcial apenas com almo�o incluso.");
     printf ("\n\t 4 - \t Nao necessito deste servico extra.");
     printf ("\n\t OBS.: Lembre-se de que o cafe da manha ja esta incluso na sua diaria do hotel");
     scanf ("%d", &lunch);
     switch (lunch){
            case 1 : COMPLETA();
                     break;
            case 2 : JANTAR();
                     break;
            case 3 : ALMOCO();
                     break;
            case 4 : NOFOOD();
                     break;
            default : printf ("\nOpcao Invalida");
            		} // fim do switch case
} // fim do void


void COMPLETA(void)
{
     printf ("\nVoce  escolheu pensao completa com almoco e jantar");
     lunch_total = (adult*30.00*dias)+(child*20.00*dias)+(infantil*5.00*dias);
     printf ("\nO preco das refeicoes para %d sera de U$%.2f", pessoas, lunch_total);
} // fim do void

void JANTAR(void)
{
     printf ("\nVoce  escolheu pensao parcial com jantar incluso");
     lunch_total = (adult*20.00*dias)+(child*15.00*dias)+(infantil*3.00*dias);
     printf ("\nO preco das refeicoes para %d sera de U$%.2f", pessoas, lunch_total);
} // fim do void

void ALMOCO(void)
{
     printf ("\nVoce  escolheu pensao parcial com almoco incluso");
     lunch_total = (adult*15.00*dias)+(child*10.00*dias)+(infantil*2.00*dias);
     printf ("\nO preco das refeicoes para %d sera de U$%.2f", pessoas, lunch_total);
} // fim do void

void NOFOOD(void)
{
     printf ("\nVoce nao comprou este tipo de servi�o para o seu pacote, mas lembre-se de que o cafe da manha ja esta incluso na sua diaria do hotel");
} // fim do void

void DAYPASS(void)
{
     printf ("\nObservamos que voce nao optou pelo aluguel de um veiculo para a sua maior comodidade. Sendo assim ainda lhe ofereceremos para esta viagem um Day-Pass no qual voc� tera passe livre");
     printf ("nas linhas conjugadas de metro, trem e onibus municipais. Deseja adquiri-lo? \n\t 1 - \t SIM, desejo adquirir o Day-Pass.\n\t 2 - \t NAO, obrigado.\n");
     scanf ("%d", &pass);
     if (pass<1 || pass >2) {
                printf ("\nOpcao Invalida");
                return;
                } // fim do if
     if (pass==1) {
                  pass_ad = (adult*dias*9.00);
                  pass_cr = (child*dias*5.00);
                  pass_total = (pass_ad+pass_cr);
                  printf ("\nO preco dos tickets conjugados para esta viagem sera de U$%.2f", pass_total);
                  } // fim do if
                  else printf ("\nVoce nao escolheu este servico para o seu pacote de viagem, obrigado!\n");
} // fim do void


Void PGTO(void)
{
     total_dolar = (aerea + bus + hotel + rent_total + lunch_total + pass_total + extra_total);
     printf ("\nO valor total do pacote de ferias:");
     printf ("\n\t Passagens A�reas\t\t U$%.2f", aerea);
     printf ("\n\t Deslocamento de onibus \t\t U$%.2f", bus);
     printf ("\n\t Diarias de Hotel \t\t U$%.2f", hotel);
     printf ("\n\t Aluguel de Automovel \t\t U$%.2f", rent_total);
     printf ("\n\t Refeicoes \t\t U$%.2f", luch_total);
     printf ("\n\t Day-Pass \t\t U$%.2f", pass_total);
     printf ("\n\t Atracoes Extras \t\t U$%.2f", extra_total);
     printf ("\n\n\t VALOR FINAL \t\t U$%.2f", total_dolar);
     printf ("\n\n Observe que o valor do pacote esta em dolar americano, digite o cambio do dia para a conversao imediata em reais");
     scanf ("%.2f", &cambio);
     total_real = (total_dolar*cambio);
     printf ("\n\n\n\n O VALOR TOTAL DO SEU PACOTE E DE R$%.2f, BOAS FERIAS !!!!!!!! \n\n ", total_real);
} // fim do void
