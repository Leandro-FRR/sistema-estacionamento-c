#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>
#include <unistd.h>
#include <iostream>

void programa();
void tinicial();
void login();

void login(){			
		char uadm[100], uaux[100], saux[10], opc;
		char sadm[10] = "123456";	
		
		strcpy(uadm,"batata");
		    system("cls");
			printf("-> USUÁRIO: ");
			scanf("%s",&uaux);
			printf("\n-> SENHA DO ADMINISTRADOR: ");
			scanf ("%s", &saux);
		if ((strncmp(uadm,uaux, 100) != 0) || strncmp(sadm,saux, 10) != 0){

			
		do {
				printf("\n----------------ATENCÃO! USUÁRIO OU SENHA INVALIDOS.---------------- \n");
				printf("\n\n-> PARA VOLTAR DIGITE: 0\n");
				printf("-> PARA TENTAR NOVAMENTE DIGITE: 1\n");
				scanf ("%s",&opc);
				system("cls");
			switch (opc){
			
				case '0':
					opc = 2;
					tinicial();
				break;
					
				case '1':
					opc = 2;
					login();
				break;

				default:
					printf("Opcao inválida!\n");
            break;
				system("cls");
		}
	} while(opc != 2);
	} 
	
		else {
			programa();
}
}

void tinicial(){
	char opc, fim;
	do {	
	system("cls");
	printf("\n-----------------MENU INICIAL-----------------\n");
	printf("FAZER LOGIN: 1\n");
	printf("SAIR DO PROGRAMA: 2\n");
	scanf("%s", &opc);
	
	if(opc != '1' && opc != '2'){
		system("cls");
		printf("-----------------POR FAVOR, DIGITE ALGUMA DAS OPÇÕES APRESENTADAS!-----------------\n\n");	
		Sleep (2000);
		system("cls");	
		tinicial();
	}
	else{
	
	switch(opc){
	
	case '1':
		login(); 
		break;
	case '2':
		printf("\n\nDeseja sair?\n\nSim - 1\nNão - 2\n");
		scanf("%s",&fim);
		if(fim == '1'){
		system("cls");
		printf("Finalizando...\n\n");
		Sleep(2000); 
		opc = 1;
		break;
		} else{
		break;
		}
		}
	}
	}while(opc != 1);
}
  typedef struct
	{
	char nome[50];
	char placa[10];
	time_t entrada;
	time_t saida;
	float pagamento;
	} rveiculo;
	
 rveiculo veiculo[101];
	           
	           
 	 void relatorio (int a, time_t b, float c){
	  	    time(&b);
		   	FILE *arq;
			arq = fopen("Relatório.txt", "a");
			fprintf (arq, "\n\n\n\n\n");
			fprintf(arq, ctime(&b));
			for (a=0; a<101; a++){
            if (veiculo[a].pagamento > 0){
			fprintf(arq, "\nNome do veículo: %s", veiculo[a].nome);
        	fprintf(arq, "\nPlaca: %s", veiculo[a].placa);
        	fprintf(arq, "\nEntrada: ");
        	fprintf(arq, ctime(&veiculo[a].entrada));
        	fprintf(arq, "Saida: ");
        	fprintf(arq, ctime(&veiculo[a].saida));
        	fprintf(arq, "Valor pago: %0.2f\n\n\n",veiculo[a].pagamento);
			}
			c = c + veiculo[a].pagamento;
			}
			fprintf(arq, "Receita total do dia: %0.2f\n\n\n",c);
			fclose (arq);}
			
	void dadosentrada(char* a, char* b){
		printf("Modelo do veículo: ");
 	 	scanf("%s", a);
  		printf("Placa: ");
 		scanf("%s", b);
  		return;
	}      
	              
	void infoentrada(char* a, char* b, time_t c){
		printf("\nNome do veículo: %s", a);
        printf("\nPlaca: %s", b);
        printf("\n\nEntrada: ");
        printf(ctime(&c));
        return;
	}
	    
	void pagamentotipo1(int a, double b, float c){
		a = b / 60;
		printf("\nPermaneceu no estacionamento por %d minutos",a);
		printf("\nvalor a pagar: R$");
		printf("%0.2f\n\n\n",c);
		return;
	}

	float pagamentotipo2(float a, double b, int c, int d, float e, float f, float g, int h, int i, int j, int k){
		a = b - k;
		d = a / c;
		e = d * f;
		h = b / c;
		i = h / c;
		j = h % c;
		printf("\nPermaneceu no estacionamento por %d horas e %d minutos",i, j);
		return e + g;
	}

