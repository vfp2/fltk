// generated by Fast Light User Interface Designer (fluid) version 1.0307

#include "radio.h"

/**
 Buttons test callback
*/
static void button_cb(Fl_Button *b, void *) {
  char msg[256];
  sprintf(msg, "Label: '%s'\nValue: %d", b->label(),b->value());
  cb_info->value(msg);
  cb_info->redraw();
  printf("%s\n",msg);
}

Fl_Output *cb_info=(Fl_Output *)0;

int main(int argc, char **argv) {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(369, 214);
    w = o; if (w) {/* empty */}
    { Fl_Button* o = new Fl_Button(20, 10, 160, 30, "&Fl_Button A1");
      o->tooltip("Normal button (callback called only when released)");
      o->labelsize(13);
      o->callback((Fl_Callback*) button_cb);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(20, 44, 160, 30, "Fl_Button &A2");
      o->tooltip("Normal button with callback called when changed (push and released)");
      o->labelsize(13);
      o->when(FL_WHEN_CHANGED);
      o->callback((Fl_Callback*) button_cb);
    } // Fl_Button* o
    { Fl_Return_Button* o = new Fl_Return_Button(20, 78, 160, 30, "Fl_Return_Button &B");
      o->tooltip("Button with Return key as default shortcut");
      o->labelsize(13);
      o->callback((Fl_Callback*) button_cb);
    } // Fl_Return_Button* o
    { Fl_Light_Button* o = new Fl_Light_Button(20, 113, 160, 30, "Fl_Light_Button &C");
      o->tooltip("Button with toggle state and a visual indicator of the current state");
      o->labelsize(13);
      o->callback((Fl_Callback*) button_cb);
    } // Fl_Light_Button* o
    { Fl_Check_Button* o = new Fl_Check_Button(20, 148, 160, 30, "Fl_Check_Button &D");
      o->tooltip("Check button with toggle state");
      o->down_box(FL_DOWN_BOX);
      o->labelsize(13);
      o->callback((Fl_Callback*) button_cb);
    } // Fl_Check_Button* o
    { Fl_Round_Button* o = new Fl_Round_Button(20, 178, 160, 30, "Fl_Round_Button &E");
      o->tooltip("Round Button with toggle state");
      o->down_box(FL_ROUND_DOWN_BOX);
      o->labelsize(13);
      o->callback((Fl_Callback*) button_cb);
    } // Fl_Round_Button* o
    { Fl_Group* o = new Fl_Group(190, 10, 70, 120);
      o->box(FL_THIN_UP_FRAME);
      { Fl_Round_Button* o = new Fl_Round_Button(190, 10, 70, 30, "radio &1");
        o->tooltip("Radio button, only one button is set at a time, in the corresponding group.");
        o->type(102);
        o->down_box(FL_ROUND_DOWN_BOX);
        o->callback((Fl_Callback*) button_cb);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(190, 40, 70, 30, "radio &2");
        o->tooltip("Radio button, only one button is set at a time, in the corresponding group.");
        o->type(102);
        o->down_box(FL_ROUND_DOWN_BOX);
        o->callback((Fl_Callback*) button_cb);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(190, 70, 70, 30, "radio &3");
        o->tooltip("Radio button, only one button is set at a time, in the corresponding group.");
        o->type(102);
        o->down_box(FL_ROUND_DOWN_BOX);
        o->callback((Fl_Callback*) button_cb);
      } // Fl_Round_Button* o
      { Fl_Round_Button* o = new Fl_Round_Button(190, 100, 70, 30, "radio &4");
        o->tooltip("Radio button, only one button is set at a time, in the corresponding group.");
        o->type(102);
        o->down_box(FL_ROUND_DOWN_BOX);
        o->callback((Fl_Callback*) button_cb);
      } // Fl_Round_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(270, 10, 90, 120);
      o->box(FL_THIN_UP_BOX);
      { Fl_Button* o = new Fl_Button(280, 20, 20, 20, "radio");
        o->tooltip("Custom look button, only one button is set at a time, in the corresponding gr\
oup.");
        o->type(102);
        o->selection_color((Fl_Color)1);
        o->align(Fl_Align(FL_ALIGN_RIGHT));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(280, 45, 20, 20, "radio");
        o->tooltip("Custom look button, only one button is set at a time, in the corresponding gr\
oup.");
        o->type(102);
        o->selection_color((Fl_Color)1);
        o->align(Fl_Align(FL_ALIGN_RIGHT));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(280, 70, 20, 20, "radio");
        o->tooltip("Custom look button, only one button is set at a time, in the corresponding gr\
oup.");
        o->type(102);
        o->selection_color((Fl_Color)1);
        o->align(Fl_Align(FL_ALIGN_RIGHT));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(280, 95, 20, 20, "radio");
        o->tooltip("Custom look button, only one button is set at a time, in the corresponding gr\
oup.");
        o->type(102);
        o->selection_color((Fl_Color)1);
        o->align(Fl_Align(FL_ALIGN_RIGHT));
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { cb_info = new Fl_Output(190, 148, 170, 62, "callback:");
      cb_info->type(12);
      cb_info->textsize(12);
      cb_info->align(Fl_Align(133));
    } // Fl_Output* cb_info
    o->end();
  } // Fl_Double_Window* o
  w->show(argc, argv);
  return Fl::run();
}
