#include <stdio.h>
#include <string.h>

int main(){
	int N, i, j;
	char mensagem[52], mensagemOculta[52];

	scanf("%d ", &N);

	while(N>0){

		fgets(mensagem, sizeof(mensagem), stdin);

		j = 0;
		
		for(i = 0; i < strlen(mensagem)-1; i++){

			if(mensagem[i] != ' ' && (mensagem[i-1] == ' ' || !i))
				mensagemOculta[j++] = mensagem[i]; 
		}

		mensagemOculta[j] = '\0';

		printf("%s\n", mensagemOculta);
		N--;
	}

	return 0;
}
