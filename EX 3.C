import java.util.Scanner;

public class ContagemRegressiva {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite um número para iniciar a contagem regressiva: ");
        int numero = scanner.nextInt();

        do {
            System.out.println(numero);
            numero--;
        } while (numero >= 0);

        scanner.close();
    }
}
