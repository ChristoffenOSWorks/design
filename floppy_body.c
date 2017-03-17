#include "/usr/include/cairo/cairo.h"
int
main (int argc, char *argv[])
{
        cairo_surface_t *surface = 
        cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 1096, 1051);
        cairo_t *cr = 
            cairo_create (surface);

        cairo_set_source_rgba(cr, 0.91, 0.08, 0.03, 0.8);
        cairo_scale (cr, 1.0, 1.0);
        cairo_line_to(cr, 0.0, 0.0);
        cairo_line_to(cr, 1051.0, 0.0);
        cairo_line_to(cr, 1051.0, 1096.0);
        cairo_line_to(cr, 0.0, 1096.0);
        cairo_fill_preserve (cr);
        cairo_set_source_rgba(cr, 0.91, 0.08, 0.03, 0.8);
        cairo_stroke (cr);

        cairo_surface_write_to_png (surface,"floppy_bigrect");
        cairo_destroy (cr);
        cairo_surface_destroy (surface);
        return 0;
}
