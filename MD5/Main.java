package com.company;

import java.io.*;
import javax.security.auth.login.LoginException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class Main {

    public static void main(String[] args) throws NoSuchAlgorithmException, LoginException, IOException {
        System.out.println("Read from file hello.txt: ");
        try(FileReader reader = new FileReader("C:/Users/Zero/Desktop/hello.txt"))
        {
            int c;
            while((c=reader.read())!=-1){

                System.out.print((char)c);
            }
        }
        catch(IOException ex){

            System.out.println(ex.getMessage());
        }
        System.out.println("\n");
        System.out.println("Hash:");
        String str = "Hello MY Friend";
        MessageDigest md5 = MessageDigest.getInstance("MD5");
        byte[] bytes = md5.digest(str.getBytes());
        StringBuilder builder = new StringBuilder();
        for (byte b : bytes) {
            builder.append(String.format("%02X", b));
        }
        System.out.println(builder.toString());
    }
}
