#include "includes/application.h"

void on_button_click(Tool *widget, Pointer user_data)
{
	Window *dados = new_window("teste", 800, 800);
	loop(dados);
}

void on_text_entry_changed(Tool *widget, Pointer user_data)
{
	const char *text = gtk_entry_get_text(GTK_ENTRY(widget));
	g_print("Texto alterado: %s\n", text);
}