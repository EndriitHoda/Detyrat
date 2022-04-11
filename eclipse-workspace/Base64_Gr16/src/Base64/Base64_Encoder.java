package Base64;

public class Base64_Encoder {

    public static void main(String[] args) {
        // write a sample String to encode
        String sample = "ELon";

        // print actual String
        System.out.println("Sample String:\n"
                + sample);

        // Encode into Base64 format
        String BasicBase64format
                = Base64.getEncoder()
                .encodeToString(sample.getBytes());

        // print encoded String
        System.out.println("Encoded String:\n"
                + BasicBase64format);

    }

}