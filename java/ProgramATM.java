import java.util.Scanner;

public class ProgramATM {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String nama, benar;

        while (true) {
            System.out.print("Masukkan nama: ");
            nama = input.next();

            System.out.print("Nama benar? (true/false): ");
            benar = input.next();

            if (benar.equals("true")) break;
        }

        System.out.print("Masukkan NIM (angka saja): ");
        int nim = input.nextInt();

        int saldo = nim;

        System.out.println("====================");
        System.out.println("Nama: " + nama);
        System.out.println("Saldo awal: Rp " + saldo);

        System.out.println("===== MENU ATM =====");
        System.out.println("1. Cek Saldo");
        System.out.println("2. Tarik Tunai");
        System.out.println("3. Setor Tunai");
        System.out.println("4. Transfer");
        System.out.println("5. Keluar");
        System.out.println("====================");

        System.out.print("Pilih menu: ");
        int menu = input.nextInt();

        switch (menu) {
            case 1:
                System.out.println("Saldo: " + saldo);
                break;

            case 2:
                System.out.print("Jumlah tarik: ");
                int tarik = input.nextInt();
                System.out.println("Saldo sekarang: " + (saldo - tarik));
                break;

            case 3:
                System.out.print("Jumlah setor: ");
                int setor = input.nextInt();
                System.out.println("Saldo sekarang: " + (saldo + setor));
                break;

            case 4:
                System.out.print("Jumlah transfer: ");
                int tf = input.nextInt();
                System.out.println("Saldo sekarang: " + (saldo - tf));
                break;

            case 5:
                System.out.println("Keluar");
                break;

            default:
                System.out.println("Menu tidak valid");
        }

        input.close();
    }
}
