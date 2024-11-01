#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

float fatorial(float valor){
	float s;
	float totalfatorial = 1;
	 
	for(s = 1; s <= valor; s++){
		if(s != valor){
			printf("%.0f * ", s);
		}else{
			printf("%.0f\n\n", s);
		}
		totalfatorial = totalfatorial * s;
	}
	return totalfatorial;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int modulo, negativo, numeros, calculadora, i, elevar, circulo;
	float x, y, z, a, b, c, h, e, f, delta, vai1, vai2, raiz, resultado;
	int d = 0;
	char alfa[27]{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int numero;
	int g = 10;
	
	system("color 0c");
	
	printf("Você deseja ultilizar calculadora simples avançada ou cientifica?\n(1 = simples/2 = avançada/3 = cientifica)\nDigite aqui: ");
	scanf("%i", &calculadora);
	
	switch(calculadora){
		
		case 1: //calculadora simples
		
		do {
	
	
	printf("\t\t\t\t\t\tCalculadora em C");
	printf("\n\t\t\t\tAceita números até 4 casas depois da vírgula\n");
	
	
	printf("\ndigite 1 para soma\ndigite 2 para subtração \ndigite 3 para divisão\ndigite 4 para multiplicação\nDigite aqui: ");
	scanf("%i", &modulo);
	
	//Adição
	if(modulo == 1){
	printf("\n\t\t\t\t\t\tSoma");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	resultado = x + y;
	printf("\n\t\t\t%.4f + %.4f = %.6f", x, y, resultado);
   // Fim adição
   
   }else{
   	
   	   //Subtração
	   if(modulo == 2){
	   		printf("\n\t\t\t\t\t\tSubtração");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	if(x < y){
		printf("\nSeu número será negativo tem certeza?\n(1 = sim/2 = inverter números)\ndigite aqui: ");
		scanf("%i", &negativo);
		
	if(negativo == 1){
		resultado = x - y;
		printf("\n\t\t\t%.4f - %.4f = %.6f", x, y, resultado);
	}else{
		resultado = y - x;
			printf("\n\t\t\t\tnúmeros invertidos");
		printf("\n\t\t\t\t%.4f - %.4f = %.6f", y, x, resultado);
	}
	   }else{
	   		resultado = x - y;
		printf("\n\t\t\t%.4f - %.4f = %.6f", x, y, resultado);
	   }
	   //Fim subtração
	   
   }else{
   	
   	//Divisão
   	if(modulo == 3){
   			printf("\n\t\t\t\t\t\tDivisão");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	if(x < y){
			if(x < y){
		printf("\nSeu número será negativo tem certeza?\n(1 = sim/2 = iverter números)\ndigite aqui: ");
		scanf("%i", &negativo);
		
	if(negativo == 1){
		resultado = x / y;
		printf("\n\t\t\t\t%.4f/%.4f = %.6f", x, y, resultado);
		}else{
			resultado = y / x;
				printf("\n\t\t\t\tnúmeros invertidos");
				printf("\n\t\t\t\t%.4f/%.4f = %.6f", y, x, resultado);
		}
   	 }
   }else{
   	resultado = x / y;
   		printf("\n\t\t\t\t%.4f/%.4f = %.6f", x, y, resultado);
   }
   //Fim divisão
   
 }else{
 	
 	//Multiplicação
 	if(modulo == 4){
 		printf("\n\t\t\t\t\t\tMultiplicação");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	resultado = x * y;
	printf("\n\t\t\t\t%.4f * %.4f = %.6f", x, y, resultado);
	//Fim multiplicação
 
 	}
	 //else para caso não digite 1, 2, 3 ou 4 para dizer o modulo
	 else{
 		
 		printf("Me desculpe você digitou outro número além dos referidos.\npor favor aperte qualquer tecla e tente novamente");
 	}
 }

}
}
printf("\n\n");
d++;
}while(d < 10);
printf("Você ja ultilizou demais a calculadora.\nVocê deve reabri-la\nPressione qualquer tecla\n\n\n\n\n\n\n\n");
		
		break;
	
	case 2: //calculadora avançada
	
	do {
	
	
	printf("\t\t\t\t\t\tCalculadora em C\n\t\t\t\t\tSem auxilio de número negativo");
	printf("\n\t\t\t\tAceita números até 4 casas depois da virgula\n");
	
	printf("\ndigite a quantidade de números que deseja calcular.\nApenas com 1 digito é possivel calcular radiciação, potenciação, porcentagem e fatorial. \nobs:(Minimo = 1/Maximo = 6)\nDigite aqui: ");
	scanf("%i", &numeros);
	
	switch(numeros){
		
		case 1: //potenciação e radiciação
		
		printf("digite 1 para potenciação\ndigite 2 para radiciação\ndigite 3 para porcentagem\ndigite 4 para fatorial\ndigite aqui: ");
		scanf("%i", &modulo);
			//Potenciação
 		if(modulo == 1){
	printf("\n\t\t\t\t\t\televação");
	printf("\nDigite o número: ");
	scanf("%f", &x);
  printf("Digite a qual potência que você quer elevar\ndigite aqui: ");
  scanf("%i", &elevar);
	
resultado = pow(x,elevar);
printf("%.4f elevado a %.4f =  %.6f", x, elevar, resultado);

		//Fim potenciação
		
		
	 //else para caso não digite 1, 2, 3 4 ou 5 para dizer o modulo
	 }else{
	
	if(modulo == 2){
	printf("\n\t\t\t\t\t\tradiciação");
	printf("\nDigite o número: ");
	scanf("%f", &x);
	resultado = sqrt(x);
	printf("\n\t\t\t\tRaiz quadrada de %.4f = %.10f", x, resultado);
	 
}else{
	
	if(modulo == 3){
		printf("\n\t\t\t\t\t\tPorcentagem");
	printf("\nDigite o número: ");
	scanf("%f", &x);
	printf("Obs:(Sem o simbolo)\ndigite a porcentagem: ");
	scanf("%f", &y);
	resultado = x * (y/100);
	printf("\n\t\t\t\t%.2f porcento de %.4f = %.4f", y, x, resultado);
	
	}else{
		
			if(modulo == 4){
				
					printf("\n\t\t\t\t\t\tFatorial");
	printf("\nDigite o número: ");
	scanf("%f", &x);
	resultado = fatorial(x);
	printf("\t\t\t\t%.0f fatorial = %.0f", x, resultado);
				}else{
				
		printf("O número que você digitou não foi encontrado, verifique se não foi um erro e tente novamente");
	}
}

}
}
   break;
		
		case 2: //2 digitos
	
	printf("\ndigite 1 para soma\ndigite 2 para subtração \ndigite 3 para divisão\ndigite 4 para multiplicação\nDigite aqui: ");
	scanf("%i", &modulo);
	
	//Adição
	if(modulo == 1){
	printf("\n\t\t\t\t\t\tSoma");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	resultado = x + y;
	printf("\n\t\t\t%.4f + %.4f = %.6f", x, y, resultado);
   // Fim adição
   
   }else{
   	
   	   //Subtração
	   if(modulo == 2){
	   		printf("\n\t\t\t\t\t\tSubtração");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	   		resultado = x - y;
		printf("\n\t\t\t%.4f - %.4f = %.6f", x, y, resultado);
	   //Fim subtração
	   
   }else{
   	
   	//Divisão
   	if(modulo == 3){
   			printf("\n\t\t\t\t\t\tDivisão");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
   	resultado = x / y;
   		printf("\n\t\t\t\t%.4f/%.4f = %.6f", x, y, resultado);
   
   //Fim divisão
   
 }else{
 	
 	//Multiplicação
 	if(modulo == 4){
 		printf("\n\t\t\t\t\t\tMultiplicação");
		printf("\nDigite o primeiro número: ");
		scanf("%f", &x);
		printf("Digite o segundo número: ");
		scanf("%f", &y);
		resultado = x * y;
		printf("\n\t\t\t\t%.4f * %.4f = %.6f", x, y, resultado);
	//Fim multiplicação
 
 	}else{
 		
 		printf("Me desculpe você digitou outro número além dos referidos.\npor favor aperte qualquer tecla e tente novamente");
 	}
 }
}
}

     break;

case 3: //3 digitos

	printf("\ndigite 1 para soma\ndigite 2 para subtração \ndigite 3 para divisão\ndigite 4 para multiplicação\nDigite aqui: ");
	scanf("%i", &modulo);
	
	//Adição
	if(modulo == 1){
	printf("\n\t\t\t\t\t\tSoma");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
		printf("Digite o terceiro número: ");
	scanf("%f", &z);
	resultado = x + y + z;
	printf("\n\t\t\t%.4f + %.4f + %.4f = %.6f", x, y, z, resultado);
   // Fim adição
   
   }else{
   	
   	   //Subtração
	   if(modulo == 2){
	   		printf("\n\t\t\t\t\t\tSubtração");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	   		resultado = x - y - z;
		printf("\n\t\t\t%.4f - %.4f - %.4f = %.6f", x, y, z, resultado);
	   //Fim subtração
	   
   }else{
   	
   	//Divisão
   	if(modulo == 3){
   			printf("\n\t\t\t\t\t\tDivisão");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
   	resultado = x / y / z;
   		printf("\n\t\t\t\t%.4f/%.4f/%.4f = %.6f", x, y, z, resultado);
   //Fim divisão
   
 }else{
 	
 	//Multiplicação
 	if(modulo == 4){
 		printf("\n\t\t\t\t\t\tMultiplicação");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	resultado = x * y * z;
	printf("\n\t\t\t\t%.4f * %.4f * %.4f = %.6f", x, y, z, resultado);
	//Fim multiplicação
 
 	}
	 //else para caso não digite 1, 2, 3 ou 4 para dizer o modulo
	 else{
 		
 		printf("Me desculpe você digitou outro número além dos referidos.\npor favor aperte qualquer tecla e tente novamente");
 	}
 }
	
}
} break;

case 4: //4 digitos
	
		printf("\ndigite 1 para soma\ndigite 2 para subtração \ndigite 3 para divisão\ndigite 4 para multiplicação\nDigite aqui: ");
	scanf("%i", &modulo);
	
	//Adição
	if(modulo == 1){
	printf("\n\t\t\t\t\t\tSoma");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
		printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	resultado = x + y + z + a;
	printf("\n\t\t\t%.4f + %.4f + %.4f + %.4f = %.6f", x, y, z, a, resultado);
   // Fim adição
   
   }else{
   	
   	   //Subtração
	   if(modulo == 2){
	   		printf("\n\t\t\t\t\t\tSubtração");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	   		resultado = x - y - z - a;
		printf("\n\t\t\t%.4f - %.4f - %.4f - %.4f = %.6f", x, y, z, a, resultado);
	   //Fim subtração
	   
   }else{
   	
   	//Divisão
   	if(modulo == 3){
   			printf("\n\t\t\t\t\t\tDivisão");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
   	resultado = x / y / z / a;
   		printf("\n\t\t\t\t%.4f/%.4f/%.4f/%.4f = %.6f", x, y, z, a, resultado);
   //Fim divisão
   
 }else{
 	
 	//Multiplicação
 	if(modulo == 4){
 		printf("\n\t\t\t\t\t\tMultiplicação");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	resultado = x * y * z * a;
	printf("\n\t\t\t\t%.4f * %.4f * %.4f * %.4f = %.6f", x, y, z, a, resultado);
	//Fim multiplicação
 
 	}
	 //else para caso não digite 1, 2, 3 ou 4 para dizer o modulo
	 else{
 		
 		printf("Me desculpe você digitou outro número além dos referidos.\npor favor aperte qualquer tecla e tente novamente");
 	}
 }
	
}
}
	
	break;
	
	case 5: //5 digitos
		
			printf("\ndigite 1 para soma\ndigite 2 para subtração \ndigite 3 para divisão\ndigite 4 para multiplicação\nDigite aqui: ");
	scanf("%i", &modulo);
	
	//Adição
	if(modulo == 1){
	printf("\n\t\t\t\t\t\tSoma");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
		printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
		printf("Digite o quinto número: ");
	scanf("%f", &b);
	resultado = x + y + z + a + b;
	printf("\n\t\t\t%.4f + %.4f + %.4f + %.4f + %.4f = %.6f", x, y, z, a, b, resultado);
   // Fim adição
   
   }else{
   	
   	   //Subtração
	   if(modulo == 2){
	   		printf("\n\t\t\t\t\t\tSubtração");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	printf("Digite o quinto número: ");
	scanf("%f", &b);
	   		resultado = x - y - z - a - b;
		printf("\n\t\t\t%.4f - %.4f - %.4f - %.4f - %.4f = %.6f", x, y, z, a, b, resultado);
	   //Fim subtração
	   
   }else{
   	
   	//Divisão
   	if(modulo == 3){
   			printf("\n\t\t\t\t\t\tDivisão");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	printf("Digite o quinto número: ");
	scanf("%f", &b);
   	resultado = x / y / z / a / b;
   		printf("\n\t\t\t\t%.4f/%.4f/%.4f/%.4f/%.4f = %.6f", x, y, z, a, b, resultado);
   //Fim divisão
   
 }else{
 	
 	//Multiplicação
 	if(modulo == 4){
 		printf("\n\t\t\t\t\t\tMultiplicação");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	printf("Digite o quinto número: ");
	scanf("%f", &b);
	resultado = x * y * z * a * b;
	printf("\n\t\t\t\t%.4f * %.4f * %.4f * %.4f * %.4f = %.6f", x, y, z, a, b, resultado);
	//Fim multiplicação
 
 	}
	 //else para caso não digite 1, 2, 3 ou 4 para dizer o modulo
	 else{
 		
 		printf("Me desculpe você digitou outro número além dos referidos.\npor favor aperte qualquer tecla e tente novamente");
 	}
 }
	
}
}

		
		break; //fim 5 digitos
		
		case 6: //6d
			
					printf("\ndigite 1 para soma\ndigite 2 para subtração \ndigite 3 para divisão\ndigite 4 para multiplicação\nDigite aqui: ");
	scanf("%i", &modulo);
	
	//Adição
	if(modulo == 1){
	printf("\n\t\t\t\t\t\tSoma");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
		printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
		printf("Digite o quinto número: ");
	scanf("%f", &b);
		printf("Digite o sexto número: ");
	scanf("%f", &c);
	resultado = x + y + z + a + b + c;
	printf("\n\t\t\t%.4f + %.4f + %.4f + %.4f + %.4f + %.4f = %.6f", x, y, z, a, b, c, resultado);
   // Fim adição
   
   }else{
   	
   	   //Subtração
	   if(modulo == 2){
	   		printf("\n\t\t\t\t\t\tSubtração");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	printf("Digite o quinto número: ");
	scanf("%f", &b);
		printf("Digite o sexto número: ");
	scanf("%f", &c);
	   		resultado = x - y - z - a - b - c;
		printf("\n\t\t\t%.4f - %.4f - %.4f - %.4f - %.4f - %.4f = %.6f", x, y, z, a, b, c, resultado);
	   //Fim subtração
	   
   }else{
   	
   	//Divisão
   	if(modulo == 3){
   			printf("\n\t\t\t\t\t\tDivisão");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	printf("Digite o quinto número: ");
	scanf("%f", &b);
		printf("Digite o sexto número: ");
	scanf("%f", &c);
   	resultado = x / y / z / a / b / c;
   		printf("\n\t\t\t\t%.4f/%.4f/%.4f/%.4f/%.4f/%.4f = %.6f", x, y, z, a, b, c, resultado);
   //Fim divisão
   
 }else{
 	
 	//Multiplicação
 	if(modulo == 4){
 		printf("\n\t\t\t\t\t\tMultiplicação");
	printf("\nDigite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	printf("Digite o terceiro número: ");
	scanf("%f", &z);
	printf("Digite o quarto número: ");
	scanf("%f", &a);
	printf("Digite o quinto número: ");
	scanf("%f", &b);
		printf("Digite o sexto número: ");
	scanf("%f", &c);
	resultado = x * y * z * a * b * c;
	printf("\n\t\t\t\t%.4f * %.4f * %.4f * %.4f * %.4f * %.4f = %.6f", x, y, z, a, b, c, resultado);
	//Fim multiplicação
 
 	}
	 //else para caso não digite 1, 2, 3 ou 4 para dizer o modulo
	 else{
 		
 		printf("Me desculpe você digitou outro número além dos referidos.\npor favor aperte qualquer tecla e tente novamente");
 	}
 }
	
}
}
			
			break;
		
	default:
		printf("\nEsse número não está disponivel nesta versão da calculadora\ntente novamente");
		break;
}

  
printf("\n\n");
d++;
if(d == 4 || d == 8 || d == 12 || d == 16){
	printf("\n\nA tela será limpada\nPara evitar poluição visual.\n");
	system("pause");
	system("cls");
	printf("\t\t\t\t\t\tTela Limpa\n\n");
}
}while(d < 20);
printf("Você ja ultilizou demais a calculadora.\nVocê deve reabri-la\nPressione qualquer tecla\n\n\n\n\n\n\n\n");
break;

 case 3: //calculadora cientifica
   	
	   do{
	   
	   	
	printf("\t\t\t\t\t\tCalculadora em C\n\t\t\t\tCalculadora cientifica, valores do triangulo");
	printf("\n\t\t\t\tMostra valores de seno cosseno e tangente\n\t\t\t\t\t\tMais Logaritmos\n\n");
   	
	   printf("digite 1 para seno\ndigite 2 para cosseno\ndigite 3 para tangente\ndigite 4 para valor de pi\ndigite 5 para logaritmo\ndigite 6 para função alfabeto\ndigite 7 para equação do 2° grau\ndigite aqui: ");
	   scanf("%i", &circulo);
   	
   	switch(circulo){
   		
   		case 1: //seno
   		
   		printf("\n\t\t\t\t\t\t\tSeno\n\n");
   		printf("0 graus = 0\n15 graus = 0,2588190451\n30 graus = 0,5\n45 graus = 0,7071067811\n60 graus = 0,8660254037\n90 graus = 1\n120 graus = -2\n150 graus = 0,5\n180 graus = 0");
   		
   		printf("\n\nA tela será limpa\nPara evitar poluição visual.\n");
	system("pause");
	system("cls");
	printf("\t\t\t\t\t\tTela Limpa\n\n");
	
	break; //fim seno
	
	case 2: //cosseno
		
	printf("\n\t\t\t\t\t\t\tCosseno\n\n");
	
	printf("0 graus = 1\n15 graus = 0,9659258262\n30 graus = 0,8660254037\n45 graus = 0,7071067811\n60 graus = 0,5\n90 graus = 0\n120 graus = -0,5\n150 graus = -0,8660254037\n180 graus = -1");
	
		printf("\n\nA tela será limpa\nPara evitar poluição visual.\n");
	system("pause");
	system("cls");
	printf("\t\t\t\t\t\tTela Limpa\n\n");
	
	break; //fim cosseno
	
	case 3: //tangente
		
		printf("\n\t\t\t\t\t\t\tTangente\n\n");
		
		printf("0 graus = 0\n15 graus = 0,2679491924\n30 graus = 0,5773502691\n45 graus = 1\n60 graus = 1,7320508075\n90 graus = inexistente\n120 graus = -1,7320508075\n150 graus = -0,5773502691\n180 graus = 0");
		
			printf("\n\nA tela será limpa\nPara evitar poluição visual.\n");
	system("pause");
	system("cls");
	printf("\t\t\t\t\t\tTela Limpa\n\n");
	
		break; //fim tangente
		
		case 4:
			
			printf("\nValor aproximado = 3,141592\nValor de pi(100 digitos) = 3,141592653589793238462643383279502884197169399375105820974944592307816406286208998628034\n82534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442\n88109756659334461\n\n");
			
			break;
		
			case 5:
   			
   			printf("\ndigite o número do logaritmo\ndigite aqui: ");
   			scanf("%f", &x);
   			resultado = log(x);
   			printf("\n\t\t\t\t\tlog natural de(%.0f) = %.8f\n\n", x, resultado);
   			
   			break;
   			
   			case 6:
	
	do{
	g = 10;
	printf("\nDigite um número de 1 a 26: ");
	scanf("%i", &numero);
	printf("\n\n");
	
	if(numero < 1 || numero > 26){
		
		printf("\nEste número não está disponivel, tente novamente.\n\n");
		
	}else{
	g++;
	for(int d = 0; numero > d; d++){
	printf("%c, ", alfa[d]);
}
printf("\n\n");
}
}while(g <= 10);
   				
   				break;
   				
   				case 7:
   					printf("\nDigite o valor de A: ");
  			scanf("%f", &h);
   			printf("\nDigite o valor de B: ");
   			scanf("%f", &e);
   			printf("\nDigite o valor de C: ");
   			scanf("%f", &f);
   					
   		delta = (e * e) - (4 * h * f);
   		
   		if(delta >= 0){
   		raiz = sqrt(delta);
   	        vai1 = (-e + raiz) / (2 * h);
   			vai2 = (-e - raiz) / (2 * h);
   		printf("\n\n\t\t\t\tAx² + Bx + C: ");
   		printf("\n\t\t\t\tx1 = %.2f", vai1);
   		printf("\n\t\t\t\tx2 = %.2f\n\n\n", vai2);
   		
   	}else{
   		printf("\n\nA equação não possui raizes reais.\n\n\n");
	   }
   					break;
		
		
		default: // outros
			printf("\n\t\tNão foi possivel encontrar o número referido, tente novamente.\n\n");
			break;
   	}
   	
   	d++;
   	}while(d <= 4);
   	printf("\n\t\t\t\tVocê ja ultilizou a calculadora cientifica demais.\n\t\t\t\tPressione qualquer tecla para fechar");
   	
   		break; //fim calculadora cientifica
   		
   	

default:
	printf("\t\t\t\t\t\nInvalido\n Tente novamente");
	for(i=1; i < 100000; i++){
		printf("%i", &i);
	}break;
}
}


