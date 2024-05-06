// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.2.0
// Project name: ROBOT

#include "ui.h"
#include "ui_helpers.h"
int flag = 0;
//char COULEUR[]= "Aucune";
///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_START;
void ui_event_STARTBUTTON(lv_event_t * e);
lv_obj_t * ui_STARTBUTTON;
lv_obj_t * ui_Label2;
lv_obj_t * ui_WLAN;
lv_obj_t * ui_WLANIP;
lv_obj_t * ui_ETHIP1;
lv_obj_t * ui_ETH;
lv_obj_t * ui_TIRETTE;
lv_obj_t * ui_IMU;
lv_obj_t * ui_LIDAR;
lv_obj_t * ui_SUIVIT;
lv_obj_t * ui_PCA;
lv_obj_t * ui_TIRETTESTATE;
lv_obj_t * ui_IMUSTATE;
lv_obj_t * ui_LIDARSTATE;
lv_obj_t * ui_SUIVITSTATE;
lv_obj_t * ui_PCASTATE;
lv_obj_t * ui_CAPTD;
lv_obj_t * ui_CAPTD1;
lv_obj_t * ui_UARTM;
lv_obj_t * ui_CAPTDSTATE;
lv_obj_t * ui_CAPTGSTATE;
lv_obj_t * ui_UARTMSTATE;
lv_obj_t * ui_UARTC;
lv_obj_t * ui_UARTCSTATE;
lv_obj_t * ui_ROS;
lv_obj_t * ui_ROSSTATE;
lv_obj_t * ui_ROBOTCOLOR;
lv_obj_t * ui_COLOR;
void ui_event_COLORBLUE(lv_event_t * e);
lv_obj_t * ui_COLORBLUE;
lv_obj_t * ui_BLEU;
void ui_event_COLORYELLOW(lv_event_t * e);
lv_obj_t * ui_COLORYELLOW;
lv_obj_t * ui_YELLOW;
void ui_event_ImgButton2(lv_event_t * e);
lv_obj_t * ui_ImgButton2;
lv_obj_t * ui_STRATEGIE;
void ui_event_STARTBUTTON1(lv_event_t * e);
lv_obj_t * ui_STARTBUTTON1;
void ui_event_BACKBUTTON(lv_event_t * e);
lv_obj_t * ui_BACKBUTTON;
lv_obj_t * ui_STRATIMAGE;
void ui_event_STRAT1(lv_event_t * e);
lv_obj_t * ui_STRAT1;
void ui_event_STRAT2(lv_event_t * e);
lv_obj_t * ui_STRAT2;
void ui_event_STRAT3(lv_event_t * e);
lv_obj_t * ui_STRAT3;
void ui_event_STRAT4(lv_event_t * e);
lv_obj_t * ui_STRAT4;
void ui_event_STRAT5(lv_event_t * e);
lv_obj_t * ui_STRAT5;
void ui_event_STRAT6(lv_event_t * e);
lv_obj_t * ui_STRAT6;
void ui_event_STRAT7(lv_event_t * e);
lv_obj_t * ui_STRAT7;
lv_obj_t * ui_MATCH;
lv_obj_t * ui_Image2;
lv_obj_t * ui_SCORE;
lv_obj_t * ui_SCOREVALUE;
void ui_event_ImgButton1(lv_event_t * e);
lv_obj_t * ui_ImgButton1;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_[8] = {&ui_img_1_png, &ui_img_2_png, &ui_img_3_png, &ui_img_4_png, &ui_img_5_png, &ui_img_256_png, &ui_img_6_png, &ui_img_7_png};
const lv_img_dsc_t * ui_imgset_959343679[1] = {&ui_img_1610686690};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_STARTBUTTON(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(ui_STRATEGIE, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}
void ui_event_COLORBLUE(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        //SET_BLUECOLOR(e);
        flag = 2;
    }
}
void ui_event_COLORYELLOW(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        //SET_YELLOWCOLOR(e);
        flag = 3;
    }
}
void ui_event_ImgButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        //RESET(e);
        flag = 1;
    }
}
void ui_event_STARTBUTTON1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(ui_MATCH, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
        flag = 10;
    }
}
void ui_event_BACKBUTTON(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(ui_START, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_STRAT1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        STRATIMAGE1(e);
    }
}
void ui_event_STRAT2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        STRATIMAGE2(e);
    }
}
void ui_event_STRAT3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        STRATIMAGE3(e);
    }
}
void ui_event_STRAT4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        STRATIMAGE4(e);
    }
}
void ui_event_STRAT5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        STRATIMAGE5(e);
    }
}
void ui_event_STRAT6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        STRATIMAGE6(e);
    }
}
void ui_event_STRAT7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        STRATIMAGE7(e);
    }
}
void ui_event_ImgButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(ui_START, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
        flag = 20;
    }
}

