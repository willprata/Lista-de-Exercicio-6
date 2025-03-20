import java.util.Scanner;

public class MediaNotasTurma {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o número de alunos na turma: ");
        int alunos = scanner.nextInt();

        double somaNotas = 0;

        for (int i = 1; i <= alunos; i++) {
            System.out.print("Digite a nota do aluno " + i + ": ");
            double nota = scanner.nextDouble();
            somaNotas += nota;
        }

        double media = somaNotas / alunos;
        System.out.println("A média das notas da turma é: " + media);

        scanner.close();
    }
}
