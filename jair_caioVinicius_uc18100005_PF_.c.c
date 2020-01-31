 // Aluno : 

/*
algoritmo projetoFinal;
// S�ntese
//  Objetivo:  Controlar as vendas de ingressos da tribuna para a Copa do Mundo de 2018.
//  Entrada :  Nome do est�dio (n�o pode ser nulo), quantidade total de cadeiras na tribuna (mais de 50 e menos de 150), valor normal de cada ingresso,
//  percentual de desconto para as pessoas do sexo masculino e feminino. op��es do menu
//  Sa�da   :  Menu, mapa de assentos, estat�sticas de organizadores

// Valores de Entrada
//Saint Petesburg
//60
//100
//10
//30
//MENU
//M (VER O MAPA)
//V
//R (EFETUAR RESERVA)
//3
//F, 15, S , ENTER, F, 50, S, ENTER, M, 55, N, V
//C (REALIZAR CANCELAMENTO)
//114
//V
//E (EFETIVAR CONFIRMA��O)
//149
//V
//A (ESTAT�STICAS PARA OS ORGANIZADORES)
//V
//F (FINALIZAR O PROGRAMA)
// Valores de Saida
/*
________________________________________________________
 COPA DO MUNDO 2018                                            

 EST�DIO: SAINT PETESBURG                                            


DIGITE ( M ) PARA VERIFICAR O MAPA DE ASSENTOS DA TRIBUNA 
DIGITE ( R ) PARA EFETUAR UMA RESERVA DE ASSENTO 
DIGITE ( C ) PARA REALIZAR UM CANCELAMENTO DE INGRESSO 
DIGITE ( E ) PARA EFETIVAR UMA CONFIRMA��O DE VENDA DE INGRESSO 
DIGITE ( A ) PARA APRESENTAR AS ESTAT�STICAS PARA ORGANIZADORES 

DIGITE ( F ) PARA FINALIZAR O PROGRAMA 

________________________________________________________


/*

/*
ASSENTOS DA TRIBUNA DO EST�DIO 100
QUANTIDADE DE ASSENTOS: 60

FILEIRA DE 1  AT� 10: 
 1    2    3    4    5    6    7    8    9    10
|D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  
------------------------------------------------
FILEIRA DE 11  AT� 20: 
 11   12   13   14   15   16   17   18   19   20
|D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  
------------------------------------------------
FILEIRA DE 21  AT� 30: 
 21   22   23   24   25   26   27   28   29   30
|D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  
------------------------------------------------
FILEIRA DE 31  AT� 40: 
 31   32   33   34   35   36   37   38   39   40
|D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  
------------------------------------------------
FILEIRA DE 41  AT� 50: 
 41   42   43   44   45   46   47   48   49   50
|D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  
------------------------------------------------
FILEIRA DE 51  AT� 60: 
 51   52   53   54   55   56   57   58   59   60
|D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  |D|  
------------------------------------------------
*/

/*
ESTAT�STICAS PARA OS ORGANIZADORES: 
TOTAL DE RESERVAS FEITAS: 1
TOTAL DE VENDAS CONFIRMADAS: 1
TOTAL DE ASSENTOS: 60
TOTAL DE ASSENTOS DISPON�VEIS: 59
VALOR NORMAL DO INGRESSO: R$100,00
PORCENTAGEM DE DESCONTO PARA O SEXO MASCULINO: 10,00%
PORCENTAGEM DE DESCONTO PARA O SEXO FEMININO: 30,00%
VALOR DISPON�VEL NO CAIXA: R$70,00
DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: 
*/


