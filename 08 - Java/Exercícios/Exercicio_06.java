//Exercicio - Vetores - Soma Vetor

import java.util.Locale;
import java.util.Scanner;

public class Exercicio_06 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);

        Scanner sc = new Scanner(System.in);

        int N, i;
        double soma, media;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();
        
        double[] vet = new double[N];

        soma = 0;

        for(i = 0; i < N; i++){
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextDouble();

            soma = soma + vet[i];
        }

        media = (double) soma / N;

        System.out.print("\nValores = ");
        for(i = 0; i < N; i++){
            System.out.print(String.format("%.1f  ", vet[i]));
        }

        System.out.println("\nSoma = " + String.format("%.2f", soma));
        System.out.println("Media = " + String.format("%.2f", media));

        sc.close();
    }
}