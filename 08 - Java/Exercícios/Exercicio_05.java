//Exercicio - Estrutura Repetitiva (For) - Soma Ímpares

import java.util.Scanner;

public class Exercicio_05 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int i, x, y, soma, troca;

        soma = 0;

        System.out.println("Digite dois numeros: ");
        x = sc.nextInt();
        y = sc.nextInt();

        if(x > y){
            troca = x;
            x = y;
            y= troca;
        }

        for(i = x; i < y-1; i++){

            if(i % 2 != 0){
                soma = soma + i;
            }
        }

        System.out.println("Soma dos impares = " + soma);

        sc.close();
    }
}