/*principal
	// Declara��es
	texto nomeDoEstadio;
	inteiro quantidadeTotalDeCadeirasNaTribuna;
	inteiro quantidadeDeCadeirasPorFileira;
	real valorDoIngresso;
	real percentualParaOSexoMasculino;
	real percentualParaOSexoFeminino;
	real valorComDescontoParaOSexoMasculino;
	real valorComDescontoParaOSexoFeminino;
	inteiro contador;
	caracter assentosDaTribuna[150];
	caracter opcaoFinal;
	caracter opcaoDoMenu;
	inteiro qtdIngressosParaReservar;
	inteiro identificacaoDeIngressos[150];
	caracter sexoDaPessoa;
	inteiro assentoEscolhido;
	logico achei;
	inteiro contador2;
	caracter tecla;
	inteiro identificacaoDeCancelamento;
	inteiro identificacaoDeConfirmacao;
	real totalEmCaixa;
	caracter sexoDasPessoas[150];
	inteiro qtdDeReservasFeitas;
	inteiro qtdDeConfirmacoesFeitas;
	caracter opcaoDeConfirmacao;


	// Instru��es

	totalEmCaixa=0;
	qtdDeReservasFeitas=0;
	qtdDeConfirmacoesFeitas=0;

	//Solicita��es de in�cio:
	nomeDoEstadio=leValidaTexto("NOME DO EST�DIO: ", "NOME INV�LIDO. DIGITE O NOME DO EST�DIO NOVAMENTE: ");
	nomeDoEstadio=maiusculo(nomeDoEstadio);
	limpaTela();

	quantidadeTotalDeCadeirasNaTribuna=leValidaInteiro("QUANTIDADE TOTAL DE CADEIRAS NA TRIBUNA (ACIMA DE 50 E MENOR QUE 150): ", 51, 149, "QUANTIDADE INV�LIDA. DIGITE A QUANTIADE TOTAL DE CADEIRAS NOVAMENTE (ACIMA DE 50 E MENOR QUE 150): ");
	limpaTela();

	//quantidadeDeCadeirasPorFileira=leValidaInteiro("QUANTIDADE DE CADEIRAS NA PRIMEIRA FILEIRA (DE 1 ATE 25): ", 1, 25, QUANTIDADE INV�LIDA. DIGITE A QUANTIDADE DE CADEIRAS NA PRIMEIRA FILEIRA NOVAMENTE (DE 1 ATE 25): ");

	escreval("VALOR NORMAL DO INGRESSO: ");
	leia(valorDoIngresso);
	valorDoIngresso=validaIngresso(1, "VALOR INV�LIDO. DIGITE O VALOR NORMAL DO INGRESSO NOVAMENTE (ACIMA DE 0): ",  valorDoIngresso);
	limpaTela();

	escreval("PORCENTAGEM DE DESCONTO PARA O SEXO MASCULINO (DE 0 ATE 100): ");
	leia(percentualParaOSexoMasculino);
	percentualParaOSexoMasculino=validaPorcentagemDesconto(0, 100, "PORCENTAGEM INV�LIDA. DIGITE A PORCENTAGEM DE DESCONTO PARA O SEXO MASCULINO NOVAMENTE (DE 0 ATE 100): ", percentualParaOSexoMasculino);
	limpaTela();

	escreval("PORCENTAGEM DE DESCONTO PARA O SEXO FEMININO(DE 0 ATE 100): ");
	leia(percentualParaOSexoFeminino);
	percentualParaOSexoFeminino=validaPorcentagemDesconto(0, 100, "PORCENTAGEM INV�LIDA. DIGITE A PORCENTAGEM DE DESCONTO PARA O SEXO FEMININONOVAMENTE (DE 0 ATE 100): ", percentualParaOSexoFeminino);
	limpaTela();

	//Atribui��o dos assentos:
	para (contador de 0 ate quantidadeTotalDeCadeirasNaTribuna-1 passo 1) faca
		assentosDaTribuna[contador]='D';
	fimPara

	//Atribuica��o de identifica��o:
	para (contador de 0 ate quantidadeTotalDeCadeirasNaTribuna-1 passo 1) faca
		identificacaoDeIngressos[contador]=100+contador;
	fimPara

	//Atribui��o de sexo para as pessoas:
	para (contador de 0 ate quantidadeTotalDeCadeirasNaTribuna-1 passo 1) faca
		sexoDasPessoas[contador]='I';
	fimPara


	//Menu
	faca
		menuDoPrograma(nomeDoEstadio);
		escreval("");
		opcaoDoMenu=leValidaCaracterEntre6( 'M' , 'R' , 'C' , 'E' , 'A' , 'F' , "OP��O INV�LIDA. DIGITE A OP��O DESEJADA NOVAMENTE ( V - PARA VERIFICAR O MAPA,   R - PARA EFETUAR UMA RESERVA, C - PARA REALIZAR UM CANCELAMENTO,  D - PARA EFETIVAR UMA CONFIRMA��O DE VENDA, E - PARA APRESENTAR AS ESTAT�STICAS, F - PARA FINALIZAR O PROGRAMA ): " );
		limpaTela();

		escolha (opcaoDoMenu)
			//Mostrar o mapa
		caso 'M'
			mapaDeAssentosDaTribuna(assentosDaTribuna, quantidadeTotalDeCadeirasNaTribuna, nomeDoEstadio);
			escreval("");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			limpaTela();
			interrompa;

			//Efetuar uma reserva
		caso 'R'
			qtdIngressosParaReservar=leValidaInteiro("QUANTIDADE DE INGRESSOS PARA SEREM RESERVADOS (NO M�NIMO 1 E NO M�XIMO 10): ", 1, 10, "QUANTIDADE INV�LIDA. DIGITE NOVAMENTE A QUANTIDADE DE INGRESSSOS A SEREM RESERVADOS (NO M�NIMO 1 E NO M�XIMO 10): ");
			limpaTela();
			para (contador de 1 ate qtdIngressosParaReservar passo 1) faca
				escreval("PESSOA ",contador);
				escreval("SEXO DA PESSOA (M OU F): ");
				leiaCaracter(sexoDaPessoa);
				sexoDaPessoa=validaSexo('M', 'F', sexoDaPessoa, "SEXO INV�LIDO. DIGITE O SEXO DA PESSOA NOVAMENTE (M OU F): ");
				limpaTela();
				mapaDeAssentosDaTribuna(assentosDaTribuna, quantidadeTotalDeCadeirasNaTribuna, nomeDoEstadio);
				escreval("PESSOA ",contador);
				//Verifica��o se o assento j� foi escolhido
				faca
					assentoEscolhido=leValidaInteiro("ASSENTO ESCOLHIDO: ", 1, quantidadeTotalDeCadeirasNaTribuna, "ESSE ASSENTO N�O EXISTE. DIGITE O ASSENTO ESCOLHIDO NOVAMENTE: ");
					se (assentosDaTribuna[assentoEscolhido-1]=='D') entao
						assentosDaTribuna[assentoEscolhido-1]='R';
						achei=falso;
						limpaTela();
					senao
						escreval("ESSE ASSENTO J� FOI ESCOLHIDO.");
						achei=verdadeiro;
					fimSe
				enquanto (achei==verdadeiro);
				apresentaInformacoesDaReserva(valorDoIngresso , percentualParaOSexoMasculino , percentualParaOSexoFeminino , sexoDaPessoa);
				opcaoDeConfirmacao=leValidaCaracterEntre2("DIGITE ( S ) PARA CONTINUAR OU ( N ) PARA CANCELAR ESSA RESERVA: ", 'S', 'N', "OP��O INV�LIDA. DIGITE ( S ) PARA CONTINUAR OU ( N ) PARA CANCELAR ESSA RESERVA: ");
				se (opcaoDeConfirmacao=='S') entao
					sexoDasPessoas[assentoEscolhido-1]=sexoDaPessoa;
					escreval("RESERVA CONFIRMADA. N�MERO DE INDENTIFICA��O DO INGRESSO: ", identificacaoDeIngressos[assentoEscolhido-1]);
					escreval("DIGITE QUALQUER TECLA PARA CONTINUAR. ");
					leiaCaracter(tecla);
					limpaTela();
					qtdDeReservasFeitas=qtdDeReservasFeitas+1;
				senao
					assentosDaTribuna[assentoEscolhido-1]='D';
					limpaTela();
				fimSe
			fimPara
			escreval("RESERVA DE INGRESSOS FINALIZADA.");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			limpaTela();
			interrompa;

			//Cancelamento de ingresso
		caso 'C'
			escreval("CANCELAMENTO DE RESERVA.");
			faca
				identificacaoDeCancelamento=leValidaInteiro("DIGITE A IDENTIFICA��O DO INGRESSO A SER CANCELADO: ", 100, 100+quantidadeTotalDeCadeirasNaTribuna-1, "IDENTIFICA��O DESCONHECIDA. DIGITE A IDENTIFICA��O DO INGRESSO A SER CANCELADO NOVAMENTE (IDENTIFICA��O � O N�MERO DO ASSENTO MAIS 100):");
				se (assentosDaTribuna[identificacaoDeCancelamento-100]=='R') entao
					assentosDaTribuna[identificacaoDeCancelamento-100]='D';
					escreval("RESERVA CANCELADA.");
					achei=falso;
					limpaTela();
				senao
					escreval("N�O � POSS�VEL CANCELAR UMA RESERVA QUE NUNCA FOI FEITA.");
					achei=verdadeiro;
					opcaoFinal=leValidaCaracterEntre2("DIGITE ( V ) PARA DESISTIR DO CANCELAMENTO ( C ) PARA INFORMAR A IDENTIFICA��O DO INGRESSO A SER CANCELADO NOVAMENTE: ", 'V', 'C', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU OU ( C ) PARA VOLTAR A REALIZAR O CANCELAMENTO: ");
					se (opcaoFinal=='V') entao
						achei=falso;
					senao
						achei=verdadeiro;
					fimSe
				fimSe
			enquanto (achei==verdadeiro);
			escreval("CANCELAMENTO DE INGRESSO RESERVADO FINALIZADO.");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			qtdDeReservasFeitas=qtdDeReservasFeitas-1;
			limpaTela();
			interrompa;

			//Efetivar confirma��o de ingresso
		caso 'E'
			escreval("CONFIRMA��O DE RESERVA.");
			faca
				identificacaoDeConfirmacao=leValidaInteiro("DIGITE A IDENTIFICA��O DO INGRESSO A SER CONFIRMADO: ", 100, 100+quantidadeTotalDeCadeirasNaTribuna-1, "IDENTIFICA��O DESCONHECIDA. DIGITE A IDENTIFICA��O DO INGRESSO A SER CONFIRMADO NOVAMENTE (IDENTIFICA��O � O N�MERO DO ASSENTO MAIS 99):");
				se (assentosDaTribuna[identificacaoDeConfirmacao-100]=='R') entao
					assentosDaTribuna[identificacaoDeConfirmacao-100]='C';
					escreval("RESERVA CONFIRMADA!");
					achei=falso;
					limpaTela();
				senao
					escreval("N�O � POSS�VEL CONFIRMAR UMA RESERVA QUE NUNCA FOI FEITA.");
					achei=verdadeiro;
					opcaoFinal=leValidaCaracterEntre2("DIGITE ( V ) PARA DESISTIR DA CONFIRMA��O ( C ) PARA INFORMAR A IDENTIFICA��O DO INGRESSO A SER CONFIRMADO NOVAMENTE: ", 'V', 'E', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU OU ( E ) PARA VOLTAR A REALIZAR A CONFIRMA��O: ");
					se (opcaoFinal=='V') entao
						achei=falso;
					senao
						achei=verdadeiro;
					fimSe
				fimSe
			enquanto (achei==verdadeiro);
			escreval("CONFIRMA��O DE RESERVA FINALIZADA.");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			qtdDeConfirmacoesFeitas=qtdDeConfirmacoesFeitas+1;
			se (sexoDasPessoas[identificacaoDeConfirmacao-100]=='M') entao
				totalEmCaixa=totalEmCaixa+calculaIngresso(valorDoIngresso, percentualParaOSexoMasculino);
			senao
				totalEmCaixa=totalEmCaixa+calculaIngresso(valorDoIngresso, percentualParaOSexoFeminino);
			fimSe
			limpaTela();
			interrompa;

			//Apresentar estat�sticas aos organizadores
		caso 'A'
			escreval("ESTAT�STICAS PARA OS ORGANIZADORES: ");
			escreval("TOTAL DE RESERVAS FEITAS: ",qtdDeReservasFeitas);
			escreval("TOTAL DE VENDAS CONFIRMADAS: ",qtdDeConfirmacoesFeitas);
			escreval("TOTAL DE ASSENTOS: ",quantidadeTotalDeCadeirasNaTribuna);
			escreval("TOTAL DE ASSENTOS DISPON�VEIS: ",quantidadeTotalDeCadeirasNaTribuna-qtdDeReservasFeitas);
			escreval("VALOR NORMAL DO INGRESSO: R$",valorDoIngresso::2);
			escreval("PORCENTAGEM DE DESCONTO PARA O SEXO MASCULINO: ",percentualParaOSexoMasculino::2,"%");
			escreval("PORCENTAGEM DE DESCONTO PARA O SEXO FEMININO: ",percentualParaOSexoFeminino::2,"%");
			escreval("VALOR DISPON�VEL NO CAIXA: R$",totalEmCaixa::2);
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			limpaTela();
			interrompa;

			//Finalizar o programa
		caso 'F'
			opcaoFinal='F';
			interrompa;

		fimEscolha

	enquanto (opcaoFinal!='F');

	//mapaDeAssentosDaTribuna(assentosDaTribuna, quantidadeTotalDeCadeirasNaTribuna, nomeDoEstadio);
fimPrincipal

//Valida��es:

//leValidaTexto
//Objetivo: Ler e validar um texto
//Par�metros: t�tulo e mensagem de erro
//Retorno: Texto v�lido
funcao texto leValidaTexto (texto titulo, texto msgDeErro)
	texto textoEscolhido;

	escreval(titulo);
	leia(textoEscolhido);
	enquanto (tamanhoTexto(textoEscolhido)==0) faca
		escreval(msgDeErro);
		leia(textoEscolhido);
	fimEnquanto

	retorna textoEscolhido;
fimFuncao

//leValidaInteiro
//Objetivo: Ler e validar um n�mero inteiro
//Par�metros: T�tulo, n�mero m�nimo, n�mero m�ximo e mensagem de erro
//Retorno: N�mero inteiro v�lido
funcao inteiro leValidaInteiro(texto titulo, inteiro numeroMinimo, inteiro numeroMaximo, texto msgDeErro)
	inteiro numeroEscolhido;

	escreval(titulo);
	leia(numeroEscolhido);
	enquanto (numeroEscolhido<numeroMinimo ou numeroEscolhido>numeroMaximo) faca
		escreval(msgDeErro);
		leia(numeroEscolhido);
	fimEnquanto

	retorna numeroEscolhido;
fimFuncao

//validaIngresso
//Objetivo: Validar o valor do ingresso
//Par�metros: Valor m�nimo, mensagem de erro, valor escolhido
//Retorno: Valor v�lido do ingresso
funcao real validaIngresso (real valorMinimo, texto msgDeErro, real valorEscolhido)

	enquanto (valorEscolhido<valorMinimo) faca
		escreval(msgDeErro);
		leia(valorEscolhido);
	fimEnquanto

	retorna valorEscolhido;
fimFuncao

//validaPorcentagemDesconto
//Objetivo: Validar a porcentagem de desconto
//Par�metros: Porcentagem m�nima, porcentagem  m�xima, mensagem de erro, porcentagem escolhida
//Retorno: Porcentagem v�lida
funcao real validaPorcentagemDesconto (real porcentagemMinima, real porcentagemMaxima, texto msgDeErro, real porcentagemEscolhida)

	enquanto (porcentagemEscolhida<porcentagemMinima ou porcentagemEscolhida>porcentagemMaxima) faca
		escreval(msgDeErro);
		leia(porcentagemEscolhida);
	fimEnquanto

	retorna porcentagemEscolhida;
fimFuncao

//calculaIngresso
//Objetivo: Calcular o valor com desconto do ingresso
//Par�metros: Valor normal do ingresso e desconto
//Retorno: Valor do ingresso com desconto
funcao real calculaIngresso (real valorOrginalDoIngresso, real valorDoDesconto)

	retorna valorOrginalDoIngresso-(valorDoDesconto/100*valorOrginalDoIngresso);
fimFuncao

//mapaDeAssentosDaTribuna
//Objetivo: Apresentar o mapa de assentos da tribuna
//Par�metros: Vetor de assentos e total de assentos
//Retorno: Nenhum
procedimento mapaDeAssentosDaTribuna (caracter assentos[], inteiro quantidadeTotalDeAssentos, texto nomeDoEstadio)
	inteiro contador;
	inteiro contador2;
	contador2=1;

	//mapa dos assentos
	escreval("ASSENTOS DA TRIBUNA DO EST�DIO ", nomeDoEstadio);
	escreval("QUANTIDADE DE ASSENTOS: ",quantidadeTotalDeAssentos);
	escreval("");
	escreval("FILEIRA DE 1  AT� 10: " );
	escreval(" 1    2    3    4    5    6    7    8    9    10");
	para (contador de 0 ate quantidadeTotalDeAssentos-1 passo 1) faca
		escreva("|",assentos[contador], "|  ");
		se (contador2%10==0) entao
			escreval("");
			escreval("------------------------------------------------");
			se (contador<quantidadeTotalDeAssentos-10 e contador<100) entao
				escreval("FILEIRA DE ", contador2+1 ,"  AT� ", contador2+10, ": " );
				escreval(" ",contador2+1,"   ",contador2+2,"   ",contador2+3,"   ",contador2+4,"   ",contador2+5,"   ",contador2+6,"   ",contador2+7,"   ",contador2+8,"   ",contador2+9,"   ",contador2+10);
			fimSe
			se (contador<quantidadeTotalDeAssentos-10 e contador>100) entao
				escreval("FILEIRA DE ", contador2+1 ,"  AT� ", contador2+10, ": " );
				escreval("",contador2+1,"  ",contador2+2,"  ",contador2+3,"  ",contador2+4,"  ",contador2+5,"  ",contador2+6,"  ",contador2+7,"  ",contador2+8,"  ",contador2+9,"  ",contador2+10);
			fimSe
		fimSe
		contador2=contador2+1;
	fimPara

fimProcedimento

//menuDoPrograma
//Objetivo: Apresentar as op��es do programa
//Par�metros: Nome do est�dio
//Retorno: Nenhum
procedimento menuDoPrograma(texto nomeDoEstadio)

	escreval("________________________________________________________");
	escreval(" COPA DO MUNDO 2018                                            ");
	escreval("");
	escreval(" EST�DIO: ",nomeDoEstadio,"                                            ");
	escreval("");
	escreval("");
	escreval("DIGITE ( M ) PARA VERIFICAR O MAPA DE ASSENTOS DA TRIBUNA ");
	escreval("DIGITE ( R ) PARA EFETUAR UMA RESERVA DE ASSENTO ");
	escreval("DIGITE ( C ) PARA REALIZAR UM CANCELAMENTO DE INGRESSO ");
	escreval("DIGITE ( E ) PARA EFETIVAR UMA CONFIRMA��O DE VENDA DE INGRESSO ");
	escreval("DIGITE ( A ) PARA APRESENTAR AS ESTAT�STICAS PARA ORGANIZADORES ");
	escreval("");
	escreval("DIGITE ( F ) PARA FINALIZAR O PROGRAMA ");
	escreval("");
	escreval("________________________________________________________");

fimProcedimento

//leValidaCaracterEntre6
//Objetivo: Ler e validar um caracter entre 6 caracteres
//Par�metros: caracterValido 1, caracterValido 2, caracterValido 3, caracterValido 4, caracterValido 5, caracterValido 6 e mensagem de erro
//Retorno: Caracter v�lido
funcao caracter leValidaCaracterEntre6 (caracter caracterValido1, caracter caracterValido2, caracter caracterValido3, caracter caracterValido4, caracter caracterValido5, caracter caracterValido6, texto msgDeErro)
	caracter caracterEscolhido;
	caracterValido1=maiusculoCaracter(caracterValido1);
	caracterValido2=maiusculoCaracter(caracterValido2);
	caracterValido3=maiusculoCaracter(caracterValido3);
	caracterValido4=maiusculoCaracter(caracterValido4);
	caracterValido5=maiusculoCaracter(caracterValido5);
	caracterValido6=maiusculoCaracter(caracterValido6);

	leiaCaracter(caracterEscolhido);
	caracterEscolhido=maiusculoCaracter(caracterEscolhido);
	enquanto (caracterEscolhido!=caracterValido1 e caracterEscolhido!=caracterValido2 e caracterEscolhido!=caracterValido3 e caracterEscolhido!=caracterValido4 e caracterEscolhido!=caracterValido5 e caracterEscolhido!=caracterValido6) faca
		escreval(msgDeErro);
		leiaCaracter(caracterEscolhido);
		caracterEscolhido=maiusculoCaracter(caracterEscolhido);
	fimEnquanto

	retorna caracterEscolhido;
fimFuncao

//leValidaCaracter
//Objetivo: Ler e validar um caracter
//Par�metros: titulo, caracter v�lido e mensagem de erro
//Retorno: Caracter v�lido
funcao caracter leValidaCaracter(texto titulo ,caracter caracterValido, texto msgDeErro)
	caracter caracterEscolhido;
	caracterValido=maiusculoCaracter(caracterValido);

	escreval(titulo);
	leiaCaracter(caracterEscolhido);
	caracterEscolhido=maiusculoCaracter(caracterEscolhido);
	enquanto (caracterEscolhido!=caracterValido) faca
		escreval(msgDeErro);
		leiaCaracter(caracterEscolhido);
		caracterEscolhido=maiusculoCaracter(caracterEscolhido);
	fimEnquanto

	retorna caracterEscolhido;
fimFuncao

//validaSexo
//Objetivo: Validar o sexo
//Par�metros: sexo 1, sexo 2, sexo escolhido e mensagem de erro
//Retorno: Sexo v�lido
funcao caracter validaSexo (caracter sexo1, caracter sexo2, caracter sexoEscolhido, texto msgDeErro)
	sexo1=maiusculoCaracter(sexo1);
	sexo2=maiusculoCaracter(sexo2);
	sexoEscolhido=maiusculoCaracter(sexoEscolhido);

	enquanto (sexoEscolhido!=sexo1 e sexoEscolhido!=sexo2) faca
		escreval(msgDeErro);
		leiaCaracter(sexoEscolhido);
		sexoEscolhido=maiusculoCaracter(sexoEscolhido);
	fimEnquanto

	retorna sexoEscolhido;
fimFuncao

//leValidaCaracterEntre2
//Objetivo: Ler e validar um caracter entre 2 caracteres
//Par�metros: titulo, caracter v�lido e mensagem de erro
//Retorno: Caracter v�lido
funcao caracter leValidaCaracterEntre2(texto titulo ,caracter caracterValido1, caracter caracterValido2, texto msgDeErro)
	caracter caracterEscolhido;
	caracterValido1=maiusculoCaracter(caracterValido1);
	caracterValido2=maiusculoCaracter(caracterValido2);

	escreval(titulo);
	leiaCaracter(caracterEscolhido);
	caracterEscolhido=maiusculoCaracter(caracterEscolhido);
	enquanto (caracterEscolhido!=caracterValido1 e caracterEscolhido!=caracterValido2) faca
		escreval(msgDeErro);
		leiaCaracter(caracterEscolhido);
		caracterEscolhido=maiusculoCaracter(caracterEscolhido);
	fimEnquanto

	retorna caracterEscolhido;
fimFuncao

//apresentaInformacoesDaReserva
//Objetivo: Apresentar o valor do ingresso
//Par�metros: Valor do ingresso, percentual para o sexo masculino, percentual para o sexo feminino e o sexo da pessoa
//Retorno: Nenhum
procedimento apresentaInformacoesDaReserva (real valorDoIngresso, real percentualParaOSexoMasculino, real percentualParaOSexoFeminino, caracter sexoDaPessoa)

	escreval("ASSENTO RESERVADO COM SUCESSO.");
	se (sexoDaPessoa=='M') entao
		escreval("VALOR DO INGRESSO: R$",calculaIngresso(valorDoIngresso, percentualParaOSexoMasculino)::2);
	senao
		escreval("VALOR DO INGRESSO: R$",calculaIngresso(valorDoIngresso, percentualParaOSexoFeminino)::2);
	fimSe

fimProcedimento

*/

