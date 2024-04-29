import java.io.*;
import java.net.*;

public class TCPclient {
    public static void main(String a[]) throws Exception {
        Socket clientSocket = new Socket("localhost", 8080); // Assuming server is running on localhost and port 8080
        System.out.println("Connected to server");

        String input;
        BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));
        BufferedReader inFromServer = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
        PrintWriter outToServer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(clientSocket.getOutputStream())), true);

        while (true) {
            System.out.println("Enter the string to send to server");
            input = userInput.readLine();
            outToServer.println(input);

            String response = inFromServer.readLine();
            System.out.println("From server: " + response);

            if (input.equals("END")) {
                break;
            }
        }
        System.out.println("Closing client");
        clientSocket.close();
    }
}
