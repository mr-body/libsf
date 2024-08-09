#include "includes/application.h"

void ft_render_objects(Window  *window)
{
	Panel		*fixed = add_fixed_layout_to_window(window);

	Button		*button1 = create_button_with_position(fixed, "Verificar", 30, 230, on_button_click, NULL);

	Label		*label1 = create_label_with_position(fixed, "42 Framework", 30, 30, NULL);
	Label		*label2 = create_label_with_position(fixed, "Framework desenvolvida por alunos da escola 42 Luanda", 30, 100, NULL);
	Label		*label3 = create_label_with_position(fixed, "Informe o seu nome *", 30, 160, NULL);

	Image		*image1 = create_image_with_position(fixed, "./200w.gif", 500, 160,  250, 250);

	Textbox		*textbox1 = add_entry(fixed, 30, 190, f(on_text_entry_changed));

	Style *label1_style = "label { color: green; font-size: 50px}";
	Style *label2_style = "label { color: white; font-size: 18px}";
	Style *label3_style = "label { color: white; font-size: 14px}";


	Style *textbox1_style = "entry { color: green; border: none; background: #dddd;}";

	Style *button1_style = "button { color: white; background: green; font-size: 13px; border: none; border-radius: 0;} \
								button:hover { background: rgb(200, 255, 10); color: black }";
	
	apply_css(label1, label1_style);
	apply_css(label2, label2_style);
	apply_css(label3, label3_style);

	apply_css(textbox1, textbox1_style);

	apply_css(button1, button1_style);
}


void ft_render_form1(Window  *window)
{
	Panel		*fixed = add_fixed_layout_to_window(window);
	Label		*label1 = create_label_with_position(fixed, "Nova pagina", 30, 30, NULL);
	apply_css(label1, "label { color: green; font-size: 50px}");
}