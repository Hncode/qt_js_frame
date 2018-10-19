QT += core gui
QT += webenginewidgets
QT += webengine

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET =qt_js_frame


# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    gui/init.cpp \
    interface/i_compressor.cpp \
    interface/i_decompressor.cpp \
    interface/i_gtz_gui_event.cpp \
    base_dialog.cpp \
    gtz_gui.cpp \
    js_callback.cpp




HEADERS += \
    gtz_gui.h \
    interface/i_compressor.h \
    interface/i_decompressor.h \
    js_callback.h \
    interface/i_gtz_gui_event.h \
    base_dialog.h \
    interface/i_compressor.h \
    interface/i_decompressor.h \
    interface/i_gtz_gui_event.h \
    base_dialog.h \
    gtz_gui.h \
    js_callback.h \
    ui_container.h


#LIBS +=libboost_system

DISTFILES += \
    html/Sublime_Text_files/linux.js \
    html/test_web_files/s_data/adClosefeedbackUpgrade.js \
    html/test_web_files/s_data_004/adClosefeedbackUpgrade.js \
    html/test_web_files/s_data_006/anticheat.js \
    html/test_web_files/s_data_006/common.js \
    html/test_web_files/s_data_006/feedbackPC.js \
    html/test_web_files/s_data_006/logoIsShowEvents_1.js \
    html/test_web_files/s_data_006/oojs.js \
    html/test_web_files/s_data_006/winnotice.js \
    html/test_web_files/52b5334.js \
    html/test_web_files/apiaccept.js \
    html/test_web_files/avneunkwb.js \
    html/test_web_files/baidu_opensug-1.js \
    html/test_web_files/baidu_search-1.js \
    html/test_web_files/chart.js \
    html/test_web_files/common-a4f198c74c.js \
    html/test_web_files/content_toolbar.js \
    html/test_web_files/detail-518da8bacf.js \
    html/test_web_files/ds.js \
    html/test_web_files/ecfm.js \
    html/test_web_files/ecfm_002.js \
    html/test_web_files/ecfm_003.js \
    html/test_web_files/goTop-v1.js \
    html/test_web_files/hm.js \
    html/test_web_files/iconfont.js \
    html/test_web_files/idvveasfs.js \
    html/test_web_files/jquery-1.js \
    html/test_web_files/lgyyovfyh.js \
    html/test_web_files/main-1.js \
    html/test_web_files/MathJax.js \
    html/test_web_files/mhzzjepzz.js \
    html/test_web_files/mvf_news_feed.js \
    html/test_web_files/ojbflgrbf.js \
    html/test_web_files/os.js \
    html/test_web_files/paging.js \
    html/test_web_files/pc_wap_common-93244aa03c.js \
    html/test_web_files/pkcgstjjm.js \
    html/test_web_files/pr.js \
    html/test_web_files/publib_footer-1.js \
    html/test_web_files/sandalstrap.js \
    html/test_web_files/sdk-csdn-smallflow.js \
    html/test_web_files/share.js \
    html/test_web_files/skin3-template-73eea35575.js \
    html/test_web_files/tingyun-rum-blog.js \
    html/test_web_files/track.js \
    html/test_web_files/uoswkd.js \
    html/test_web_files/widget2chart.js \
    html/qwebchannel.js \
    html/test_web_files/web15.xml \
    html/test_web_files/ecfm_data/adx.gif \
    html/test_web_files/ecfm_data_002/adx.gif \
    html/test_web_files/ecfm_data_003/adx.gif \
    html/test_web_files/s_data/adx.gif \
    html/test_web_files/s_data_002/adx.gif \
    html/test_web_files/s_data_003/adx.gif \
    html/test_web_files/s_data_004/adx.gif \
    html/test_web_files/s_data_005/adx.gif \
    html/test_web_files/0_1313549507k820.gif \
    html/test_web_files/0_1313549658K886.gif \
    html/test_web_files/0_1313549681EC33.gif \
    html/test_web_files/0_131354974416Fq.gif \
    html/test_web_files/0_1313550537TP6A.gif \
    html/test_web_files/0_13135505715EVl.gif \
    html/test_web_files/3_a724699769.gif \
    html/test_web_files/3_cherish1forever.gif \
    html/test_web_files/3_e5max.gif \
    html/test_web_files/3_forget_start.gif \
    html/test_web_files/3_liuyez123.gif \
    html/test_web_files/3_wei_yang_ju.gif \
    html/test_web_files/3_zhangbinsijifeng.gif \
    html/test_web_files/feedLoading.gif \
    html/test_web_files/a_data_002/image.jpeg \
    html/test_web_files/a_data_003/image.jpeg \
    html/test_web_files/ecfm_data/u11917140771294748732fm76.jpeg \
    html/test_web_files/ecfm_data_002/u4398140943218006628fm76.jpeg \
    html/test_web_files/s_data_002/u20399170433020084289fm76.jpeg \
    html/test_web_files/s_data_002/u3074057154157728081fm76.jpeg \
    html/test_web_files/s_data_002/u33344535274077871420fm76.jpeg \
    html/test_web_files/s_data_002/u3932588063345785273fm76.jpeg \
    html/test_web_files/s_data_002/u39992600814172311933fm76.jpeg \
    html/test_web_files/s_data_002/u5632218913780550972fm76.jpeg \
    html/test_web_files/s_data_002/u8895899744232402981fm76.jpeg \
    html/test_web_files/s_data_003/u14972470982092531151fm76.jpeg \
    html/test_web_files/s_data_003/u16417295721221782005fm76.jpeg \
    html/test_web_files/s_data_003/u21966390253270503487fm76.jpeg \
    html/test_web_files/s_data_003/u31140796544144996528fm76.jpeg \
    html/test_web_files/s_data_003/u3786397394213723297fm76.jpeg \
    html/test_web_files/s_data_003/u39415101254074363933fm76.jpeg \
    html/test_web_files/s_data_003/u39596821661027104032fm76.jpeg \
    html/test_web_files/s_data_003/u9010643662249461fm76.jpeg \
    html/test_web_files/s_data_005/u3187437712432328752fm76.jpeg \
    html/test_web_files/s_data_005/u36564678413694925412fm76.jpeg \
    html/test_web_files/s_data_005/u42016636591875170548fm76.jpeg \
    html/test_web_files/s_data_005/u5473531863342165784fm76.jpeg \
    html/test_web_files/s_data_005/u574985193338759863fm76.jpeg \
    html/test_web_files/s_data_005/u6924101713946111409fm76.jpeg \
    html/test_web_files/s_data_006/0f000AjEby7H72E2oX7DD0.jpg \
    html/test_web_files/100x100.jpg \
    html/test_web_files/3_a912293097.jpg \
    html/test_web_files/3_addfourliu.jpg \
    html/test_web_files/3_chy555chy.jpg \
    html/test_web_files/3_fengerye.jpg \
    html/test_web_files/3_goldenhawking.jpg \
    html/test_web_files/3_guxch.jpg \
    html/test_web_files/3_hanshuobest.jpg \
    html/test_web_files/3_jianwei1019.jpg \
    html/test_web_files/3_jklfjsdj79hiofo.jpg \
    html/test_web_files/3_liulihuo_gyh.jpg \
    html/test_web_files/3_luozirong.jpg \
    html/test_web_files/3_lxj_com2006.jpg \
    html/test_web_files/3_m0_38130980.jpg \
    html/test_web_files/3_me_badman.jpg \
    html/test_web_files/3_messicr7.jpg \
    html/test_web_files/3_mywcyfl.jpg \
    html/test_web_files/3_newborad.jpg \
    html/test_web_files/3_nihao0526.jpg \
    html/test_web_files/3_qiyei2009.jpg \
    html/test_web_files/3_qq_28684963.jpg \
    html/test_web_files/3_qzxsy1.jpg \
    html/test_web_files/3_sharetm.jpg \
    html/test_web_files/3_styyzxjq2009.jpg \
    html/test_web_files/3_tujiaw.jpg \
    html/test_web_files/3_u010661782.jpg \
    html/test_web_files/3_xiaopei_yan.jpg \
    html/test_web_files/3_xiaozhupiggg.jpg \
    html/test_web_files/3_xujiali5172923.jpg \
    html/test_web_files/3_yy64578537.jpg \
    html/test_web_files/3_zdpyly21.jpg \
    html/test_web_files/lang19.jpg \
    html/test_web_files/mobile31.jpg \
    html/test_web_files/web10.jpg \
    html/test_web_files/web11.jpg \
    html/test_web_files/web14.jpg \
    html/test_web_files/web16.jpg \
    html/test_web_files/web17.jpg \
    html/test_web_files/web18.jpg \
    html/test_web_files/web19.jpg \
    html/test_web_files/web20.jpg \
    html/test_web_files/web22.jpg \
    html/test_web_files/web23.jpg \
    html/test_web_files/web4.jpg \
    html/test_web_files/web6.jpg \
    html/test_web_files/web7.jpg \
    html/Sublime_Text_files/linux_title_bar.png \
    html/test_web_files/25972629_data/0f000KOnAr0FMTTtZQiev0.png \
    html/test_web_files/s_data_003/pixel.png \
    html/test_web_files/s_data_006/bd_logo.png \
    html/test_web_files/csdn_cs_qr.png \
    html/Sublime_Text_files/logo.svg \
    html/Sublime_Text_files/right.svg \
    html/test_web_files/rar.svg \
    html/test_web_files/unkonw.svg \
    html/Sublime_Text_files/css.css \
    html/Sublime_Text_files/sublime_v3.css \
    html/test_web_files/a_data_003/stream.css \
    html/test_web_files/s_data_005/ui_b99a586.css \
    html/test_web_files/s_data_006/template.css \
    html/test_web_files/atom-one-dark.css \
    html/test_web_files/blog_code-c3a0c33d5c.css \
    html/test_web_files/chart-3456820cac.css \
    html/test_web_files/chart.css \
    html/test_web_files/ck_htmledit_views-e2445db1a8.css \
    html/test_web_files/content_toolbar.css \
    html/test_web_files/detail-23915aa032.css \
    html/test_web_files/goTop.css \
    html/test_web_files/paging.css \
    html/test_web_files/pub_footer_1.css \
    html/test_web_files/sandalstrap.css \
    html/test_web_files/share_style0_16.css \
    html/test_web_files/skin3-template-8195ccbe2d.css \
    html/test_web_files/25972629.html \
    html/test_web_files/a.html \
    html/test_web_files/a_002.html \
    html/test_web_files/a_003.html \
    html/test_web_files/a_004.html \
    html/test_web_files/ecfm.html \
    html/test_web_files/ecfm_002.html \
    html/test_web_files/ecfm_003.html \
    html/test_web_files/s.html \
    html/test_web_files/s_002.html \
    html/test_web_files/s_003.html \
    html/test_web_files/s_004.html \
    html/test_web_files/s_005.html \
    html/test_web_files/s_006.html \
    html/backup_gtz_gui_drag_drop.html \
    html/gtz_gui.html \
    html/select_file_hint.html