void programa(){
char placav[10];
	char opcao, porte, fim;
	int i, i2, minutosex, minutos, horaT, minR, minT;
	int vp = 0;
	int horaS = 3600;
	int min = 60;
	int vm = 0;
	int vg = 0;
	int m = 0;
	float lucro = 0.00;
	float fixvp = 5.00;
	float fixvm = 7.00;
	float fixvg = 10.00;
	float fixm = 8.00; 
	float taxa = 0.05;
	float extra, valorf, valorex;
	double difference;
	time_t dia;
do { 
	system("cls");
        printf("1 - Inserir Entrada\n2 - Inserir Saída\n3 - Relatório\n4 - Sair\n");
        scanf("%s",&opcao);
        switch(opcao) {
        case '1': {
        	
        do {
        	system("cls");
        	printf("Porte do veículo a entrar:\nPequeno - 1\nMédio - 2\nGrande - 3\nMoto - 4\nRetornar - 5\n");
        	scanf("%s",&porte);
        	switch(porte) {
        	case '1': {
        		if (vp < 25)
        	{
			system("cls");
			dadosentrada(veiculo[i].nome, veiculo[i].placa);
			time(&veiculo[i].entrada);
  			vp++;
  			i++;
  			porte = 5;
			break;} 
			  	else { system("cls");
				  printf("Vagas de pequeno porte lotadas");
			  	Sleep(2000);
				break;}
				break;
				}
				
			case '2': {
				if (vm < 25)
        	{
			system("cls");
			dadosentrada(veiculo[i].nome, veiculo[i].placa);
  			time(&veiculo[i].entrada);
  			vm++;
  			i++;
  			porte = 5;
			break;}
				else { system("cls");
				printf("Vagas de médio porte lotadas");
				Sleep(2000);
				break;}
				break;
			}
        	
        	case '3': {
        		if (vg < 25)
        	{
			system("cls");
			dadosentrada(veiculo[i].nome, veiculo[i].placa);
  			time(&veiculo[i].entrada);
  			vg++;
  			i++;
  			porte = 5;
			break;}
				else { system("cls");
				printf("Vagas de grande porte lotadas");
				Sleep(2000);
				break;}
				break;
        	}
        	
        	case '4': {
        		if (m < 25)
        	{
			system("cls");
			dadosentrada(veiculo[i].nome, veiculo[i].placa);
  			time(&veiculo[i].entrada);
  			m++;
  			i++;
  			porte = 5;
			break;} 
				else { printf("Vagas de motos lotadas");
				Sleep(2000);
				break;}
				 break;
			}
						
			case '5': {
			system("cls");
			printf ("Retornando...");
			Sleep(2000);
			porte = 5;
			break;
}
			
				
			default:
			system("cls");
            printf("Opcao inválida!\n");
            Sleep(2000);
            system("cls");
            break;
            
			}
		} while(porte != 5);
		break;
}
            
        case '2': {
        	
        	do{
		
        	system("cls");
        	printf("Porte do veículo a sair:\nPequeno - 1\nMédio - 2\nGrande - 3\nMoto - 4\nRetornar - 5\n");
        	scanf("%s",&porte);
        	
        	switch(porte) {
        		
        	case '1': {
        		if (vp > 0)
        	{
        	system("cls");
        	printf("Informe a placa do veículo: ");
        	scanf("%s", &placav);
        	for (i=0; i<101; i++)
        	if(strncmp(veiculo[i].placa, placav, 7) == 0)
		{
			system("cls");
        	infoentrada(veiculo[i].nome, veiculo[i].placa, veiculo[i].entrada);
  			time(&veiculo[i].saida);
  			printf("Saida: ");
        	printf(ctime(&veiculo[i].saida));
  			vp--;
  			difference = difftime(veiculo[i].saida, veiculo[i].entrada);
  			
  			if(difference < 3601) 
  			{
  			  pagamentotipo1(minutos, difference, fixvp);
  			  veiculo[i].pagamento = fixvp;
			  } else { 
			  valorf = pagamentotipo2(extra, difference, min, minutosex, valorex, taxa, fixvp, minT, horaT, minR, horaS);
			  printf("\nvalor a pagar: R$");
			  printf("%0.2f\n\n\n",valorf);
			  veiculo[i].pagamento = valorf;
			  }
			  
  			system("pause");
  			porte = 5;
			  break;}
  				if(strncmp(veiculo[i].placa,placav,7) > 0)
  			{
			  	system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  }
			if(strncmp(veiculo[i].placa,placav,7) < 0)
  			{
  				system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  } 
			  break;}  
			  else { system("cls");
			  printf("Vagas de pequeno porte vazias");
			  Sleep(2000);
				break;}
        	break;
			}
			
        	case '2': {
        		if (vm > 0)
        	{
        	system("cls");
        	printf("Informe a placa do veículo: ");
        	scanf("%s", &placav);
        	for (i=0; i<101; i++)
        	if(strncmp(veiculo[i].placa, placav, 7) == 0)
		{
			system("cls");
        	infoentrada(veiculo[i].nome, veiculo[i].placa, veiculo[i].entrada);
  			time(&veiculo[i].saida);
  			printf("Saida: ");
        	printf(ctime(&veiculo[i].saida));
  			vm--;
  			difference = difftime(veiculo[i].saida, veiculo[i].entrada);
  			
  			if(difference < 3601) 
  			{
  			  pagamentotipo1(minutos, difference, fixvm);
			  veiculo[i].pagamento = fixvm;
			  
			  } else { 
			  valorf = pagamentotipo2(extra, difference, min, minutosex, valorex, taxa, fixvm, minT, horaT, minR, horaS);
			  printf("\nvalor a pagar: R$");
			  printf("%0.2f\n\n\n",valorf);
			  veiculo[i].pagamento = valorf;
			  };
  		
  			system("pause");
  			porte = 5;
			  break;}
			  	if(strncmp(veiculo[i].placa,placav,7) > 0)
  			{
			  	system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  }
			if(strncmp(veiculo[i].placa,placav,7) < 0)
  			{
  				system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  }
			  break;}  
			  else { system("cls");
			  printf("Vagas de medio porte vazias");
			  Sleep(2000);
				break;}
        	break;
			}
			
        	case '3': {
        		if (vg > 0)
        	{
        	system("cls");
        	printf("Informe a placa do veículo: ");
        	scanf("%s", &placav);
        	for (i=0; i<101; i++)
        	if(strncmp(veiculo[i].placa, placav, 7) == 0)
		{
			system("cls");
        	infoentrada(veiculo[i].nome, veiculo[i].placa, veiculo[i].entrada);
  			time(&veiculo[i].saida);
  			printf("Saida: ");
        	printf(ctime(&veiculo[i].saida));
  			vg--;
  			difference = difftime(veiculo[i].saida, veiculo[i].entrada);
  			
  			if(difference < 3601) 
  			{
  			  pagamentotipo1(minutos, difference, fixvg);
			  veiculo[i].pagamento = fixvg;
			  } else { 
			  valorf = pagamentotipo2(extra, difference, min, minutosex, valorex, taxa, fixvg, minT, horaT, minR, horaS);
			  printf("\nvalor a pagar: R$");
			  printf("%0.2f\n\n\n",valorf);
			  veiculo[i].pagamento = valorf;
			  }
  			system("pause");
  			porte = 5;
			  break;}
			  	if(strncmp(veiculo[i].placa,placav,7) > 0)
  			{
			  	system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  }
			if(strncmp(veiculo[i].placa,placav,7) < 0)
  			{
  				system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  }
			  break;}  
			  else { system("cls");
			  printf("Vagas de grande porte vazias");
			  Sleep(2000);
				break;}

        	break;
			}
        	case '4':{
        		if (m > 0)
        	{
        	system("cls");
        	printf("informe a placa do veículo: ");
        	scanf("%s", &placav);
        	for (i=0; i<101; i++)
        	if(strncmp(veiculo[i].placa, placav, 7) == 0)
		{
			system("cls");
        	infoentrada(veiculo[i].nome, veiculo[i].placa, veiculo[i].entrada);
  			time(&veiculo[i].saida);
  			printf("Saida: ");
        	printf(ctime(&veiculo[i].saida));
  			m--;
  			difference = difftime(veiculo[i].saida, veiculo[i].entrada);
  			
  			if(difference < 3601) 
  			{
  			  pagamentotipo1(minutos, difference, fixm);
			  veiculo[i].pagamento = fixm;
			  } else { 
			  valorf = pagamentotipo2(extra, difference, min, minutosex, valorex, taxa, fixm, minT, horaT, minR, horaS);
			  printf("\nvalor a pagar: R$");
			  printf("%0.2f\n\n\n",valorf);
			  veiculo[i].pagamento = valorf;
			  };
  			system("pause");
  			porte = 5;
			  break;}
  				if(strncmp(veiculo[i].placa,placav,7) > 0)
  			{
			  	system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  }
			if(strncmp(veiculo[i].placa,placav,7) < 0)
  			{
  				system("cls");
  				printf("Veículo nao encontrado");
  				Sleep(2000);
			  }
			  break;}  
			  else { system("cls");
			  printf("Vagas de motos vazias");
			  Sleep(2000);
			  
				break;}
  			break;
			}
			
  			case '5': {
			system("cls");
			printf ("Retornando...");
			Sleep(2000);
			porte = 5;
			break;
		}
			default:
			system("cls");
            printf("Opcao invalida!\n");
            Sleep(2000);
            system("cls");
            break;
			};
		} while(porte != 5);
		break;
        }
        case '3': {
        	system("cls");
        	lucro = 0;
			i++;
			i2 = i;
            for (i2=0; i2<101; i2++){
            if (veiculo[i2].pagamento > 0){
           	printf("\nNome do veículo: %s", veiculo[i2].nome);
        	printf("\nPlaca: %s", veiculo[i2].placa);
        	printf("\nEntrada: ");
        	printf(ctime(&veiculo[i2].entrada));
        	printf("Saida: ");
        	printf(ctime(&veiculo[i2].saida));
        	printf("Valor pago: %0.2f\n\n\n",veiculo[i2].pagamento);
        };
        	lucro = lucro + veiculo[i2].pagamento;
			}
			printf("Receita total do dia: %0.2f\n\n\n",lucro);
            system("pause");
            break;
		}
		case '4': {
			relatorio(i2, dia, lucro);
			break;}
        case '5':{
        	printf("\n\nDeseja sair? O relatório estará registrado até que encerre o programa.\n\nSim - 1\nNão - 2\n");
			scanf("%s",&fim);
			if(fim == '1'){
			system("cls");
			printf("Retornando...\n\n");
			Sleep(2000); 
			opcao = 4;
		break;
		} else{
		break;
		}
        }
        default:
        	system("cls");
            printf("Opcao inválida!\n");
            Sleep(2000);
            system("cls");
        }
    } while(opcao != 4);	

}

int main(void) { 
	setlocale(LC_ALL,"portuguese");
tinicial();

	

return (0);
}