#include <stdio.h>
#include <conio.c>
#include <locale.h> 

//Prot�tipos:
void leValidaTexto (char titulo[], char msgDeErro[], char textoEscolhido[]);
int leValidaInteiro(char titulo[], int numeroMinimo, int numeroMaximo, char msgDeErro[]);
float validaIngresso (float valorMinimo, char msgDeErro[], float valorEscolhido);
float validaPorcentagemDesconto (float porcentagemMinima, float porcentagemMaxima, char msgDeErro[], float porcentagemEscolhida);
float calculaIngresso (float valorOrginalDoIngresso, float valorDoDesconto);
void mapaDeAssentosDaTribuna (char assentos[], int quantidadeTotalDeAssentos, char nomeDoEstadio[]);
void menuDoPrograma(char nomeDoEstadio[]);
char leValidaCaracterEntre6 (char caracterValido1, char caracterValido2, char caracterValido3, char caracterValido4, char caracterValido5, char caracterValido6, char msgDeErro[]);
char leValidaCaracter(char titulo[] ,char caracterValido, char msgDeErro[]);
char validaSexo (char sexo1, char sexo2, char sexoEscolhido, char msgDeErro[]);
char leValidaCaracterEntre2(char titulo[] ,char caracterValido1, char caracterValido2, char msgDeErro[]);
void apresentaInformacoesDaReserva (float valorDoIngresso, float percentualParaOSexoMasculino, float percentualParaOSexoFeminino, char sexoDaPessoa);