///////////////////// SCREENS ////////////////////
void ui_START_screen_init(void)
{
    ui_START = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_START, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_START, lv_color_hex(0x666262), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_START, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_STARTBUTTON = lv_imgbtn_create(ui_START);
    lv_imgbtn_set_src(ui_STARTBUTTON, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_100247398, NULL);
    lv_imgbtn_set_src(ui_STARTBUTTON, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_100247398, NULL);
    lv_obj_set_width(ui_STARTBUTTON, 128);
    lv_obj_set_height(ui_STARTBUTTON, 128);
    lv_obj_set_x(ui_STARTBUTTON, 0);
    lv_obj_set_y(ui_STARTBUTTON, 100);
    lv_obj_set_align(ui_STARTBUTTON, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_STARTBUTTON, &ui_img_100247398, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_START);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, -220);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "BOB-E STATUT");
    lv_label_set_recolor(ui_Label2, "true");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WLAN = lv_label_create(ui_START);
    lv_obj_set_width(ui_WLAN, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WLAN, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WLAN, -120);
    lv_obj_set_y(ui_WLAN, -190);
    lv_obj_set_align(ui_WLAN, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WLAN, "WLAN-0 :");
    lv_label_set_recolor(ui_WLAN, "true");
    lv_obj_set_style_text_color(ui_WLAN, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WLAN, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
/*
    ui_WLANIP = lv_label_create(ui_START);
    lv_obj_set_width(ui_WLANIP, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WLANIP, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WLANIP, -15);
    lv_obj_set_y(ui_WLANIP, -190);
    lv_obj_set_align(ui_WLANIP, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WLANIP, "XXX.XXX.XXX.XXX");
    lv_label_set_recolor(ui_WLANIP, "true");
    lv_obj_set_style_text_color(ui_WLANIP, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WLANIP, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ETHIP1 = lv_label_create(ui_START);
    lv_obj_set_width(ui_ETHIP1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ETHIP1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ETHIP1, -15);
    lv_obj_set_y(ui_ETHIP1, -170);
    lv_obj_set_align(ui_ETHIP1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ETHIP1, "XXX.XXX.XXX.XXX");
    lv_label_set_recolor(ui_ETHIP1, "true");
    lv_obj_set_style_text_color(ui_ETHIP1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ETHIP1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
*/
    ui_ETH = lv_label_create(ui_START);
    lv_obj_set_width(ui_ETH, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ETH, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ETH, -120);
    lv_obj_set_y(ui_ETH, -170);
    lv_obj_set_align(ui_ETH, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ETH, "ETH :");
    lv_label_set_recolor(ui_ETH, "true");
    lv_obj_set_style_text_color(ui_ETH, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ETH, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TIRETTE = lv_label_create(ui_START);
    lv_obj_set_width(ui_TIRETTE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TIRETTE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TIRETTE, -120);
    lv_obj_set_y(ui_TIRETTE, -120);
    lv_obj_set_align(ui_TIRETTE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TIRETTE, "TIRETTE :");
    lv_label_set_recolor(ui_TIRETTE, "true");
    lv_obj_set_style_text_color(ui_TIRETTE, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TIRETTE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMU = lv_label_create(ui_START);
    lv_obj_set_width(ui_IMU, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IMU, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IMU, -120);
    lv_obj_set_y(ui_IMU, -100);
    lv_obj_set_align(ui_IMU, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IMU, "IMU        :");
    lv_label_set_recolor(ui_IMU, "true");
    lv_obj_set_style_text_color(ui_IMU, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IMU, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LIDAR = lv_label_create(ui_START);
    lv_obj_set_width(ui_LIDAR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LIDAR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LIDAR, -120);
    lv_obj_set_y(ui_LIDAR, -80);
    lv_obj_set_align(ui_LIDAR, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LIDAR, "LIDAR    :");
    lv_label_set_recolor(ui_LIDAR, "true");
    lv_obj_set_style_text_color(ui_LIDAR, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LIDAR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SUIVIT = lv_label_create(ui_START);
    lv_obj_set_width(ui_SUIVIT, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SUIVIT, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SUIVIT, -120);
    lv_obj_set_y(ui_SUIVIT, -60);
    lv_obj_set_align(ui_SUIVIT, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SUIVIT, "SUIVIT   :");
    lv_label_set_recolor(ui_SUIVIT, "true");
    lv_obj_set_style_text_color(ui_SUIVIT, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SUIVIT, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PCA = lv_label_create(ui_START);
    lv_obj_set_width(ui_PCA, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PCA, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PCA, 45);
    lv_obj_set_y(ui_PCA, -120);
    lv_obj_set_align(ui_PCA, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PCA, "PCA      :");
    lv_label_set_recolor(ui_PCA, "true");
    lv_obj_set_style_text_color(ui_PCA, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PCA, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TIRETTESTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_TIRETTESTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TIRETTESTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TIRETTESTATE, -30);
    lv_obj_set_y(ui_TIRETTESTATE, -120);
    lv_obj_set_align(ui_TIRETTESTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TIRETTESTATE, "INACTIVE");
    lv_label_set_recolor(ui_TIRETTESTATE, "true");
    lv_obj_set_style_text_color(ui_TIRETTESTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TIRETTESTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMUSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_IMUSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IMUSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IMUSTATE, -30);
    lv_obj_set_y(ui_IMUSTATE, -100);
    lv_obj_set_align(ui_IMUSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IMUSTATE, "INACTIVE");
    lv_label_set_recolor(ui_IMUSTATE, "true");
    lv_obj_set_style_text_color(ui_IMUSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_IMUSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
/*
    ui_LIDARSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_LIDARSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LIDARSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LIDARSTATE, -30);
    lv_obj_set_y(ui_LIDARSTATE, -80);
    lv_obj_set_align(ui_LIDARSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LIDARSTATE, "INACTIVE");
    lv_label_set_recolor(ui_LIDARSTATE, "true");
    lv_obj_set_style_text_color(ui_LIDARSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LIDARSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
*/
    ui_SUIVITSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_SUIVITSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SUIVITSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SUIVITSTATE, -30);
    lv_obj_set_y(ui_SUIVITSTATE, -60);
    lv_obj_set_align(ui_SUIVITSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SUIVITSTATE, "INACTIVE");
    lv_label_set_recolor(ui_SUIVITSTATE, "true");
    lv_obj_set_style_text_color(ui_SUIVITSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SUIVITSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PCASTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_PCASTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PCASTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PCASTATE, 120);
    lv_obj_set_y(ui_PCASTATE, -120);
    lv_obj_set_align(ui_PCASTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PCASTATE, "INACTIVE");
    lv_label_set_recolor(ui_PCASTATE, "true");
    lv_obj_set_style_text_color(ui_PCASTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PCASTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CAPTD = lv_label_create(ui_START);
    lv_obj_set_width(ui_CAPTD, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CAPTD, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CAPTD, 45);
    lv_obj_set_y(ui_CAPTD, -100);
    lv_obj_set_align(ui_CAPTD, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CAPTD, "CAPTD :");
    lv_label_set_recolor(ui_CAPTD, "true");
    lv_obj_set_style_text_color(ui_CAPTD, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CAPTD, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CAPTD1 = lv_label_create(ui_START);
    lv_obj_set_width(ui_CAPTD1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CAPTD1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CAPTD1, 45);
    lv_obj_set_y(ui_CAPTD1, -80);
    lv_obj_set_align(ui_CAPTD1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CAPTD1, "CAPTG :");
    lv_label_set_recolor(ui_CAPTD1, "true");
    lv_obj_set_style_text_color(ui_CAPTD1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CAPTD1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UARTM = lv_label_create(ui_START);
    lv_obj_set_width(ui_UARTM, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UARTM, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_UARTM, 45);
    lv_obj_set_y(ui_UARTM, -60);
    lv_obj_set_align(ui_UARTM, LV_ALIGN_CENTER);
    lv_label_set_text(ui_UARTM, "UARTM:");
    lv_label_set_recolor(ui_UARTM, "true");
    lv_obj_set_style_text_color(ui_UARTM, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_UARTM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CAPTDSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_CAPTDSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CAPTDSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CAPTDSTATE, 120);
    lv_obj_set_y(ui_CAPTDSTATE, -100);
    lv_obj_set_align(ui_CAPTDSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CAPTDSTATE, "INACTIVE");
    lv_label_set_recolor(ui_CAPTDSTATE, "true");
    lv_obj_set_style_text_color(ui_CAPTDSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CAPTDSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CAPTGSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_CAPTGSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CAPTGSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CAPTGSTATE, 120);
    lv_obj_set_y(ui_CAPTGSTATE, -80);
    lv_obj_set_align(ui_CAPTGSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CAPTGSTATE, "INACTIVE");
    lv_label_set_recolor(ui_CAPTGSTATE, "true");
    lv_obj_set_style_text_color(ui_CAPTGSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CAPTGSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UARTMSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_UARTMSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UARTMSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_UARTMSTATE, 120);
    lv_obj_set_y(ui_UARTMSTATE, -60);
    lv_obj_set_align(ui_UARTMSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_UARTMSTATE, "INACTIVE");
    lv_label_set_recolor(ui_UARTMSTATE, "true");
    lv_obj_set_style_text_color(ui_UARTMSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_UARTMSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UARTC = lv_label_create(ui_START);
    lv_obj_set_width(ui_UARTC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UARTC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_UARTC, 45);
    lv_obj_set_y(ui_UARTC, -40);
    lv_obj_set_align(ui_UARTC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_UARTC, "UARTC:");
    lv_label_set_recolor(ui_UARTC, "true");
    lv_obj_set_style_text_color(ui_UARTC, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_UARTC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UARTCSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_UARTCSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UARTCSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_UARTCSTATE, 120);
    lv_obj_set_y(ui_UARTCSTATE, -40);
    lv_obj_set_align(ui_UARTCSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_UARTCSTATE, "INACTIVE");
    lv_label_set_recolor(ui_UARTCSTATE, "true");
    lv_obj_set_style_text_color(ui_UARTCSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_UARTCSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ROS = lv_label_create(ui_START);
    lv_obj_set_width(ui_ROS, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ROS, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ROS, -120);
    lv_obj_set_y(ui_ROS, -40);
    lv_obj_set_align(ui_ROS, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ROS, "ROS       :");
    lv_label_set_recolor(ui_ROS, "true");
    lv_obj_set_style_text_color(ui_ROS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ROS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ROSSTATE = lv_label_create(ui_START);
    lv_obj_set_width(ui_ROSSTATE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ROSSTATE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ROSSTATE, -30);
    lv_obj_set_y(ui_ROSSTATE, -40);
    lv_obj_set_align(ui_ROSSTATE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ROSSTATE, "INACTIVE");
    lv_label_set_recolor(ui_ROSSTATE, "true");
    lv_obj_set_style_text_color(ui_ROSSTATE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ROSSTATE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ROBOTCOLOR = lv_label_create(ui_START);
    lv_obj_set_width(ui_ROBOTCOLOR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ROBOTCOLOR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ROBOTCOLOR, -60);
    lv_obj_set_y(ui_ROBOTCOLOR, -10);
    lv_obj_set_align(ui_ROBOTCOLOR, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ROBOTCOLOR, "COULEUR DU MATCH:");
    lv_label_set_recolor(ui_ROBOTCOLOR, "true");
    lv_obj_set_style_text_color(ui_ROBOTCOLOR, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ROBOTCOLOR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
/*
    ui_COLOR = lv_label_create(ui_START);
    lv_obj_set_width(ui_COLOR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_COLOR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_COLOR, 70);
    lv_obj_set_y(ui_COLOR, -10);
    lv_obj_set_align(ui_COLOR, LV_ALIGN_CENTER);
    //lv_label_set_text(ui_COLOR, COULEUR); 
    lv_label_set_text(ui_COLOR, "AUCUNE");
    lv_label_set_recolor(ui_COLOR, "true");
    lv_obj_set_style_text_color(ui_COLOR, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_COLOR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
*/
    ui_COLORBLUE = lv_btn_create(ui_START);
    lv_obj_set_width(ui_COLORBLUE, 100);
    lv_obj_set_height(ui_COLORBLUE, 50);
    lv_obj_set_x(ui_COLORBLUE, -87);
    lv_obj_set_y(ui_COLORBLUE, 30);
    lv_obj_set_align(ui_COLORBLUE, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_COLORBLUE, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_COLORBLUE, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BLEU = lv_label_create(ui_START);
    lv_obj_set_width(ui_BLEU, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BLEU, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BLEU, -87);
    lv_obj_set_y(ui_BLEU, 29);
    lv_obj_set_align(ui_BLEU, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BLEU, "BLEU");

    ui_COLORYELLOW = lv_btn_create(ui_START);
    lv_obj_set_width(ui_COLORYELLOW, 100);
    lv_obj_set_height(ui_COLORYELLOW, 50);
    lv_obj_set_x(ui_COLORYELLOW, 60);
    lv_obj_set_y(ui_COLORYELLOW, 30);
    lv_obj_set_align(ui_COLORYELLOW, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_COLORYELLOW, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_COLORYELLOW, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_COLORYELLOW, lv_color_hex(0xBFC221), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_COLORYELLOW, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_YELLOW = lv_label_create(ui_START);
    lv_obj_set_width(ui_YELLOW, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_YELLOW, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_YELLOW, 60);
    lv_obj_set_y(ui_YELLOW, 29);
    lv_obj_set_align(ui_YELLOW, LV_ALIGN_CENTER);
    lv_label_set_text(ui_YELLOW, "JAUNE");

    ui_ImgButton2 = lv_imgbtn_create(ui_START);
    lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_pngegg_png, NULL);
    lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_pngegg_png, NULL);
    lv_obj_set_height(ui_ImgButton2, 64);
    lv_obj_set_width(ui_ImgButton2, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_x(ui_ImgButton2, 0);
    lv_obj_set_y(ui_ImgButton2, 180);
    lv_obj_set_align(ui_ImgButton2, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_STARTBUTTON, ui_event_STARTBUTTON, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_COLORBLUE, ui_event_COLORBLUE, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_COLORYELLOW, ui_event_COLORYELLOW, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ImgButton2, ui_event_ImgButton2, LV_EVENT_ALL, NULL);

}
void ui_STRATEGIE_screen_init(void)
{
    ui_STRATEGIE = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_STRATEGIE, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_STRATEGIE, lv_color_hex(0x626162), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_STRATEGIE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_STARTBUTTON1 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STARTBUTTON1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_100247398, NULL);
    lv_imgbtn_set_src(ui_STARTBUTTON1, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_100247398, NULL);
    lv_obj_set_width(ui_STARTBUTTON1, 128);
    lv_obj_set_height(ui_STARTBUTTON1, 128);
    lv_obj_set_x(ui_STARTBUTTON1, 80);
    lv_obj_set_y(ui_STARTBUTTON1, 180);
    lv_obj_set_align(ui_STARTBUTTON1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_STARTBUTTON1, &ui_img_100247398, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BACKBUTTON = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_BACKBUTTON, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_back_png, NULL);
    lv_imgbtn_set_src(ui_BACKBUTTON, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_back_png, NULL);
    lv_obj_set_height(ui_BACKBUTTON, 64);
    lv_obj_set_width(ui_BACKBUTTON, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_BACKBUTTON, -80);
    lv_obj_set_y(ui_BACKBUTTON, 180);
    lv_obj_set_align(ui_BACKBUTTON, LV_ALIGN_CENTER);

    ui_STRATIMAGE = lv_img_create(ui_STRATEGIE);
    lv_img_set_src(ui_STRATIMAGE, &ui_img_1204001689);
    lv_obj_set_width(ui_STRATIMAGE, LV_SIZE_CONTENT);   /// 300
    lv_obj_set_height(ui_STRATIMAGE, LV_SIZE_CONTENT);    /// 210
    lv_obj_set_x(ui_STRATIMAGE, 0);
    lv_obj_set_y(ui_STRATIMAGE, 25);
    lv_obj_set_align(ui_STRATIMAGE, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_STRATIMAGE, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_STRATIMAGE, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_STRAT1 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STRAT1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1_png, NULL);
    lv_imgbtn_set_src(ui_STRAT1, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1_png, NULL);
    lv_obj_set_height(ui_STRAT1, 64);
    lv_obj_set_width(ui_STRAT1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_STRAT1, -120);
    lv_obj_set_y(ui_STRAT1, -200);
    lv_obj_set_align(ui_STRAT1, LV_ALIGN_CENTER);

    ui_STRAT2 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STRAT2, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_2_png, NULL);
    lv_imgbtn_set_src(ui_STRAT2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_2_png, NULL);
    lv_obj_set_height(ui_STRAT2, 64);
    lv_obj_set_width(ui_STRAT2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_STRAT2, -40);
    lv_obj_set_y(ui_STRAT2, -200);
    lv_obj_set_align(ui_STRAT2, LV_ALIGN_CENTER);

    ui_STRAT3 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STRAT3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_3_png, NULL);
    lv_imgbtn_set_src(ui_STRAT3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_3_png, NULL);
    lv_obj_set_height(ui_STRAT3, 64);
    lv_obj_set_width(ui_STRAT3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_STRAT3, 40);
    lv_obj_set_y(ui_STRAT3, -200);
    lv_obj_set_align(ui_STRAT3, LV_ALIGN_CENTER);

    ui_STRAT4 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STRAT4, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_4_png, NULL);
    lv_imgbtn_set_src(ui_STRAT4, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_4_png, NULL);
    lv_obj_set_height(ui_STRAT4, 64);
    lv_obj_set_width(ui_STRAT4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_STRAT4, 120);
    lv_obj_set_y(ui_STRAT4, -200);
    lv_obj_set_align(ui_STRAT4, LV_ALIGN_CENTER);

    ui_STRAT5 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STRAT5, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_5_png, NULL);
    lv_imgbtn_set_src(ui_STRAT5, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_5_png, NULL);
    lv_obj_set_height(ui_STRAT5, 64);
    lv_obj_set_width(ui_STRAT5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_STRAT5, -80);
    lv_obj_set_y(ui_STRAT5, -120);
    lv_obj_set_align(ui_STRAT5, LV_ALIGN_CENTER);

    ui_STRAT6 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STRAT6, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_6_png, NULL);
    lv_imgbtn_set_src(ui_STRAT6, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_6_png, NULL);
    lv_obj_set_height(ui_STRAT6, 64);
    lv_obj_set_width(ui_STRAT6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_STRAT6, 0);
    lv_obj_set_y(ui_STRAT6, -120);
    lv_obj_set_align(ui_STRAT6, LV_ALIGN_CENTER);

    ui_STRAT7 = lv_imgbtn_create(ui_STRATEGIE);
    lv_imgbtn_set_src(ui_STRAT7, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_7_png, NULL);
    lv_imgbtn_set_src(ui_STRAT7, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_7_png, NULL);
    lv_obj_set_height(ui_STRAT7, 64);
    lv_obj_set_width(ui_STRAT7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_STRAT7, 80);
    lv_obj_set_y(ui_STRAT7, -120);
    lv_obj_set_align(ui_STRAT7, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_STARTBUTTON1, ui_event_STARTBUTTON1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BACKBUTTON, ui_event_BACKBUTTON, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_STRAT1, ui_event_STRAT1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_STRAT2, ui_event_STRAT2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_STRAT3, ui_event_STRAT3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_STRAT4, ui_event_STRAT4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_STRAT5, ui_event_STRAT5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_STRAT6, ui_event_STRAT6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_STRAT7, ui_event_STRAT7, LV_EVENT_ALL, NULL);

}
void ui_MATCH_screen_init(void)
{
    ui_MATCH = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MATCH, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MATCH, lv_color_hex(0x626162), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MATCH, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_MATCH);
    lv_img_set_src(ui_Image2, &ui_img_256_png);
    lv_obj_set_width(ui_Image2, 256);
    lv_obj_set_height(ui_Image2, 212);
    lv_obj_set_x(ui_Image2, 0);
    lv_obj_set_y(ui_Image2, -120);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SCORE = lv_label_create(ui_MATCH);
    lv_obj_set_width(ui_SCORE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SCORE, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SCORE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SCORE, "SCORE :");
    lv_obj_set_style_text_color(ui_SCORE, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SCORE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SCORE, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SCOREVALUE = lv_label_create(ui_MATCH);
    lv_obj_set_width(ui_SCOREVALUE, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SCOREVALUE, LV_SIZE_CONTENT);    /// 5
    lv_obj_set_x(ui_SCOREVALUE, 0);
    lv_obj_set_y(ui_SCOREVALUE, 50);
    lv_obj_set_align(ui_SCOREVALUE, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SCOREVALUE, "000000");
    lv_obj_set_style_text_color(ui_SCOREVALUE, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SCOREVALUE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_SCOREVALUE, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_SCOREVALUE, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_SCOREVALUE, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_SCOREVALUE, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SCOREVALUE, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SCOREVALUE, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SCOREVALUE, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgButton1 = lv_imgbtn_create(ui_MATCH);
    lv_imgbtn_set_src(ui_ImgButton1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_pngwing_com_png, NULL);
    lv_imgbtn_set_src(ui_ImgButton1, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_pngwing_com_png, NULL);
    lv_obj_set_height(ui_ImgButton1, 64);
    lv_obj_set_width(ui_ImgButton1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_ImgButton1, 0);
    lv_obj_set_y(ui_ImgButton1, 150);
    lv_obj_set_align(ui_ImgButton1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_ImgButton1, &ui_img_pngwing_com_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ImgButton1, ui_event_ImgButton1, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_START_screen_init();
    ui_STRATEGIE_screen_init();
    ui_MATCH_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_START);
}
