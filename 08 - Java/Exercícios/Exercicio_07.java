//Exercicio - Matrizes - Diagonal Negativos

import java.util.Locale;
import java.util.Scanner;

public class Exercicio_07 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);

        Scanner sc = new Scanner(System.in);

        int N, i, j, negativos;

        System.out.print("Qual a ordem da matriz? ");
        N = sc.nextInt();
        
        int [][] mat = new int[N][N];

        negativos = 0;

        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                System.out.print("Elemento [" + i + ", " + j + "]: ");
                mat[i][j] = sc.nextInt();

                if(mat[i][j] < 0){
                    negativos++;
                }
            }
        }

        System.out.println("\nDiagonal principal:");

        for(i = 0; i < N; i++){
            System.out.print(mat[i][i] + " ");
        }

        System.out.println("\nQuantidade de negativos = " + negativos);

        sc.close();
    }
}