int main(void)
{
setlocale(LC_ALL, "Portuguese");

	// Declara��es
	char nomeDoEstadio[100];
	int quantidadeTotalDeCadeirasNaTribuna;
	int quantidadeDeCadeirasPorFileira;
	float valorDoIngresso;
	float percentualParaOSexoMasculino;
	float percentualParaOSexoFeminino;
	float valorComDescontoParaOSexoMasculino;
	float valorComDescontoParaOSexoFeminino;
	int contador;
	char assentosDaTribuna[150];
	char opcaoFinal;
	char opcaoDoMenu;
	int qtdIngressosParaReservar;
	int identificacaoDeIngressos[150];
	char sexoDaPessoa;
	int assentoEscolhido;
	int achei;
	int contador2;
	char tecla;
	int identificacaoDeCancelamento;
	int identificacaoDeConfirmacao;
	float totalEmCaixa;
	char sexoDasPessoas[150];
	int qtdDeReservasFeitas;
	int qtdDeConfirmacoesFeitas;
	char opcaoDeConfirmacao;


	// Instru��es

	totalEmCaixa=0;
	qtdDeReservasFeitas=0;
	qtdDeConfirmacoesFeitas=0;

	//Solicita��es de in�cio:
	leValidaTexto("NOME DO EST�DIO: ", "NOME INV�LIDO. DIGITE O NOME DO EST�DIO NOVAMENTE: ", nomeDoEstadio);
	for (contador=0; contador<=strlen(nomeDoEstadio); contador++){
		nomeDoEstadio[contador]=toupper(nomeDoEstadio[contador]);
	}
	
	system("cls");

	quantidadeTotalDeCadeirasNaTribuna=leValidaInteiro("QUANTIDADE TOTAL DE CADEIRAS NA TRIBUNA (ACIMA DE 50 E MENOR QUE 150): ", 51, 149, "QUANTIDADE INV�LIDA. DIGITE A QUANTIADE TOTAL DE CADEIRAS NOVAMENTE (ACIMA DE 50 E MENOR QUE 150): ");
	system("cls");

	//quantidadeDeCadeirasPorFileira=leValidaInteiro("QUANTIDADE DE CADEIRAS NA PRIMEIRA FILEIRA (DE 1 ATE 25): ", 1, 25, QUANTIDADE INV�LIDA. DIGITE A QUANTIDADE DE CADEIRAS NA PRIMEIRA FILEIRA NOVAMENTE (DE 1 ATE 25): ");

	printf("VALOR NORMAL DO INGRESSO: \n");
	scanf("%f",&valorDoIngresso);
	valorDoIngresso=validaIngresso(1, "VALOR INV�LIDO. DIGITE O VALOR NORMAL DO INGRESSO NOVAMENTE (ACIMA DE 0): ",  valorDoIngresso);
	system("cls");

	printf("PORCENTAGEM DE DESCONTO PARA O SEXO MASCULINO (DE 0 ATE 100): \n");
	scanf("%f",&percentualParaOSexoMasculino);
	percentualParaOSexoMasculino=validaPorcentagemDesconto(0, 100, "PORCENTAGEM INV�LIDA. DIGITE A PORCENTAGEM DE DESCONTO PARA O SEXO MASCULINO NOVAMENTE (DE 0 ATE 100): ", percentualParaOSexoMasculino);
	system("cls");

	printf("PORCENTAGEM DE DESCONTO PARA O SEXO FEMININO(DE 0 ATE 100): \n");
	scanf("%f",&percentualParaOSexoFeminino);
	percentualParaOSexoFeminino=validaPorcentagemDesconto(0, 100, "PORCENTAGEM INV�LIDA. DIGITE A PORCENTAGEM DE DESCONTO PARA O SEXO FEMININONOVAMENTE (DE 0 ATE 100): ", percentualParaOSexoFeminino);
	system("cls");

	//Atribui��o dos assentos:
	for (contador=0; contador<=quantidadeTotalDeCadeirasNaTribuna-1; contador++) {
	
		assentosDaTribuna[contador]='D';
		
	}

	//Atribuica��o de identifica��o:
	for (contador=0; contador<=quantidadeTotalDeCadeirasNaTribuna-1; contador++) {
		identificacaoDeIngressos[contador]=100+contador;
	
	}

	//Atribui��o de sexo para as pessoas:
	for (contador=0; contador<=quantidadeTotalDeCadeirasNaTribuna-1; contador++) {
		sexoDasPessoas[contador]='I';
	
	}


	//Menu
	do{
	
		menuDoPrograma(nomeDoEstadio);
		printf("\n");
		opcaoDoMenu=leValidaCaracterEntre6( 'M' , 'R' , 'C' , 'E' , 'A' , 'F' , "OP��O INV�LIDA. DIGITE A OP��O DESEJADA NOVAMENTE ( V - PARA VERIFICAR O MAPA,   R - PARA EFETUAR UMA RESERVA, C - PARA REALIZAR UM CANCELAMENTO,  D - PARA EFETIVAR UMA CONFIRMA��O DE VENDA, E - PARA APRESENTAR AS ESTAT�STICAS, F - PARA FINALIZAR O PROGRAMA ): " );
		system("cls");

		switch (opcaoDoMenu) {
		
			//Mostrar o mapa
		case 'M':
			mapaDeAssentosDaTribuna(assentosDaTribuna, quantidadeTotalDeCadeirasNaTribuna, nomeDoEstadio);
			printf("\n");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			system("cls");
			break;

			//Efetuar uma reserva
		case 'R':
			qtdIngressosParaReservar=leValidaInteiro("QUANTIDADE DE INGRESSOS PARA SEREM RESERVADOS (NO M�NIMO 1 E NO M�XIMO 10): ", 1, 10, "QUANTIDADE INV�LIDA. DIGITE NOVAMENTE A QUANTIDADE DE INGRESSSOS A SEREM RESERVADOS (NO M�NIMO 1 E NO M�XIMO 10): ");
			system("cls");
			for (contador=1; contador<=qtdIngressosParaReservar; contador++) {
			
				printf("PESSOA %i\n",contador);
				printf("SEXO DA PESSOA (M OU F): \n");
				sexoDaPessoa=getch();
				sexoDaPessoa=validaSexo('M', 'F', sexoDaPessoa, "SEXO INV�LIDO. DIGITE O SEXO DA PESSOA NOVAMENTE (M OU F): ");
				system("cls");
				mapaDeAssentosDaTribuna(assentosDaTribuna, quantidadeTotalDeCadeirasNaTribuna, nomeDoEstadio);
				printf("PESSOA %i\n",contador);
				//Verifica��o se o assento j� foi escolhido
				do{
				
					assentoEscolhido=leValidaInteiro("ASSENTO ESCOLHIDO: ", 1, quantidadeTotalDeCadeirasNaTribuna, "ESSE ASSENTO N�O EXISTE. DIGITE O ASSENTO ESCOLHIDO NOVAMENTE: ");
					if (assentosDaTribuna[assentoEscolhido-1]=='D') {
					
						assentosDaTribuna[assentoEscolhido-1]='R';
						achei=0;
						system("cls");
					
					}else{
					
						printf("ESSE ASSENTO J� FOI ESCOLHIDO.\n");
						achei=1;
					
					}
				
				}while (achei==1);
				apresentaInformacoesDaReserva(valorDoIngresso , percentualParaOSexoMasculino , percentualParaOSexoFeminino , sexoDaPessoa);
				opcaoDeConfirmacao=leValidaCaracterEntre2("DIGITE ( S ) PARA CONTINUAR OU ( N ) PARA CANCELAR ESSA RESERVA: ", 'S', 'N', "OP��O INV�LIDA. DIGITE ( S ) PARA CONTINUAR OU ( N ) PARA CANCELAR ESSA RESERVA: ");
				if (opcaoDeConfirmacao=='S') {
				
					sexoDasPessoas[assentoEscolhido-1]=sexoDaPessoa;
					printf("RESERVA CONFIRMADA. N�MERO DE INDENTIFICA��O DO INGRESSO: %i\n", identificacaoDeIngressos[assentoEscolhido-1]);
					printf("DIGITE QUALQUER TECLA PARA CONTINUAR. \n");
					tecla=getch();
					system("cls");
					qtdDeReservasFeitas=qtdDeReservasFeitas+1;
				
				}else{
				
					assentosDaTribuna[assentoEscolhido-1]='D';
					system("cls");
				
				}
			
			}
			printf("RESERVA DE INGRESSOS FINALIZADA.\n");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: \n");
			system("cls");
			break;

			//Cancelamento de ingresso
		case 'C':
			printf("CANCELAMENTO DE RESERVA.\n");
			do{
			
				identificacaoDeCancelamento=leValidaInteiro("DIGITE A IDENTIFICA��O DO INGRESSO A SER CANCELADO: ", 100, 100+quantidadeTotalDeCadeirasNaTribuna-1, "IDENTIFICA��O DESCONHECIDA. DIGITE A IDENTIFICA��O DO INGRESSO A SER CANCELADO NOVAMENTE (IDENTIFICA��O � O N�MERO DO ASSENTO MAIS 100):");
				if (assentosDaTribuna[identificacaoDeCancelamento-100]=='R') {
				
					assentosDaTribuna[identificacaoDeCancelamento-100]='D';
					printf("RESERVA CANCELADA.\n");
					achei=0;
					system("cls");
				
				}else{
				
					printf("N�O � POSS�VEL CANCELAR UMA RESERVA QUE NUNCA FOI FEITA.\n");
					achei=1;
					opcaoFinal=leValidaCaracterEntre2("DIGITE ( V ) PARA DESISTIR DO CANCELAMENTO ( C ) PARA INFORMAR A IDENTIFICA��O DO INGRESSO A SER CANCELADO NOVAMENTE: ", 'V', 'C', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU OU ( C ) PARA VOLTAR A REALIZAR O CANCELAMENTO: ");
					if (opcaoFinal=='V') {
					
						achei=0;
					
					}else{
					
						achei=1;
					
					}
				
				}
			
			}while (achei==1);
			printf("CANCELAMENTO DE INGRESSO RESERVADO FINALIZADO.\n");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			qtdDeReservasFeitas=qtdDeReservasFeitas-1;
			system("cls");
			break;

			//Efetivar confirma��o de ingresso
		case 'E':
			printf("CONFIRMA��O DE RESERVA.\n");
			do{
			
				identificacaoDeConfirmacao=leValidaInteiro("DIGITE A IDENTIFICA��O DO INGRESSO A SER CONFIRMADO: ", 100, 100+quantidadeTotalDeCadeirasNaTribuna-1, "IDENTIFICA��O DESCONHECIDA. DIGITE A IDENTIFICA��O DO INGRESSO A SER CONFIRMADO NOVAMENTE (IDENTIFICA��O � O N�MERO DO ASSENTO MAIS 99):");
				if (assentosDaTribuna[identificacaoDeConfirmacao-100]=='R') {
				
					assentosDaTribuna[identificacaoDeConfirmacao-100]='C';
					printf("RESERVA CONFIRMADA!\n");
					achei=0;
					qtdDeConfirmacoesFeitas=qtdDeConfirmacoesFeitas+1;
					system("cls");
				
				}else{
				
					printf("N�O � POSS�VEL CONFIRMAR UMA RESERVA QUE NUNCA FOI FEITA.\n");
					achei=1;
					opcaoFinal=leValidaCaracterEntre2("DIGITE ( V ) PARA DESISTIR DA CONFIRMA��O ( E ) PARA INFORMAR A IDENTIFICA��O DO INGRESSO A SER CONFIRMADO NOVAMENTE: ", 'V', 'E', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU OU ( E ) PARA VOLTAR A REALIZAR A CONFIRMA��O: ");
					if (opcaoFinal=='V') {
					
						achei=0;
					
					}else{
					
						achei=1;
					
					}
				
				}
			
			}while (achei==1);
			printf("CONFIRMA��O DE RESERVA FINALIZADA.\n");
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			
			if (sexoDasPessoas[identificacaoDeConfirmacao-100]=='M') {
			
				totalEmCaixa=totalEmCaixa+calculaIngresso(valorDoIngresso, percentualParaOSexoMasculino);
			
			}else{
			
				totalEmCaixa=totalEmCaixa+calculaIngresso(valorDoIngresso, percentualParaOSexoFeminino);
			
			}
			system("cls");
			break;

			//Apresentar estat�sticas aos organizadores
		case 'A':
			printf("ESTAT�STICAS PARA OS ORGANIZADORES: \n");
			printf("TOTAL DE RESERVAS FEITAS: %i\n",qtdDeReservasFeitas);
			printf("TOTAL DE VENDAS CONFIRMADAS: %i\n",qtdDeConfirmacoesFeitas);
			printf("TOTAL DE ASSENTOS: %i\n",quantidadeTotalDeCadeirasNaTribuna);
			printf("TOTAL DE ASSENTOS DISPON�VEIS: %i\n",quantidadeTotalDeCadeirasNaTribuna-qtdDeReservasFeitas);
			printf("VALOR NORMAL DO INGRESSO: R$%.2f\n",valorDoIngresso);
			printf("PORCENTAGEM DE DESCONTO PARA O SEXO MASCULINO: %.2f%%\n",percentualParaOSexoMasculino);
			printf("PORCENTAGEM DE DESCONTO PARA O SEXO FEMININO: %.2f%%\n",percentualParaOSexoFeminino);
			printf("VALOR DISPON�VEL NO CAIXA: R$%.2f\n",totalEmCaixa);
			opcaoFinal=leValidaCaracter("DIGITE ( V ) PARA VOLTAR AO MENU DE OP��ES: ", 'V', "OP��O INV�LIDA. DIGITE ( V ) PARA VOLTAR AO MENU: ");
			system("cls");
			break;

			//Finalizar o programa
		case 'F':
			opcaoFinal='F';
			break;

		}

	}while (opcaoFinal!='F');
  getch();
  return 0;
}













//Valida��es:

//leValidaTexto
//Objetivo: Ler e validar um texto
//Par�metros: t�tulo e mensagem de erro
//Retorno: Texto v�lido
void leValidaTexto (char titulo[], char msgDeErro[], char textoEscolhido[]){


	printf("%s\n",titulo);
	gets(textoEscolhido);
	while (strlen(textoEscolhido)==0) {
	
		printf("%s\n",msgDeErro);
		gets(textoEscolhido);
	
	}

}

//leValidaInteiro
//Objetivo: Ler e validar um n�mero inteiro
//Par�metros: T�tulo, n�mero m�nimo, n�mero m�ximo e mensagem de erro
//Retorno: N�mero inteiro v�lido
int leValidaInteiro(char titulo[], int numeroMinimo, int numeroMaximo, char msgDeErro[]){

	int numeroEscolhido;

	printf("%s\n",titulo);
	scanf("%i",&numeroEscolhido);
	while (numeroEscolhido<numeroMinimo || numeroEscolhido>numeroMaximo) {
	
		printf("%s\n",msgDeErro);
		scanf("%i",&numeroEscolhido);
	
	}

	return numeroEscolhido;

}

//validaIngresso
//Objetivo: Validar o valor do ingresso
//Par�metros: Valor m�nimo, mensagem de erro, valor escolhido
//Retorno: Valor v�lido do ingresso
float validaIngresso (float valorMinimo, char msgDeErro[], float valorEscolhido){


	while (valorEscolhido<valorMinimo) {
	
		printf("%s\n",msgDeErro);
		scanf("%f",&valorEscolhido);
	
	}

	return valorEscolhido;

}

//validaPorcentagemDesconto
//Objetivo: Validar a porcentagem de desconto
//Par�metros: Porcentagem m�nima, porcentagem  m�xima, mensagem de erro, porcentagem escolhida
//Retorno: Porcentagem v�lida
float validaPorcentagemDesconto (float porcentagemMinima, float porcentagemMaxima, char msgDeErro[], float porcentagemEscolhida){


	while (porcentagemEscolhida<porcentagemMinima || porcentagemEscolhida>porcentagemMaxima) {
	
		printf("%s\n",msgDeErro);
		scanf("%f",&porcentagemEscolhida);
	
	}

	return porcentagemEscolhida;

}

//calculaIngresso
//Objetivo: Calcular o valor com desconto do ingresso
//Par�metros: Valor normal do ingresso e desconto
//Retorno: Valor do ingresso com desconto
float calculaIngresso (float valorOrginalDoIngresso, float valorDoDesconto){


	return valorOrginalDoIngresso-(valorDoDesconto/100*valorOrginalDoIngresso);

}

//mapaDeAssentosDaTribuna
//Objetivo: Apresentar o mapa de assentos da tribuna
//Par�metros: Vetor de assentos e total de assentos
//Retorno: Nenhum
void mapaDeAssentosDaTribuna (char assentos[], int quantidadeTotalDeAssentos, char nomeDoEstadio[]){

	int contador;
	int contador2;
	contador2=1;

	//mapa dos assentos
	printf("ASSENTOS DA TRIBUNA DO EST�DIO %s\n", nomeDoEstadio);
	printf("QUANTIDADE DE ASSENTOS: %i\n",quantidadeTotalDeAssentos);
	printf("\n");
	printf("FILEIRA DE 1  AT� 10: \n" );
	printf(" 1    2    3    4    5    6    7    8    9    10\n");
	for (contador=0; contador<=quantidadeTotalDeAssentos-1; contador++) {
	switch (assentos[contador])
	{
	case 'D':
		textcolor(1);
		printf("|%c|  ",assentos[contador]);
		textcolor(7);
		break;
	case 'R':
		textcolor(2);
		printf("|%c|  ",assentos[contador]);
		textcolor(7);
		break;
	case 'C':
		textcolor(4);
		printf("|%c|  ",assentos[contador]);
		textcolor(7);
		break;
	
	}
		
		if (contador2%10==0) {
		
			printf("\n");
			printf("------------------------------------------------\n");
			if (contador<quantidadeTotalDeAssentos-10 && contador<100) {
			
				printf("FILEIRA DE %i  AT� %i :\n", contador2+1, contador2+10);
				printf(" %i   %i   %i   %i   %i   %i   %i   %i   %i   %i\n",contador2+1, contador2+2, contador2+3, contador2+4, contador2+5, contador2+6, contador2+7, contador2+8, contador2+9, contador2+10 );
			
			}
			
			if (contador<quantidadeTotalDeAssentos-10 && contador>100) {
			
				printf("FILEIRA DE %i  AT� %i :\n", contador2+1, contador2+10);
				printf("%i  %i  %i  %i  %i  %i  %i  %i  %i  %i\n",contador2+1, contador2+2, contador2+3, contador2+4, contador2+5, contador2+6, contador2+7, contador2+8, contador2+9, contador2+10 );
			
			}
			
		}
		contador2=contador2+1;
	
	}


}

//menuDoPrograma
//Objetivo: Apresentar as op��es do programa
//Par�metros: Nome do est�dio
//Retorno: Nenhum
void menuDoPrograma(char nomeDoEstadio[]){


	printf("________________________________________________________\n");
	printf(" COPA DO MUNDO 2018                                            \n");
	printf("\n");
	printf(" EST�DIO: %s                                            \n",nomeDoEstadio);
	printf("\n");
	printf("\n");
	printf("DIGITE ( M ) PARA VERIFICAR O MAPA DE ASSENTOS DA TRIBUNA \n");
	printf("DIGITE ( R ) PARA EFETUAR UMA RESERVA DE ASSENTO \n");
	printf("DIGITE ( C ) PARA REALIZAR UM CANCELAMENTO DE INGRESSO \n");
	printf("DIGITE ( E ) PARA EFETIVAR UMA CONFIRMA��O DE VENDA DE INGRESSO \n");
	printf("DIGITE ( A ) PARA APRESENTAR AS ESTAT�STICAS PARA ORGANIZADORES \n");
	printf("\n");
	printf("DIGITE ( F ) PARA FINALIZAR O PROGRAMA \n");
	printf("\n");
	printf("________________________________________________________\n");


}

//leValidaCaracterEntre6
//Objetivo: Ler e validar um caracter entre 6 caracteres
//Par�metros: caracterValido 1, caracterValido 2, caracterValido 3, caracterValido 4, caracterValido 5, caracterValido 6 e mensagem de erro
//Retorno: Caracter v�lido
char leValidaCaracterEntre6 (char caracterValido1, char caracterValido2, char caracterValido3, char caracterValido4, char caracterValido5, char caracterValido6, char msgDeErro[]){

	char caracterEscolhido;
	caracterValido1=toupper(caracterValido1);
	caracterValido2=toupper(caracterValido2);
	caracterValido3=toupper(caracterValido3);
	caracterValido4=toupper(caracterValido4);
	caracterValido5=toupper(caracterValido5);
	caracterValido6=toupper(caracterValido6);

	caracterEscolhido=getch();
	caracterEscolhido=toupper(caracterEscolhido);
	while (caracterEscolhido!=caracterValido1 && caracterEscolhido!=caracterValido2 && caracterEscolhido!=caracterValido3 && caracterEscolhido!=caracterValido4 && caracterEscolhido!=caracterValido5 && caracterEscolhido!=caracterValido6) {
	
		printf("%s\n",msgDeErro);
		caracterEscolhido=getch();
		caracterEscolhido=toupper(caracterEscolhido);
	
	}

	return caracterEscolhido;

}

//leValidaCaracter
//Objetivo: Ler e validar um caracter
//Par�metros: titulo, caracter v�lido e mensagem de erro
//Retorno: Caracter v�lido
char leValidaCaracter(char titulo[] ,char caracterValido, char msgDeErro[]){

	char caracterEscolhido;
	caracterValido=toupper(caracterValido);

	printf("%s\n",titulo);
	caracterEscolhido=getch();
	caracterEscolhido=toupper(caracterEscolhido);
	while (caracterEscolhido!=caracterValido) {
	
		printf("%s\n",msgDeErro);
		caracterEscolhido=getch();
		caracterEscolhido=toupper(caracterEscolhido);
	
	}

	return caracterEscolhido;

}

//validaSexo
//Objetivo: Validar o sexo
//Par�metros: sexo 1, sexo 2, sexo escolhido e mensagem de erro
//Retorno: Sexo v�lido
char validaSexo (char sexo1, char sexo2, char sexoEscolhido, char msgDeErro[]){

	sexo1=toupper(sexo1);
	sexo2=toupper(sexo2);
	sexoEscolhido=toupper(sexoEscolhido);

	while (sexoEscolhido!=sexo1 && sexoEscolhido!=sexo2) {
	
		printf("%s\n",msgDeErro);
		sexoEscolhido=getch();
		sexoEscolhido=toupper(sexoEscolhido);
	
	}

	return sexoEscolhido;

}

//leValidaCaracterEntre2
//Objetivo: Ler e validar um caracter entre 2 caracteres
//Par�metros: titulo, caracter v�lido e mensagem de erro
//Retorno: Caracter v�lido
char leValidaCaracterEntre2(char titulo[] ,char caracterValido1, char caracterValido2, char msgDeErro[]){

	char caracterEscolhido;
	caracterValido1=toupper(caracterValido1);
	caracterValido2=toupper(caracterValido2);

	printf("%s\n",titulo);
	caracterEscolhido=getch();
	caracterEscolhido=toupper(caracterEscolhido);
	while (caracterEscolhido!=caracterValido1 && caracterEscolhido!=caracterValido2) {
	
		printf("%s\n",msgDeErro);
		caracterEscolhido=getch();
		caracterEscolhido=toupper(caracterEscolhido);
	
	}

	return caracterEscolhido;

}

//apresentaInformacoesDaReserva
//Objetivo: Apresentar o valor do ingresso
//Par�metros: Valor do ingresso, percentual para o sexo masculino, percentual para o sexo feminino e o sexo da pessoa
//Retorno: Nenhum
void apresentaInformacoesDaReserva (float valorDoIngresso, float percentualParaOSexoMasculino, float percentualParaOSexoFeminino, char sexoDaPessoa){


	printf("ASSENTO RESERVADO COM SUCESSO.\n");
	if (sexoDaPessoa=='M') {
	
		printf("VALOR DO INGRESSO: R$%2.f\n",calculaIngresso(valorDoIngresso, percentualParaOSexoMasculino));
	
	}else{
	
		printf("VALOR DO INGRESSO: R$%2.f\n",calculaIngresso(valorDoIngresso, percentualParaOSexoFeminino));
	
	}


}
