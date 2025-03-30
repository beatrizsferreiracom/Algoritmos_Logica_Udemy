//Exercicio - Estrutura Repetitiva (While) - Crescente

import java.util.Scanner;

public class Exercicio_04 {
    
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int x, y;

        System.out.println("Digite dois numeros: ");
        x = sc.nextInt();
        y = sc.nextInt();

        while(x != y){

            if(x > y){
                System.out.println("Decrescente");
            }
            else{
                System.out.println("Crescente");
            }

            System.out.println("\nDigite dois numeros: ");
            x = sc.nextInt();
            y = sc.nextInt();
        }

        System.out.print("Os numeros sao iguais");

        sc.close();
    }
}