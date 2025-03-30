//Exemplo 06 - Processamento de Dados

import java.util.Locale;

public class Exemplo_06 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);

        int a, b;
        double resultado;

        a = 5;
        b = 2;

        resultado = (double) a / b;

        System.out.println(resultado);

    }
}