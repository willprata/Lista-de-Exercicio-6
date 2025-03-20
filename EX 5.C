import java.util.Scanner;

public class NumerosPrimos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o número inicial do intervalo: ");
        int inicio = scanner.nextInt();

        System.out.print("Digite o número final do intervalo: ");
        int fim = scanner.nextInt();

        for (int num = inicio; num <= fim; num++) {
            boolean primo = true;

            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    primo = false;
                    break;
                }
            }

            if (primo && num > 1) {
                System.out.println(num);
            }
        }

        scanner.close();
    }
}
