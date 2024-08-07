#ifndef LIBSF_H
# define LIBSF_H
//gcc -o plarte test4.c -I./libsf-s -L./libsf-s -lsf `pkg-config --cflags --libs gtk+-3.0`
# include <gtk/gtk.h>

# define GWK GtkWidget
// Estruturas de dados
typedef struct s_root
{
	GtkWidget *window;
	GtkWidget *fixed;
	GtkWidget *item;
	int		x;
	int		y;
	int		th;
}		t_root;

typedef struct
{
	void (*key_handler)(GdkEventKey *event, gpointer user_data);
	gpointer user_data;
}	t_key_event_data;

typedef struct
{
	void (*mouse_handler)(GdkEventButton *event, gpointer user_data);
	gpointer user_data;
}	t_mouse_event_data;

typedef struct
{
	void (*loop_handler)(gpointer user_data);
	gpointer user_data;
}	t_loop_event_data;

GtkWidget	*add_fixed_layout_to_window(GtkWidget *window);
GtkWidget *create_context_menu(GtkWidget *widget, GCallback callback, gpointer data);
GtkWidget *create_window_s(const char *title, int width, int height);
GtkWidget *add_button(GtkWidget *container, const char *label, int x, int y, GCallback callback);
GtkWidget *add_label(GtkWidget *container, const char *text, int x, int y);
GtkWidget *add_entry(GtkWidget *container, int x, int y, GCallback callback);
GtkWidget *add_color_chooser(GtkWidget *container, int x, int y, GCallback callback);
GtkWidget *add_drawing_area(GtkWidget *container, int x, int y, int width, int height, GCallback draw_callback);
GtkWidget *add_file_chooser(GtkWidget *container, int x, int y, GCallback callback);
GtkWidget *add_image(GtkWidget *container, const char *file_path, int x, int y);
GtkWidget *add_separator(GtkWidget *container, int x, int y, gboolean horizontal);
void add_tabs(GtkWidget *notebook, GtkWidget **pages, const char **titles, int count);
GtkWidget *add_volume_slider(GtkWidget *container, int x, int y, GCallback callback);
GtkWidget *add_checkbox(GtkWidget *container, const char *label, int x, int y, GCallback callback);
GtkWidget *add_radio_button(GtkWidget *container, GtkWidget *group, const char *label, int x, int y);
GtkWidget *add_combo_box(GtkWidget *container, int x, int y, gchar **items, int item_count, GCallback callback);
GtkWidget *add_calendar(GtkWidget *container, int x, int y, GCallback callback);
GtkWidget *add_status_bar(GtkWidget *container, int x, int y);
GtkWidget *add_context_menu(GtkWidget *widget, GtkWidget *menu);
GtkWidget *add_toolbar_with_buttons(GtkWidget *container, const char **button_labels, int count);
GtkWidget *add_spinner(GtkWidget *container, int x, int y);
GtkWidget *add_text_view(GtkWidget *container, int x, int y, int width, int height);

GtkWidget *create_image_with_position(GtkWidget *container, const char *file_path, int x, int y, int width, int height);
GtkWidget *create_scale_with_position(GtkWidget *container, int x, int y, int min, int max, int step);
GtkWidget *create_checkbox_with_position(GtkWidget *container, const char *label, int x, int y, gboolean active);
GtkWidget *create_drawing_area_with_position(GtkWidget *container, int x, int y, int width, int height, gboolean (*draw_callback)(GtkWidget *, cairo_t *, gpointer), gpointer data);
GtkWidget *create_label_with_position(GtkWidget *container, const char *text, int x, int y, const GdkRGBA *color);
GtkWidget *create_button_with_position(GtkWidget *container, const char *label, int x, int y, void (*callback)(GtkWidget *, gpointer), gpointer data);

GtkWidget *create_check_button(const char *label, gboolean initial_state);
GtkWidget *create_progress_bar(double initial_fraction);
GtkWidget *create_spin_button(double min, double max, double step, double initial_value);
GtkWidget *create_combo_box(const char **items, int num_items, int default_index);
GtkWidget *create_image_ph(GtkWidget *container, const char *file_path, gint x, gint y, gint width, gint height);
GtkWidget *create_vbox(gboolean homogeneous, gint spacing);
GtkWidget *create_hbox(gboolean homogeneous, gint spacing);
GtkWidget *create_grid(gint row_spacing, gint column_spacing);
GtkWidget *create_fixed_layout(void);
GtkWidget *create_entry1(GtkFixed *fixed, gint x, gint y, const char *border_color, void (*callback)(GtkEntry *, gpointer));
GtkWidget *create_label(GtkWidget *container, const char *text);
GtkWidget *create_text_view(GtkWidget *container);
GtkWidget	*create_text_view(GtkWidget *container);

void loop_window(GtkWidget *window);
void add_event(GtkWidget *widget, const char *event_name, GCallback callback);
void add_to_fixed(GtkFixed *fixed, GtkWidget *widget, gint x, gint y);
void add_to_grid(GtkGrid *grid, GtkWidget *widget, guint left, guint top, guint width, guint height);
GtkWidget *new_window(const char *title, int width, int height);
void apply_css(GtkWidget *widget, const char *css);
void set_button_color(GtkWidget *button, const char *color);
void set_label_color(GtkWidget *label, const char *color);
void set_entry_border_color(GtkWidget *entry, const char *color);
void create_image(GtkFixed *fixed, const char *file_path, gint x, gint y);
void create_entry(GtkFixed *fixed, gint x, gint y);
void create_text(GtkFixed *fixed, const char *text, gint x, gint y);
void create_button(GtkFixed *fixed, const char *label, gint x, gint y, void (*callback)(GtkWidget *, gpointer), gpointer user_data);
void show_notification(GtkWidget *parent, const char *title, const char *message);
void set_mouse_event_handler(GtkWidget *widget, void (*handler)(GdkEventButton *, gpointer), gpointer user_data);
void set_key_event_handler(GtkWidget *widget, void (*handler)(GdkEventKey *, gpointer), gpointer user_data);
void set_loop_event_handler(guint interval, void (*handler)(gpointer), gpointer user_data);
GtkWidget *create_image_c(GtkWidget *container, const char *file_path);
GtkWidget *create_calendar(GtkWidget *container);
GtkWidget *create_file_chooser_button(GtkWidget *container, const char *title,
                                      GtkFileChooserAction action, GCallback callback, gpointer data);
GtkWidget *create_color_chooser(GtkWidget *container, GCallback callback, gpointer data);
GtkWidget *create_notebook(GtkWidget *container);
void add_tab_to_notebook(GtkWidget *notebook, const char *label, GtkWidget *content);
GtkWidget *create_media_viewer(GtkWidget *container);
void set_status_bar_message(GtkWidget *status_bar, const char *message);
GtkWidget *create_toolbar(GtkWidget *container);
GtkToolItem *create_toolbar_button(GtkWidget *toolbar, const char *icon_name, const char *tooltip, GCallback callback, gpointer data);
GtkWidget *add_widget_at_position(GtkWidget *fixed_container, GtkWidget *widget, int x, int y);
void reposition_widget_in_grid(GtkGrid *grid, GtkWidget *widget, int left, int top);
GtkWidget *create_color_chooser_with_position(GtkWidget *container, int x, int y, int width, int height, GdkRGBA *color);
void color_activated(GtkColorChooser *chooser, gpointer user_data);

#endif // LIBSF_H

