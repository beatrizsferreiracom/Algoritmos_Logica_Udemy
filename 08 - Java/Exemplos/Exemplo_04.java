//Exemplo 04

import java.util.Locale;

public class Exemplo_04 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);

        double x;

        x = 2.3456;

        System.out.println(String.format("%.2f", x));

    }
}