package Base64;
import java.util.Scanner;

public class main {
		private final static String base64chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
		public static void main(String[] args) {
			Scanner sc=new Scanner(System.in);
			String encoder;
			String decoder;
			System.out.println("Shenoni emrin qe doni ta enkriptoni");
			Base64_Encoder end=new Base64_Encoder();
			encoder=sc.nextLine();	
			System.out.println(end.encode(encoder));
			Base64_Decoder dec=new Base64_Decoder();
			System.out.println("Shenoni emrin qe doni ta dekriptoni");
			decoder=sc.nextLine();	
			System.out.println(dec.decode(decoder));
	}

}