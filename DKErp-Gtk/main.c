/*
 * Copyright 2016 DarkSP <http://www.darksp.org>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * File:   main.c
 * Author: brasilio
 *
 * Created on 20 de Fevereiro de 2016, 21:17
 */

#include <stdio.h>
#include <stdlib.h>
#include <gtk-3.0/gtk/gtk.h>

static void activate(GtkApplication *app, gpointer data);

/*
 * 
 */
int main(int argc, char** argv) {
    GtkBuilder *builder;
    GObject *win;
    
    gtk_init(&argc, &argv);
    
    builder = gtk_builder_new_from_file("gui/main.glade");
    win = gtk_builder_get_object(builder, "window1");
    gtk_window_set_title(GTK_WINDOW(win), "DK ERP 2.0.1");
    gtk_window_set_default_size(GTK_WINDOW(win), 1024, 768);
    gtk_widget_show_all(GTK_WIDGET(win));
    
    g_object_unref(G_OBJECT(builder));
    gtk_main();

    return EXIT_SUCCESS;
}

static void activate(GtkApplication* app, gpointer data)
{
    GtkBuilder *builder;
    GObject *win;
    GtkWidget *window;
    builder = gtk_builder_new_from_file("gui/main.glade");
    win = gtk_builder_get_object(builder, "window1");
    gtk_window_set_title(GTK_WINDOW(win), "DK ERP 2.0.1");
    gtk_window_set_default_size(GTK_WINDOW(win), 1024, 768);
    gtk_widget_show_all(GTK_WIDGET(win));
}

