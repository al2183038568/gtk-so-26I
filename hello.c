#include <gtk/gtk.h>
int main(int argc, char *argv[]) {
GtkWidget *window; // Se define un elemento visual GTKWidget
gtk_init(&argc, &argv); // Se inicializa con el contexto de la línea de comando
window = gtk_window_new(GTK_WINDOW_TOPLEVEL); // se crea la ventana a visualizar
gtk_widget_show(window); // Se muestra la ventana
gtk_main(); // Se invoca el método main que procesa los eventos
return 0;
}
