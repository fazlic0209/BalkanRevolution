#pragma tabsize 0
#if defined _banka_mapa_included
    #endinput
#endif
#define _banka_mapa_included

#include <a_samp>

new BankaVrata[2];
new BankaLaseri[11];
new BankaTrezorVrata;

stock UcitajBankuMapu()
{
//Map Exported with Texture Studio By: [uL]Pottus////////////////////////////////////////////////////////////////
//////////////////////////////////////////////and Crayder////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Map Information////////////////////////////////////////////////////////////////////////////////////////////////
/*
	Exported on "2018-12-13 14:38:53" by "Rile"
	Created by "Rile"
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Objects////////////////////////////////////////////////////////////////////////////////////////////////////////
new tmpobjid;
tmpobjid = CreateObject(19377, 154.742401, 1702.590576, 0.095499, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19370, 154.710006, 1702.720214, -0.108400, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 1557, "dave_door_2b", "miragedoor1_256", 0x00000000);
tmpobjid = CreateObject(19377, 149.341094, 1702.826660, -1.944499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19377, 138.856033, 1702.835083, -1.944499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19370, 143.760192, 1705.762817, -0.168400, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19370, 143.760208, 1699.369873, -0.178399, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19428, 143.770278, 1702.553222, 1.772529, 90.900039, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 150.006744, 1707.352905, 0.043460, -0.600000, 0.000000, 90.600028, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 148.507019, 1707.333251, 0.027750, -0.600000, 0.000000, 90.600028, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 148.606491, 1697.880615, 0.027750, -0.600000, 0.000000, 90.600028, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 149.936294, 1697.896240, 0.041680, -0.600000, 0.000000, 90.600028, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 143.752365, 1712.071655, -0.164499, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 139.029037, 1713.509887, -0.210292, -0.600000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 134.242706, 1711.951660, -0.264499, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 138.856033, 1712.207153, -1.934499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19377, 128.495971, 1702.845092, -1.934499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19377, 128.496414, 1712.207153, -1.944499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19377, 129.505706, 1713.570190, -0.281292, -0.200000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 124.512664, 1711.861694, -0.154499, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 143.752365, 1693.079345, -0.174500, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 128.495971, 1693.250976, -1.944499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19377, 138.846038, 1693.263793, -1.954499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19370, 136.297515, 1707.258544, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 1649, "wglass", "carshowwin2", 0x00000000);
tmpobjid = CreateObject(19370, 142.072113, 1707.425415, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 1649, "wglass", "carshowwin2", 0x00000000);
tmpobjid = CreateObject(19428, 139.028564, 1707.369750, 1.735499, 90.000000, 0.000000, -87.500000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19370, 132.076553, 1707.185668, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 1649, "wglass", "carshowwin2", 0x00000000);
tmpobjid = CreateObject(19370, 126.205772, 1707.138793, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 1649, "wglass", "carshowwin2", 0x00000000);
tmpobjid = CreateObject(19428, 129.410202, 1707.122070, 1.584400, 90.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 139.012100, 1688.354003, -0.134499, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 129.417800, 1688.358032, -0.134499, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 119.776260, 1707.133422, -0.134499, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 119.771743, 1702.888671, -1.944499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19377, 118.002471, 1693.259765, -1.944499, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14387, "dr_gsnew", "mp_gs_kitchfloor", 0x00000000);
tmpobjid = CreateObject(19385, 119.848297, 1688.350341, -0.140599, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19370, 123.052856, 1688.355346, -0.138400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19370, 116.641197, 1688.350219, -0.138400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 115.007499, 1693.070556, -0.134499, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 115.003730, 1702.613281, -0.134499, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14808, "lee_strip2", "strip_wall", 0x00000000);
tmpobjid = CreateObject(19377, 119.567413, 1693.055541, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(18980, 122.385536, 1703.953369, -1.099900, 0.000000, 90.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 18996, "mattextures", "wood020", 0x00000000);
tmpobjid = CreateObject(18980, 134.198059, 1707.215942, -4.860099, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 19058, "xmasboxes", "silk5-128x128", 0x00000000);
tmpobjid = CreateObject(18980, 143.389602, 1688.697753, -4.860099, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 19058, "xmasboxes", "silk5-128x128", 0x00000000);
tmpobjid = CreateObject(18980, 122.404876, 1703.958862, -1.439900, 0.000000, 90.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 18996, "mattextures", "wood020", 0x00000000);
tmpobjid = CreateObject(19428, 122.463386, 1705.442138, -0.602100, 0.000000, 90.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19428, 122.459083, 1701.989379, -0.602100, 0.000000, 90.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19428, 122.450447, 1698.520507, -0.602100, 0.000000, 90.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19428, 122.448348, 1695.050048, -0.602100, 0.000000, 90.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19428, 122.443389, 1692.890014, -0.602100, 0.000000, 90.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19087, 122.680732, 1695.836914, 1.924900, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, -1, "none", "none", 0xFF000000);
tmpobjid = CreateObject(19087, 122.685111, 1700.945312, 1.924900, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, -1, "none", "none", 0xFF000000);
tmpobjid = CreateObject(19370, 122.601699, 1698.658325, 0.911600, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
SetObjectMaterialText(tmpobjid, "SALTER 2", 0, 100, "Ariel", 60, 0, 0xFFFFFFFF, 0x00000000, 1);
tmpobjid = CreateObject(19370, 122.564292, 1697.428222, 2.131599, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19370, 122.567863, 1700.615844, 2.131599, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19370, 122.567588, 1703.781127, 2.131599, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19370, 122.559913, 1706.922485, 2.131599, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19370, 122.598457, 1692.906982, 2.131599, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19087, 122.717613, 1691.386108, 1.924900, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, -1, "none", "none", 0xFF000000);
tmpobjid = CreateObject(19087, 122.800491, 1706.866943, 1.924900, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, -1, "none", "none", 0xFF000000);
tmpobjid = CreateObject(19428, 120.552902, 1700.981567, -1.522099, 90.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14652, "ab_trukstpa", "wood01", 0x00000000);
tmpobjid = CreateObject(19428, 120.585662, 1695.888793, -1.522099, 90.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 14652, "ab_trukstpa", "wood01", 0x00000000);
tmpobjid = CreateObject(19428, 148.089630, 1706.778930, -1.572499, 0.899999, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 18800, "mroadhelix1", "concreteoldpainted1", 0x00000000);
tmpobjid = CreateObject(19428, 150.580718, 1706.823608, -1.572499, 0.899999, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 18800, "mroadhelix1", "concreteoldpainted1", 0x00000000);
tmpobjid = CreateObject(19428, 151.297363, 1698.476928, -1.572499, 0.899999, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 18800, "mroadhelix1", "concreteoldpainted1", 0x00000000);
tmpobjid = CreateObject(19428, 148.634643, 1698.370117, -1.572499, 0.899999, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 18800, "mroadhelix1", "concreteoldpainted1", 0x00000000);
tmpobjid = CreateObject(19377, 119.566703, 1702.625244, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 129.928680, 1702.689819, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 129.908172, 1693.141601, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 140.324890, 1693.088623, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 140.370773, 1702.682006, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 149.840026, 1702.612548, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 139.876647, 1711.943359, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(19377, 129.528121, 1712.107055, 1.575500, 0.000000, 90.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3442, "vegashse4", "Est_corridor_ceiling", 0x00000000);
tmpobjid = CreateObject(1232, 129.254867, 1710.018188, 3.962300, 180.000000, 0.000000, -4.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 3267, "milbase", "lightblue_64", 0x00000000);
tmpobjid = CreateObject(19428, 123.989402, 1695.842285, -2.342099, 129.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19428, 124.014396, 1700.897094, -2.342099, 129.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19370, 122.591598, 1694.267211, 2.131599, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
tmpobjid = CreateObject(19370, 122.601699, 1704.070678, 0.911600, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
SetObjectMaterialText(tmpobjid, "SALTER 3", 0, 100, "Ariel", 60, 0, 0xFFFFFFFF, 0x00000000, 1);
tmpobjid = CreateObject(19370, 126.203102, 1707.008911, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterialText(tmpobjid, "MOJ", 0, 100, "Calibri", 60, 0, 0xFFFFFFFF, 0x00000000, 1);
tmpobjid = CreateObject(19370, 132.180435, 1707.086791, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterialText(tmpobjid, "BANKAR", 0, 100, "Engravers MT", 60, 0, 0xFFFFFFFF, 0x00000000, 1);
tmpobjid = CreateObject(19370, 136.228927, 1707.127929, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterialText(tmpobjid, "MOJ", 0, 100, "Ariel", 60, 0, 0xFFFFFFFF, 0x00000000, 1);
tmpobjid = CreateObject(19370, 142.111831, 1707.365112, -0.108400, 0.000000, 0.000000, 90.000000, 300.00); 
SetObjectMaterialText(tmpobjid, "BANKAR", 0, 100, "Ariel", 60, 0, 0xFFFFFFFF, 0x00000000, 1);
tmpobjid = CreateObject(19370, 122.591598, 1694.267211, 2.131599, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
SetObjectMaterialText(tmpobjid, "SALTER 1", 0, 60, "Ariel", 20, 0, 0xFFFFFFFF, 0x00000000, 0);
tmpobjid = CreateObject(19370, 122.601699, 1693.817016, 0.911600, 0.000000, 0.000000, 0.000000, 300.00); 
SetObjectMaterial(tmpobjid, 0, 10101, "2notherbuildsfe", "Bow_Abpave_Gen", 0x00000000);
SetObjectMaterialText(tmpobjid, "SALTER 1", 0, 100, "Ariel", 60, 0, 0xFFFFFFFF, 0x00000000, 1);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
tmpobjid = CreateObject(14576, 116.192062, 1703.058593, -6.240699, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1536, 121.882202, 1685.750976, -67734.000000, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(19366, 121.935096, 1686.605224, -5.053100, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19366, 120.216987, 1688.377197, -5.053100, 0.000000, 0.000000, 90.000000, 300.00); 
BankaVrata[0] = CreateObject(19302, 115.434486, 1690.312866, -13.214599, 0.000000, 0.000000, 0.000000, 300.00); 
BankaVrata[1] = CreateObject(19302, 117.156379, 1690.316406, -13.214599, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(19304, 116.273902, 1690.353759, -11.414999, 0.000000, 0.000000, 0.000000, 300.00); 
BankaTrezorVrata = CreateObject(2634, 116.217002, 1710.814819, -12.734299, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(1829, 116.193572, 1725.973144, -13.935600, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2332, 117.061698, 1726.267700, -13.913800, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2332, 117.903846, 1726.273315, -13.913800, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2332, 118.726089, 1726.277709, -13.913800, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2332, 115.344192, 1726.225708, -13.913800, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2332, 114.503326, 1726.238403, -13.913800, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2332, 113.665756, 1726.230712, -13.913800, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[0] = CreateObject(19081, 111.482551, 1699.059448, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[1] = CreateObject(19081, 98.291610, 1694.641845, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[2] = CreateObject(19081, 110.973747, 1703.201538, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[3] = CreateObject(19081, 111.188209, 1707.675659, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[4] = CreateObject(19081, 95.661483, 1703.211669, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[5] = CreateObject(19081, 99.131156, 1707.675537, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[6] = CreateObject(19081, 92.812393, 1699.049682, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[7] = CreateObject(19081, 111.734542, 1694.640747, -13.465020, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[8] = CreateObject(19081, 106.252601, 1695.864257, -13.944999, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[9] = CreateObject(19081, 105.915420, 1700.942138, -13.944999, 0.000000, 0.000000, 0.000000, 300.00); 
BankaLaseri[10] = CreateObject(19081, 104.662940, 1706.284790, -13.944999, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19305, 118.117103, 1689.235473, -12.858300, 0.000000, 0.000000, 269.000000, 300.00); 
tmpobjid = CreateObject(19305, 117.562538, 1710.558837, -13.066470, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2165, 121.286926, 1694.163330, -1.856899, 0.000000, 0.000000, 270.000000, 300.00); 
tmpobjid = CreateObject(2165, 121.123001, 1698.910400, -1.856899, 0.000000, 0.000000, 270.000000, 300.00); 
tmpobjid = CreateObject(2165, 121.248641, 1704.689941, -1.856899, 0.000000, 0.000000, 270.000000, 300.00); 
tmpobjid = CreateObject(1723, 143.151672, 1696.023803, -1.860599, 0.000000, 0.000000, 270.000000, 300.00); 
tmpobjid = CreateObject(1723, 143.189926, 1692.075805, -1.860599, 0.000000, 0.000000, 270.000000, 300.00); 
tmpobjid = CreateObject(1723, 140.126983, 1688.998535, -1.860599, 0.000000, 0.000000, -900.000000, 300.00); 
tmpobjid = CreateObject(1723, 138.298141, 1696.168334, -1.860599, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1827, 139.923049, 1692.763549, -1.859990, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1827, 137.644210, 1692.686889, -1.859990, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1724, 135.069839, 1694.389282, -1.858700, 0.000000, 0.000000, 62.000000, 300.00); 
tmpobjid = CreateObject(1724, 135.455291, 1690.635742, -1.858700, 0.000000, 0.000000, 125.000000, 300.00); 
tmpobjid = CreateObject(1714, 119.799461, 1693.650268, -1.858700, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(1714, 119.570678, 1698.346435, -1.858700, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(1714, 119.449653, 1704.299316, -1.858700, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2164, 115.137489, 1705.139282, -1.857499, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2164, 115.129837, 1702.879150, -1.857499, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2164, 115.098907, 1699.173828, -1.857499, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2164, 115.161346, 1696.814331, -1.857499, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2164, 115.315612, 1693.693603, -1.857499, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2164, 115.331901, 1691.520629, -1.857499, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2195, 143.066680, 1697.117309, -1.258999, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2195, 141.732452, 1688.920288, -1.258999, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(2195, 136.309387, 1688.885375, -1.258999, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19526, 146.870605, 1706.787109, -1.858989, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19526, 149.239212, 1706.759155, -1.858989, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19526, 151.924850, 1706.780029, -1.858989, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19526, 152.454254, 1698.442504, -1.858999, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(19526, 150.033691, 1698.398803, -1.858999, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(19526, 147.247451, 1698.379760, -1.858999, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(2165, 129.856430, 1711.446166, -1.857900, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(1714, 129.254592, 1712.663085, -1.856400, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1724, 126.339630, 1708.333618, -1.858700, 0.000000, 0.000000, 135.000000, 300.00); 
tmpobjid = CreateObject(1724, 133.059097, 1709.298828, -1.858700, 0.000000, 0.000000, -135.000000, 300.00); 
tmpobjid = CreateObject(2164, 125.082763, 1712.741577, -1.857300, 0.000000, 0.000000, 40.000000, 300.00); 
tmpobjid = CreateObject(2165, 139.706237, 1711.452392, -1.857900, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(1714, 139.087661, 1712.999389, -1.856400, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1724, 136.328994, 1708.458984, -1.858700, 0.000000, 0.000000, 135.000000, 300.00); 
tmpobjid = CreateObject(1724, 142.875122, 1709.008544, -1.858700, 0.000000, 0.000000, -135.000000, 300.00); 
tmpobjid = CreateObject(2164, 142.737213, 1713.164184, -1.857300, 0.000000, 0.000000, -40.000000, 300.00); 
tmpobjid = CreateObject(948, 135.214797, 1712.540649, -1.919600, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(948, 142.784240, 1710.745971, -1.919600, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(948, 132.079605, 1712.190551, -1.919600, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19175, 129.422897, 1713.479492, 0.402099, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(19173, 138.851394, 1713.372558, 0.365700, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1775, 131.100051, 1688.861572, -0.778999, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(2002, 129.552398, 1688.923706, -1.859899, 0.000000, 0.000000, 180.000000, 300.00); 
tmpobjid = CreateObject(2002, 125.258499, 1710.589233, -1.858000, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(2002, 134.880538, 1711.091430, -1.858000, 0.000000, 0.000000, 90.000000, 300.00); 
tmpobjid = CreateObject(1491, 119.064567, 1688.384887, -1.907289, 0.000000, 0.000000, 0.000000, 300.00); 
tmpobjid = CreateObject(1232, 150.342697, 1702.385009, 3.962300, 180.000000, 0.000000, -4.000000, 300.00); 
tmpobjid = CreateObject(1232, 136.436325, 1695.920532, 3.962300, 180.000000, 0.000000, -4.000000, 300.00); 
tmpobjid = CreateObject(1232, 136.190200, 1703.598510, 3.962300, 180.000000, 0.000000, -4.000000, 300.00); 
tmpobjid = CreateObject(1232, 129.944778, 1698.507812, 3.962300, 180.000000, 0.000000, -4.000000, 300.00); 
tmpobjid = CreateObject(1232, 117.728370, 1694.260498, 3.962300, 180.000000, 0.000000, -4.000000, 300.00); 
tmpobjid = CreateObject(1232, 117.684036, 1701.098510, 3.962300, 180.000000, 0.000000, -4.000000, 300.00); 
tmpobjid = CreateObject(1232, 139.345367, 1711.188964, 3.962300, 180.000000, 0.000000, -4.000000, 300.00);

    return 1;
}
