#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


char Cripto[100];
char desCripto[200];

char descriptando(int indice1, char* mensagem3){
	char letraretorna;
	char alfabetonormal[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char criptoAlfabeto[26] = {"ZYXWVUTSRQPONMLKJIHGFEDCBA"};
	char numeros[10] = {"0123456789"};
	char numerocripto[10] = {".,;*/@!():"};
	char espaco[1] = {" "};
	char criptoespaco[1] = {"%"};
	int i;
	int n;
	
	char mensagemU = toupper(mensagem3[indice1]);
	for(i = 0;i<=25;i++){
		fflush(stdin);
		if(mensagemU == criptoAlfabeto[i]){
			letraretorna = alfabetonormal[i];
			fflush(stdin);
		}
		else if(mensagemU == criptoespaco[0]){
			letraretorna = espaco[0];
		}
		else {
			for(n=0;n<=9;n++){
				if(mensagemU == numerocripto[n]){
					fflush(stdin);
					letraretorna = numeros[n];
				}
			}
		}
	}
	fflush(stdin);
	return letraretorna;
}


char* desCripto1(){
	char mensagem[100];
	char cripto3[100];
	int arraymsg = 0;
	system("cls");
	printf("Digite a mensagem que voce deseja descriptografar: ");
	gets(mensagem);
	do{
	fflush(stdin);	
	cripto3[arraymsg] = descriptando(arraymsg, mensagem);
	fflush(stdin);
	printf("%c", cripto3[arraymsg]);
	arraymsg++;
	}while(arraymsg<=99);
	
	
	
	return cripto3;
}

char criptando(int indice, char* mensagem2){
	char letraretorna;
	char alfabetonormal[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char criptoAlfabeto[26] = {"ZYXWVUTSRQPONMLKJIHGFEDCBA"};
	char numeros[10] = {"0123456789"};
	char numerocripto[10] = {".,;*/@!():"};
	char espaco[1] = {" "};
	char criptoespaco[1] = {"%"};
	int i;
	int n;
	
	char mensagemU = toupper(mensagem2[indice]);
	for(i = 0;i<=25;i++){
		fflush(stdin);
		if(mensagemU == alfabetonormal[i]){
			letraretorna = criptoAlfabeto[i];
			fflush(stdin);
		}
		else if(mensagemU == espaco[0]){
			letraretorna = criptoespaco[0];
		}
		else {
			for(n=0;n<=9;n++){
				if(mensagemU == numeros[n]){
					fflush(stdin);
					letraretorna = numerocripto[n];
				}
			}
		}
	}
	fflush(stdin);
	return letraretorna;
}


char* Cripto1(){
	char mensagem[100];
	char cripto2[100];
	int arraymsg = 0;
	system("cls");
	printf("Digite a mensagem que voce deseja criptografar: ");
	gets(mensagem);
	do{
	fflush(stdin);	
	cripto2[arraymsg] = criptando(arraymsg, mensagem);
	fflush(stdin);
	printf("%c", cripto2[arraymsg]);
	arraymsg++;
	}while(arraymsg<=99);
	
	
	
	return cripto2;
}

void main() {
	int escolha;
	printf("Bem-Vindo ao CrIpTo2.0!");
	printf("\nPressione:\n1-Criptografar\n2-Descriptografar\nEscolha: ");
	scanf("%d", &escolha);
	fflush(stdin);
	if(escolha == 1){
	char* Cripto = Cripto1();
	printf("\n%s", Cripto);
	}
	else if(escolha == 2){
		char* desCripto = desCripto1();
	}

	
}
