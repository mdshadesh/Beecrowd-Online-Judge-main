package Strings;

import java.io.IOException;
import java.util.Scanner;
 
public class Main{
 
    public static void main(String[] args) throws IOException {
		Scanner leitor = new Scanner(System.in);
		
		String cpf = "";
		String valor1 = leitor.next().replaceAll("[^\\d.]", "");
		String valor2 = leitor.next().replaceAll("[^\\d.]", "");
		
		if (valor1.length()  <= 11) {
			cpf = valor1;
			valor1 = "";
		} else {
			cpf = valor1.substring(0, 11);
			valor1 = valor1.substring(11, valor1.length());
		}
		
		if (valor1.contains(".")) {
			int index = valor1.indexOf(".");
			String numerosDepoisDoPonto = valor1.substring(index, valor1.length());
			if (numerosDepoisDoPonto.length() > 3) {
				valor1 = valor1.substring(0, index + 3);
			}
		}
		
		if (valor2.contains(".")) {
			int index = valor2.indexOf(".");
			String numerosDepoisDoPonto = valor2.substring(index, valor2.length());
			if (numerosDepoisDoPonto.length() > 3) {
				valor2 = valor2.substring(0, index + 3);
			}
		}
		
		double v1 = 0;
		if (!valor1.isEmpty()) {
			v1 = Double.parseDouble(valor1);
		}
		double v2 = Double.parseDouble(valor2);
		 
		double total = v1 + v2;
		
		System.out.println("cpf " + cpf);
		System.out.println(String.format("%.2f", total));
    }
 
}