#include <gtk/gtk.h>

int main(int argc, char *argv[]) {

	GtkWidget *window;
	GtkWidget *grid;
	GtkWidget *alabel;
	GtkWidget *blabel;
                
       	GdkPixbuf *icon;

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size(GTK_WINDOW(window), 180, 180);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_title(GTK_WINDOW(window), "Window Title");
	gtk_container_set_border_width(GTK_CONTAINER(window),10);

	icon = gdk_pixbuf_new_from_file("fairy.png",NULL);  
	gtk_window_set_icon(GTK_WINDOW(window), icon);

        alabel = gtk_label_new("Placeholder #1");
        blabel = gtk_label_new("Placeholder #2");
        
        grid = gtk_grid_new();
		
	gtk_grid_set_column_homogeneous(GTK_GRID (grid),TRUE);
	gtk_grid_set_row_homogeneous(GTK_GRID (grid),TRUE);

	gtk_grid_set_row_spacing (GTK_GRID (grid), 3);
	gtk_grid_set_column_spacing (GTK_GRID (grid), 3);	
	
	gtk_container_add(GTK_CONTAINER(window), grid);
	
	gtk_grid_attach(GTK_GRID(grid), alabel,     1, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(grid), blabel,     1, 2, 1, 1);

	gtk_widget_show_all(window);
  
	g_signal_connect(window, "destroy",G_CALLBACK(gtk_main_quit), NULL);  

	gtk_main();

	return 0;
}
