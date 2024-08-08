#include "includes/application.h"

void ft_render_objects(Window  *window)
{
	Panel		*fixed = add_fixed_layout_to_window(window);

	Button		*button1 = create_button_with_position(fixed, "Botão 1", 50, 50, on_button_click, NULL);
	Button		*button2 = create_button_with_position(fixed, "Botão 1", 50, 150, on_button_click, NULL);
	Button		*button3 = create_button_with_position(fixed, "Botão 1", 50, 90, on_button_click, NULL);


	Label		*label = create_label_with_position(fixed, "Texto", 50, 150, NULL);

	Textbox		*entry = add_entry(fixed, 100, 100, f(on_text_entry_changed));


	const char *label1_style = "color: red";
	apply_css(label, label1_style);
}