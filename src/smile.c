#define PNTR_IMPLEMENTATION
#define PNTR_BRUSH_IMPLEMENTATION
#include "pntr_brush.h"

#include <math.h>
#define deg2rad(angleInDegrees) ((angleInDegrees) * M_PI / 180.0)


int main() {
  pntr_image* canvas = pntr_gen_image_color(640, 480, PNTR_WHITE);
  pntr_brush* ctx = pntr_load_brush(canvas);

  pntr_brush_fill_style(ctx, PNTR_YELLOW);
  pntr_brush_stroke_style(ctx, PNTR_BLACK);

  pntr_brush_begin_path(ctx);
  pntr_brush_arc(ctx, 320, 240, 220, 0, deg2rad(360), false);
  pntr_brush_fill(ctx);
  pntr_brush_stroke(ctx);

  pntr_brush_begin_path(ctx);
  pntr_brush_arc(ctx, 220, 140, 40, 0, deg2rad(360), false);
  pntr_brush_arc(ctx, 420, 140, 40, 0, deg2rad(360), false);
  pntr_brush_fill_style(ctx, PNTR_BLACK);
  pntr_brush_fill(ctx);

  pntr_brush_begin_path(ctx);
  pntr_brush_arc(ctx, 320, 260, 120, 0, deg2rad(180), false);
  pntr_brush_line_width(ctx, 30);
  pntr_brush_stroke(ctx);


  pntr_save_image(canvas, "smile.png");
  return 0;
}