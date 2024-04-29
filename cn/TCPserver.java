import java.io.*;
import java.net.*;

public class TCPserver {
    public static final int PORT = 1222;

    public static void main(String a[]) throws Exception {
        ServerSocket serverSocket = new ServerSocket(PORT);
        System.out.println("Server Started");

        Socket clientSocket = serverSocket.accept();
        System.out.println("Connection accepted: " + clientSocket);

        BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
        PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(clientSocket.getOutputStream())), true);

        String send;
        while (true) {
            String str = in.readLine();
            send = "Echo: " + str;
            out.println(send);
            System.out.println("Echoing: " + send);
            if (str.equals("END")) {
                break;
            }
        }
        System.out.println("Closing server");
        clientSocket.close();
        serverSocket.close();
    }
}
