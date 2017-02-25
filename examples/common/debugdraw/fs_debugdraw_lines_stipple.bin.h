static const uint8_t fs_debugdraw_lines_stipple_glsl[235] =
{
	0x46, 0x53, 0x48, 0x04, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x76, 0x61, // FSH...Z.......va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // rying highp vec4
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, //  v_color0;.varyi
	0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, // ng highp float v
	0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, // _stipple;.void m
	0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // ain ().{.  highp
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, //  float tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x66, // .  tmpvar_1 = (f
	0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6d, 0x6f, 0x64, 0x20, 0x28, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, // loat(mod (v_stip
	0x70, 0x6c, 0x65, 0x2c, 0x20, 0x30, 0x2e, 0x32, 0x35, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // ple, 0.25)));.  
	0x69, 0x66, 0x20, 0x28, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x3c, 0x20, 0x74, 0x6d, 0x70, // if ((0.125 < tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, // var_1)) {.    di
	0x73, 0x63, 0x61, 0x72, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // scard;.  };.  gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, // _FragColor = v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // olor0;.}...
};
static const uint8_t fs_debugdraw_lines_stipple_spv[1201] =
{
	0x46, 0x53, 0x48, 0x04, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0xa4, 0x04, 0x03, 0x02, 0x23, 0x07, // FSH...Z.......#.
	0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0xe8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........>......
	0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, // GLSL.std.450....
	0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, // ....B...........
	0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, // B...........`...
	0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, // $Global.....`...
	0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, // ....u_viewRect..
	0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, // ....`.......u_vi
	0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // ewTexel.....`...
	0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, // ....u_view......
	0x60, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, // `.......u_invVie
	0x77, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // w.......`.......
	0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, // u_proj......`...
	0x05, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, // ....u_invProj...
	0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, // ....`.......u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x60, 0x01, 0x00, 0x00, // ewProj......`...
	0x07, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // ....u_invViewPro
	0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // j.......`.......
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x60, 0x01, 0x00, 0x00, // u_model.....`...
	0x09, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, // ....u_modelView.
	0x06, 0x00, 0x07, 0x00, 0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, // ....`.......u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, // delViewProj.....
	0x60, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, // `.......u_alphaR
	0x65, 0x66, 0x34, 0x00, 0x47, 0x00, 0x04, 0x00, 0x9f, 0x05, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // ef4.G...........
	0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // @...H...`.......
	0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #.......H...`...
	0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ....#.......H...
	0x60, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // `.......#... ...
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #...`...H...`...
	0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, // `.......#.......
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #.......H...`...
	0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, // `.......#... ...
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #...`...H...`...
	0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, // `.......#.......
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x60, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...`.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, // #.......H...`...
	0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // `...........H...
	0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, // `.......#.......
	0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...`...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x60, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, // ....H...`.......
	0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x60, 0x01, 0x00, 0x00, // #... ...G...`...
	0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, // ............!...
	0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, //  ...............
	0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // ........e.......
	0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ............ ...
	0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, // ....+.......j...
	0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x9f, 0x05, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, //  ...........e...
	0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0e, 0x00, 0x60, 0x01, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, // j.......`.......
	0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, // ....e...e...e...
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x9f, 0x05, 0x00, 0x00, // e...e...e.......
	0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, // e...e.......6...
	0x08, 0x00, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, // ....B...........
	0xf8, 0x00, 0x02, 0x00, 0xe7, 0x3e, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, // .....>......8...
	0x00,                                                                                           // .
};
static const uint8_t fs_debugdraw_lines_stipple_dx9[297] =
{
	0x46, 0x53, 0x48, 0x04, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x03, 0xff, 0xff, // FSH...Z.........
	0xfe, 0xff, 0x14, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // ....CTAB....#...
	0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, // ader Compiler 10
	0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, // .1..Q..........@
	0x00, 0x00, 0x80, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x05, // ...>...>....Q...
	0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, // ................
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x01, 0x90, 0x05, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x13, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, // ..U.............
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0xa1, 0x01, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x03, // ......U.........
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0xaa, 0xa0, 0x58, 0x00, 0x00, 0x04, // ............X...
	0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x55, 0xa0, // ..............U.
	0x41, 0x00, 0x00, 0x01, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, // A...............
	0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                                           // .........
};
static const uint8_t fs_debugdraw_lines_stipple_dx11[440] =
{
	0x46, 0x53, 0x48, 0x04, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0xa8, 0x01, 0x44, 0x58, 0x42, 0x43, // FSH...Z.....DXBC
	0x6f, 0x8f, 0x64, 0x39, 0xd9, 0xef, 0xc7, 0x09, 0x59, 0xdc, 0x77, 0x5a, 0xe8, 0x91, 0x4c, 0x16, // o.d9....Y.wZ..L.
	0x01, 0x00, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ............,...
	0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, // ........ISGNl...
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........b.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, // SV_POSITION.COLO
	0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, // R.TEXCOORD..OSGN
	0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ,........... ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, // ....SV_TARGET...
	0x53, 0x48, 0x44, 0x52, 0xcc, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, // SHDR....@...3...
	0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, // b...........b...
	0x12, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // ........e.... ..
	0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, // ....h.......8...
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x41, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, // .@.....@A.......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, // ............2...
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, // ............A...
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3e, 0x0a, 0x10, 0x10, 0x00, // .....@.....>....
	0x02, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....1...........
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // .@.....>........
	0x0d, 0x00, 0x04, 0x03, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ............6...
	0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // . ......F.......
	0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,                                                 // >.......
};
static const uint8_t fs_debugdraw_lines_stipple_mtl[555] =
{
	0x46, 0x53, 0x48, 0x04, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x1c, 0x02, 0x00, 0x00, 0x75, 0x73, // FSH...Z.......us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // tal;.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, // MtlShaderInput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .  float4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, 0x5f, 0x73, 0x74, // r0;.  float v_st
	0x69, 0x70, 0x70, 0x6c, 0x65, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // ipple;.};.struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, //  xlatMtlShaderOu
	0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // tput {.  float4 
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, // gl_FragColor;.};
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // .struct xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x7d, // haderUniform {.}
	0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // ;.fragment xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, // tlShaderOutput x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, // latMtlMain (xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, // MtlShaderInput _
	0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, // mtl_i [[stage_in
	0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, // ]], constant xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // tMtlShaderUnifor
	0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, // m& _mtl_u [[buff
	0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, // er(0)]]).{.  xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  _mtl_o;.  float
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, //  tmpvar_1 = 0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x66, 0x6c, 0x6f, //  tmpvar_1 = (flo
	0x61, 0x74, 0x28, 0x66, 0x6d, 0x6f, 0x64, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, // at(fmod (_mtl_i.
	0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x2c, 0x20, 0x30, 0x2e, 0x32, 0x35, 0x29, // v_stipple, 0.25)
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, // ));.  if ((0.125
	0x20, 0x3c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, //  < tmpvar_1)) {.
	0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, 0x5f, 0x66, 0x72, 0x61, 0x67, //     discard_frag
	0x6d, 0x65, 0x6e, 0x74, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x5f, // ment();.  };.  _
	0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, // mtl_o.gl_FragCol
	0x6f, 0x72, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x63, 0x6f, // or = _mtl_i.v_co
	0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, // lor0;.  return _
	0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // mtl_o;.}...
};
extern const uint8_t* fs_debugdraw_lines_stipple_pssl;
extern const uint32_t fs_debugdraw_lines_stipple_pssl_size;
