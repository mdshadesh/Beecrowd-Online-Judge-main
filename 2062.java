package Strings;


import java.util.Scanner;

public class URI{

	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		int N = leitor.nextInt();
		String[] palavras = new String[N];
		for (int i = 0; i < N; i++) {
			String palavra = leitor.next();
			if (palavra.length() == 3) {
				if (palavra.startsWith("OB") || palavra.startsWith("UR") && !palavra.endsWith("I")) {
					palavra = palavra.substring(0, 2) + "I";
				}
			}
			palavras[i] = palavra;
		}
		System.out.println(String.join(" ", palavras));
	}

}