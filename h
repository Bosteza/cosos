package aja;

import java.util.Scanner;

public class Process {
    public void exe() {
    	
       // elCiclo: while(true) {
    	Scanner scan = new Scanner(System.in);
    	  
    
        System.out.println("Ingrese una frase: ");
    	String frase = scan.nextLine();
        int length= frase.length();
        System.out.println(length);
        
      
        System.out.println("Ingrese una palabra: ");
        String palabra = scan.nextLine();
        String mayus = palabra.toUpperCase();
        System.out.println("En mayúsculas: "+ mayus);
        
        String minus=palabra.toLowerCase();
        System.out.println("En minúsculas: " + minus);
        
        System.out.println("Una palabra más: ");
        String mitad = scan.nextLine();
        int longitudMitad = mitad.length() / 2; 
        String mitadPalabra = mitad.substring(0, longitudMitad);
        System.out.println("Mitad de la palabra: " + mitadPalabra);
   
        scan.close();
        
    }
}
