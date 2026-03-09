#include <gtk/gtk.h>

/* Callback function when button is clicked */
void hello(GtkWidget *widget, gpointer data)
{
g_print("Hello World\n");
}

/* Called when window is closed */
gint delete_event(GtkWidget *widget, GdkEvent *event, gpointer data)
{
g_print("delete event occurred\n");

/* return FALSE to destroy the window */
return FALSE;

}

/* Another callback */
void destroy(GtkWidget *widget, gpointer data)
{
gtk_main_quit();
}

int main(int argc, char *argv[])
{
GtkWidget *window;
GtkWidget *button;

/* Initialize GTK */
 gtk_init(&argc, &argv);

/* Create a new window */
 window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

/* When the window is closed */
 g_signal_connect(window, "delete-event", G_CALLBACK(delete_event), NULL);

/* Destroy signal */
 g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

/* Set window border width */
 gtk_container_set_border_width(GTK_CONTAINER(window), 10);

/* Create a button */
 button = gtk_button_new_with_label("Hello World");

/* When button is clicked */
 g_signal_connect(button, "clicked", G_CALLBACK(hello), NULL);

/* Put button inside window */
 gtk_container_add(GTK_CONTAINER(window), button);

/* Show button */
 gtk_widget_show(button);

/* Show window */
 gtk_widget_show(window);

/* GTK main loop */
 gtk_main();

return 0;

}
