#include "includes/application.h"

void ft_render_objects(Window  *window)
{
	Panel		*fixed = add_fixed_layout_to_window(window);

	Button		*button1 = create_button_with_position(fixed, "Botão 1", 45, 50, on_button_click, NULL);

	Label		*label1 = create_label_with_position(fixed, "42 Framework", 30, 30, NULL);
	Label		*label2 = create_label_with_position(fixed, "Framework desenvolvida por alunos da escola 42 Luanda", 30, 100, NULL);
	Label		*label3 = create_label_with_position(fixed, "Informe o seu nome *", 30, 160, NULL);

	Textbox		*textbox1 = add_entry(fixed, 30, 190, f(on_text_entry_changed));

	const char *label1_style = "label { color: green; font-size: 50px}";
	const char *label2_style = "label { color: white; font-size: 18px}";
	const char *label3_style = "label { color: white; font-size: 14px}";

	const char *textbox1_style = "entry { color: white; font-size: 14px}";

	const char *button1_style = "button { color: red; font-size: 12px; } \
								 button:hover { color: green; }";
	
	apply_css(label1, label1_style);
	apply_css(label2, label2_style);
	apply_css(label3, label3_style);

	apply_css(textbox1, textbox1_style);

	apply_css(button1, button1_style);
}