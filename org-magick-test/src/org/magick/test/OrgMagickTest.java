/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package org.magick.test;

import java.awt.Dimension;
import magick.ImageInfo;
import magick.MagickException;
import magick.MagickImage;
import magick.util.MagickWindow;

/**
 *
 * @author brasilio
 */
public class OrgMagickTest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try {
            ImageInfo srcinfo = new ImageInfo("/home/brasilio/Imagens/owl.png");
            MagickImage img = new MagickImage(srcinfo);
            int w = img.getDimension().width;
            int h = img.getDimension().height;
            
            System.out.printf("%dX%d\n", w, h);
            
            double tw = 120.00;
            
            double th = (tw / w) * h;
            
            System.out.printf("%dX%d\n", (int)tw, (int)th);
            
            
            //img = img.minifyImage();
            img = img.resizeImage((int)tw, (int)th, 1);
            img.setFileName("/home/brasilio/Imagens/teste.png");
            img.writeImage(srcinfo);
            
            MagickWindow mw = new MagickWindow(img);
            mw.setSize(new Dimension(1024, 768));
            mw.setVisible(true);
            
        }
        catch (MagickException ex) {
            System.out.println(ex.getMessage());
        }
    }
    
}
