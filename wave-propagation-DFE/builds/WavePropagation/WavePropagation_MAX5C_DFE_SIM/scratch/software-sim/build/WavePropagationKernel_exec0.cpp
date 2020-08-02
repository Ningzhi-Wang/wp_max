#include "stdsimheader.h"

namespace maxcompilersim {

void WavePropagationKernel::execute0() {
  { // Node ID: 114 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id115out_result;

  { // Node ID: 115 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id115in_a = id114out_io_nxt_force_disabled;

    id115out_result = (not_fixed(id115in_a));
  }
  { // Node ID: 148 (NodeConstantRawBits)
  }
  { // Node ID: 227 (NodeInputMappedReg)
  }
  if ( (getFillLevel() >= ((id274out_ce_delay_eq_7).getValueAsLong())))
  { // Node ID: 3 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id3in_enable = id148out_value;
    const HWOffsetFix<19,0,UNSIGNED> &id3in_max = id227out_eval_stream_offset_0;

    HWOffsetFix<20,0,UNSIGNED> id3x_1;
    HWOffsetFix<1,0,UNSIGNED> id3x_2;
    HWOffsetFix<1,0,UNSIGNED> id3x_3;
    HWOffsetFix<20,0,UNSIGNED> id3x_4t_1e_1;

    id3out_count = (cast_fixed2fixed<19,0,UNSIGNED,TRUNCATE>((id3st_count)));
    (id3x_1) = (add_fixed<20,0,UNSIGNED,TRUNCATE>((id3st_count),(c_hw_fix_20_0_uns_bits_1)));
    (id3x_2) = (gte_fixed((id3x_1),(cast_fixed2fixed<20,0,UNSIGNED,TRUNCATE>(id3in_max))));
    (id3x_3) = (and_fixed((id3x_2),id3in_enable));
    id3out_wrap = (id3x_3);
    if((id3in_enable.getValueAsBool())) {
      if(((id3x_3).getValueAsBool())) {
        (id3st_count) = (c_hw_fix_20_0_uns_bits);
      }
      else {
        (id3x_4t_1e_1) = (id3x_1);
        (id3st_count) = (id3x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 185 (NodeFIFO)
    const HWOffsetFix<19,0,UNSIGNED> &id185in_input = id3out_count;

    id185out_output[(getCycle()+1)%2] = id185in_input;
  }
  { // Node ID: 147 (NodeConstantRawBits)
  }
  { // Node ID: 130 (NodeGtInlined)
    const HWOffsetFix<19,0,UNSIGNED> &id130in_a = id185out_output[getCycle()%2];
    const HWOffsetFix<19,0,UNSIGNED> &id130in_b = id147out_value;

    id130out_result[(getCycle()+1)%2] = (gt_fixed(id130in_a,id130in_b));
  }
  { // Node ID: 146 (NodeConstantRawBits)
  }
  { // Node ID: 108 (NodeSub)
    const HWOffsetFix<19,0,UNSIGNED> &id108in_a = id227out_eval_stream_offset_0;
    const HWOffsetFix<19,0,UNSIGNED> &id108in_b = id146out_value;

    id108out_result[(getCycle()+1)%2] = (sub_fixed<19,0,UNSIGNED,TONEAREVEN>(id108in_a,id108in_b));
  }
  { // Node ID: 131 (NodeLtInlined)
    const HWOffsetFix<19,0,UNSIGNED> &id131in_a = id185out_output[getCycle()%2];
    const HWOffsetFix<19,0,UNSIGNED> &id131in_b = id108out_result[getCycle()%2];

    id131out_result[(getCycle()+1)%2] = (lt_fixed(id131in_a,id131in_b));
  }
  { // Node ID: 110 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id110in_a = id130out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id110in_b = id131out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id110x_1;

    (id110x_1) = (and_fixed(id110in_a,id110in_b));
    id110out_result[(getCycle()+1)%2] = (id110x_1);
  }
  { // Node ID: 111 (NodeConstantRawBits)
  }
  { // Node ID: 145 (NodeConstantRawBits)
  }
  { // Node ID: 19 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id20out_result;

  { // Node ID: 20 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id20in_a = id19out_io_curr_force_disabled;

    id20out_result = (not_fixed(id20in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 21 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id21in_enable = id20out_result;

    (id21st_read_next_cycle) = ((id21in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_curr, id21st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 228 (NodeInputMappedReg)
  }
  { // Node ID: 229 (NodeInputMappedReg)
  }
  { // Node ID: 230 (NodeInputMappedReg)
  }
  { // Node ID: 231 (NodeInputMappedReg)
  }
  { // Node ID: 232 (NodeInputMappedReg)
  }
  { // Node ID: 233 (NodeInputMappedReg)
  }
  { // Node ID: 234 (NodeInputMappedReg)
  }
  { // Node ID: 235 (NodeInputMappedReg)
  }
  { // Node ID: 236 (NodeInputMappedReg)
  }
  { // Node ID: 237 (NodeInputMappedReg)
  }
  { // Node ID: 238 (NodeInputMappedReg)
  }
  { // Node ID: 239 (NodeInputMappedReg)
  }
  { // Node ID: 240 (NodeInputMappedReg)
  }
  { // Node ID: 241 (NodeInputMappedReg)
  }
  { // Node ID: 242 (NodeInputMappedReg)
  }
  { // Node ID: 243 (NodeInputMappedReg)
  }
  { // Node ID: 244 (NodeInputMappedReg)
  }
  { // Node ID: 245 (NodeInputMappedReg)
  }
  { // Node ID: 246 (NodeInputMappedReg)
  }
  HWFloat<8,24> id177out_output;

  { // Node ID: 177 (NodeFIFO)
    const HWFloat<8,24> &id177in_input = id21out_data;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth0 = id228out_delay_eq_0;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth1 = id229out_delay_eq_1;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth2 = id230out_delay_eq_2;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth3 = id231out_delay_eq_3;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth4 = id232out_delay_eq_4;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth5 = id233out_delay_eq_5;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth6 = id234out_delay_eq_6;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth7 = id235out_delay_eq_7;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth8 = id236out_delay_eq_8;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth9 = id237out_delay_eq_9;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth10 = id238out_delay_eq_10;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth11 = id239out_delay_eq_11;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth12 = id240out_delay_eq_12;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth13 = id241out_delay_eq_13;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth14 = id242out_delay_eq_14;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth15 = id243out_delay_eq_15;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth16 = id244out_delay_eq_16;
    const HWOffsetFix<15,0,UNSIGNED> &id177in_current_depth17 = id245out_delay_eq_17;
    const HWOffsetFix<14,0,UNSIGNED> &id177in_current_depth18 = id246out_delay_eq_18;

    long id177x_1;

    id177out_output = (id177sta_store[(id177st_store_idx)]);
    (id177sta_store[(id177st_store_idx)]) = id177in_input;
    switch(((long)((id177st_store_idx)==(id177st_store_idx_max)))) {
      case 0l:
        id177x_1 = ((id177st_store_idx)+(1l));
        break;
      case 1l:
        id177x_1 = (0l);
        break;
      default:
        id177x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id177st_store_idx) = (id177x_1);
  }
  { // Node ID: 247 (NodeInputMappedReg)
  }
  { // Node ID: 248 (NodeInputMappedReg)
  }
  { // Node ID: 249 (NodeInputMappedReg)
  }
  { // Node ID: 250 (NodeInputMappedReg)
  }
  { // Node ID: 251 (NodeInputMappedReg)
  }
  { // Node ID: 252 (NodeInputMappedReg)
  }
  { // Node ID: 253 (NodeInputMappedReg)
  }
  { // Node ID: 254 (NodeInputMappedReg)
  }
  { // Node ID: 255 (NodeInputMappedReg)
  }
  { // Node ID: 256 (NodeInputMappedReg)
  }
  HWFloat<8,24> id178out_output;

  { // Node ID: 178 (NodeFIFO)
    const HWFloat<8,24> &id178in_input = id177out_output;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth0 = id247out_delay_eq_19;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth1 = id248out_delay_eq_20;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth2 = id249out_delay_eq_21;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth3 = id250out_delay_eq_22;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth4 = id251out_delay_eq_23;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth5 = id252out_delay_eq_24;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth6 = id253out_delay_eq_25;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth7 = id254out_delay_eq_26;
    const HWOffsetFix<15,0,UNSIGNED> &id178in_current_depth8 = id255out_delay_eq_27;
    const HWOffsetFix<13,0,UNSIGNED> &id178in_current_depth9 = id256out_delay_eq_28;

    long id178x_1;

    id178out_output = (id178sta_store[(id178st_store_idx)]);
    (id178sta_store[(id178st_store_idx)]) = id178in_input;
    switch(((long)((id178st_store_idx)==(id178st_store_idx_max)))) {
      case 0l:
        id178x_1 = ((id178st_store_idx)+(1l));
        break;
      case 1l:
        id178x_1 = (0l);
        break;
      default:
        id178x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id178st_store_idx) = (id178x_1);
  }
  { // Node ID: 189 (NodeFIFO)
    const HWFloat<8,24> &id189in_input = id178out_output;

    id189out_output[(getCycle()+75)%76] = id189in_input;
  }
  { // Node ID: 214 (NodeFIFO)
    const HWFloat<8,24> &id214in_input = id189out_output[getCycle()%76];

    id214out_output[(getCycle()+1)%2] = id214in_input;
  }
  { // Node ID: 215 (NodeFIFO)
    const HWFloat<8,24> &id215in_input = id214out_output[getCycle()%2];

    id215out_output[(getCycle()+4)%5] = id215in_input;
  }
  { // Node ID: 216 (NodeFIFO)
    const HWFloat<8,24> &id216in_input = id215out_output[getCycle()%5];

    id216out_output[(getCycle()+1)%2] = id216in_input;
  }
  HWFloat<8,24> id55out_output;

  { // Node ID: 55 (NodeStreamOffset)
    const HWFloat<8,24> &id55in_input = id216out_output[getCycle()%2];

    id55out_output = id55in_input;
  }
  { // Node ID: 16 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id17out_result;

  { // Node ID: 17 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id17in_a = id16out_io_density_force_disabled;

    id17out_result = (not_fixed(id17in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 18 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id18in_enable = id17out_result;

    (id18st_read_next_cycle) = ((id18in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_density, id18st_read_next_cycle.getValueAsBool());
  }
  HWFloat<8,24> id179out_output;

  { // Node ID: 179 (NodeFIFO)
    const HWFloat<8,24> &id179in_input = id18out_data;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth0 = id228out_delay_eq_0;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth1 = id229out_delay_eq_1;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth2 = id230out_delay_eq_2;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth3 = id231out_delay_eq_3;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth4 = id232out_delay_eq_4;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth5 = id233out_delay_eq_5;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth6 = id234out_delay_eq_6;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth7 = id235out_delay_eq_7;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth8 = id236out_delay_eq_8;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth9 = id237out_delay_eq_9;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth10 = id238out_delay_eq_10;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth11 = id239out_delay_eq_11;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth12 = id240out_delay_eq_12;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth13 = id241out_delay_eq_13;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth14 = id242out_delay_eq_14;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth15 = id243out_delay_eq_15;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth16 = id244out_delay_eq_16;
    const HWOffsetFix<15,0,UNSIGNED> &id179in_current_depth17 = id245out_delay_eq_17;
    const HWOffsetFix<14,0,UNSIGNED> &id179in_current_depth18 = id246out_delay_eq_18;

    long id179x_1;

    id179out_output = (id179sta_store[(id179st_store_idx)]);
    (id179sta_store[(id179st_store_idx)]) = id179in_input;
    switch(((long)((id179st_store_idx)==(id179st_store_idx_max)))) {
      case 0l:
        id179x_1 = ((id179st_store_idx)+(1l));
        break;
      case 1l:
        id179x_1 = (0l);
        break;
      default:
        id179x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id179st_store_idx) = (id179x_1);
  }
  HWFloat<8,24> id180out_output;

  { // Node ID: 180 (NodeFIFO)
    const HWFloat<8,24> &id180in_input = id179out_output;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth0 = id247out_delay_eq_19;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth1 = id248out_delay_eq_20;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth2 = id249out_delay_eq_21;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth3 = id250out_delay_eq_22;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth4 = id251out_delay_eq_23;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth5 = id252out_delay_eq_24;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth6 = id253out_delay_eq_25;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth7 = id254out_delay_eq_26;
    const HWOffsetFix<15,0,UNSIGNED> &id180in_current_depth8 = id255out_delay_eq_27;
    const HWOffsetFix<13,0,UNSIGNED> &id180in_current_depth9 = id256out_delay_eq_28;

    long id180x_1;

    id180out_output = (id180sta_store[(id180st_store_idx)]);
    (id180sta_store[(id180st_store_idx)]) = id180in_input;
    switch(((long)((id180st_store_idx)==(id180st_store_idx_max)))) {
      case 0l:
        id180x_1 = ((id180st_store_idx)+(1l));
        break;
      case 1l:
        id180x_1 = (0l);
        break;
      default:
        id180x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id180st_store_idx) = (id180x_1);
  }
  { // Node ID: 190 (NodeFIFO)
    const HWFloat<8,24> &id190in_input = id180out_output;

    id190out_output[(getCycle()+75)%76] = id190in_input;
  }
  { // Node ID: 219 (NodeFIFO)
    const HWFloat<8,24> &id219in_input = id190out_output[getCycle()%76];

    id219out_output[(getCycle()+1)%2] = id219in_input;
  }
  { // Node ID: 220 (NodeFIFO)
    const HWFloat<8,24> &id220in_input = id219out_output[getCycle()%2];

    id220out_output[(getCycle()+4)%5] = id220in_input;
  }
  { // Node ID: 221 (NodeFIFO)
    const HWFloat<8,24> &id221in_input = id220out_output[getCycle()%5];

    id221out_output[(getCycle()+1)%2] = id221in_input;
  }
  HWFloat<8,24> id56out_output;

  { // Node ID: 56 (NodeStreamOffset)
    const HWFloat<8,24> &id56in_input = id221out_output[getCycle()%2];

    id56out_output = id56in_input;
  }
  { // Node ID: 57 (NodeMul)
    const HWFloat<8,24> &id57in_a = id55out_output;
    const HWFloat<8,24> &id57in_b = id56out_output;

    id57out_result[(getCycle()+8)%9] = (mul_float(id57in_a,id57in_b));
  }
  HWFloat<8,24> id58out_output;

  { // Node ID: 58 (NodeStreamOffset)
    const HWFloat<8,24> &id58in_input = id189out_output[getCycle()%76];

    id58out_output = id58in_input;
  }
  HWFloat<8,24> id59out_output;

  { // Node ID: 59 (NodeStreamOffset)
    const HWFloat<8,24> &id59in_input = id190out_output[getCycle()%76];

    id59out_output = id59in_input;
  }
  { // Node ID: 60 (NodeMul)
    const HWFloat<8,24> &id60in_a = id58out_output;
    const HWFloat<8,24> &id60in_b = id59out_output;

    id60out_result[(getCycle()+8)%9] = (mul_float(id60in_a,id60in_b));
  }
  { // Node ID: 61 (NodeAdd)
    const HWFloat<8,24> &id61in_a = id57out_result[getCycle()%9];
    const HWFloat<8,24> &id61in_b = id60out_result[getCycle()%9];

    id61out_result[(getCycle()+11)%12] = (add_float(id61in_a,id61in_b));
  }
  { // Node ID: 63 (NodeMul)
    const HWFloat<8,24> &id63in_a = id145out_value;
    const HWFloat<8,24> &id63in_b = id61out_result[getCycle()%12];

    id63out_result[(getCycle()+8)%9] = (mul_float(id63in_a,id63in_b));
  }
  { // Node ID: 144 (NodeConstantRawBits)
  }
  HWFloat<8,24> id64out_output;

  { // Node ID: 64 (NodeStreamOffset)
    const HWFloat<8,24> &id64in_input = id215out_output[getCycle()%5];

    id64out_output = id64in_input;
  }
  HWFloat<8,24> id65out_output;

  { // Node ID: 65 (NodeStreamOffset)
    const HWFloat<8,24> &id65in_input = id220out_output[getCycle()%5];

    id65out_output = id65in_input;
  }
  { // Node ID: 66 (NodeMul)
    const HWFloat<8,24> &id66in_a = id64out_output;
    const HWFloat<8,24> &id66in_b = id65out_output;

    id66out_result[(getCycle()+8)%9] = (mul_float(id66in_a,id66in_b));
  }
  HWFloat<8,24> id67out_output;

  { // Node ID: 67 (NodeStreamOffset)
    const HWFloat<8,24> &id67in_input = id214out_output[getCycle()%2];

    id67out_output = id67in_input;
  }
  HWFloat<8,24> id68out_output;

  { // Node ID: 68 (NodeStreamOffset)
    const HWFloat<8,24> &id68in_input = id219out_output[getCycle()%2];

    id68out_output = id68in_input;
  }
  { // Node ID: 69 (NodeMul)
    const HWFloat<8,24> &id69in_a = id67out_output;
    const HWFloat<8,24> &id69in_b = id68out_output;

    id69out_result[(getCycle()+8)%9] = (mul_float(id69in_a,id69in_b));
  }
  { // Node ID: 70 (NodeAdd)
    const HWFloat<8,24> &id70in_a = id66out_result[getCycle()%9];
    const HWFloat<8,24> &id70in_b = id69out_result[getCycle()%9];

    id70out_result[(getCycle()+11)%12] = (add_float(id70in_a,id70in_b));
  }
  { // Node ID: 72 (NodeMul)
    const HWFloat<8,24> &id72in_a = id144out_value;
    const HWFloat<8,24> &id72in_b = id70out_result[getCycle()%12];

    id72out_result[(getCycle()+8)%9] = (mul_float(id72in_a,id72in_b));
  }
  { // Node ID: 73 (NodeSub)
    const HWFloat<8,24> &id73in_a = id63out_result[getCycle()%9];
    const HWFloat<8,24> &id73in_b = id72out_result[getCycle()%9];

    id73out_result[(getCycle()+11)%12] = (sub_float(id73in_a,id73in_b));
  }
  { // Node ID: 143 (NodeConstantRawBits)
  }
  { // Node ID: 217 (NodeFIFO)
    const HWFloat<8,24> &id217in_input = id216out_output[getCycle()%2];

    id217out_output[(getCycle()+7)%8] = id217in_input;
  }
  { // Node ID: 218 (NodeFIFO)
    const HWFloat<8,24> &id218in_input = id217out_output[getCycle()%8];

    id218out_output[(getCycle()+2)%3] = id218in_input;
  }
  HWFloat<8,24> id74out_output;

  { // Node ID: 74 (NodeStreamOffset)
    const HWFloat<8,24> &id74in_input = id218out_output[getCycle()%3];

    id74out_output = id74in_input;
  }
  { // Node ID: 222 (NodeFIFO)
    const HWFloat<8,24> &id222in_input = id221out_output[getCycle()%2];

    id222out_output[(getCycle()+7)%8] = id222in_input;
  }
  { // Node ID: 223 (NodeFIFO)
    const HWFloat<8,24> &id223in_input = id222out_output[getCycle()%8];

    id223out_output[(getCycle()+2)%3] = id223in_input;
  }
  HWFloat<8,24> id75out_output;

  { // Node ID: 75 (NodeStreamOffset)
    const HWFloat<8,24> &id75in_input = id223out_output[getCycle()%3];

    id75out_output = id75in_input;
  }
  { // Node ID: 76 (NodeMul)
    const HWFloat<8,24> &id76in_a = id74out_output;
    const HWFloat<8,24> &id76in_b = id75out_output;

    id76out_result[(getCycle()+8)%9] = (mul_float(id76in_a,id76in_b));
  }
  HWFloat<8,24> id77out_output;

  { // Node ID: 77 (NodeStreamOffset)
    const HWFloat<8,24> &id77in_input = id217out_output[getCycle()%8];

    id77out_output = id77in_input;
  }
  HWFloat<8,24> id78out_output;

  { // Node ID: 78 (NodeStreamOffset)
    const HWFloat<8,24> &id78in_input = id222out_output[getCycle()%8];

    id78out_output = id78in_input;
  }
  { // Node ID: 79 (NodeMul)
    const HWFloat<8,24> &id79in_a = id77out_output;
    const HWFloat<8,24> &id79in_b = id78out_output;

    id79out_result[(getCycle()+8)%9] = (mul_float(id79in_a,id79in_b));
  }
  { // Node ID: 80 (NodeAdd)
    const HWFloat<8,24> &id80in_a = id76out_result[getCycle()%9];
    const HWFloat<8,24> &id80in_b = id79out_result[getCycle()%9];

    id80out_result[(getCycle()+11)%12] = (add_float(id80in_a,id80in_b));
  }
  { // Node ID: 82 (NodeMul)
    const HWFloat<8,24> &id82in_a = id143out_value;
    const HWFloat<8,24> &id82in_b = id80out_result[getCycle()%12];

    id82out_result[(getCycle()+8)%9] = (mul_float(id82in_a,id82in_b));
  }
  { // Node ID: 83 (NodeAdd)
    const HWFloat<8,24> &id83in_a = id73out_result[getCycle()%12];
    const HWFloat<8,24> &id83in_b = id82out_result[getCycle()%9];

    id83out_result[(getCycle()+11)%12] = (add_float(id83in_a,id83in_b));
  }
  { // Node ID: 142 (NodeConstantRawBits)
  }
  HWFloat<8,24> id22out_output;

  { // Node ID: 22 (NodeStreamOffset)
    const HWFloat<8,24> &id22in_input = id218out_output[getCycle()%3];

    id22out_output = id22in_input;
  }
  { // Node ID: 201 (NodeFIFO)
    const HWFloat<8,24> &id201in_input = id22out_output;

    id201out_output[(getCycle()+21)%22] = id201in_input;
  }
  HWFloat<8,24> id23out_output;

  { // Node ID: 23 (NodeStreamOffset)
    const HWFloat<8,24> &id23in_input = id223out_output[getCycle()%3];

    id23out_output = id23in_input;
  }
  { // Node ID: 202 (NodeFIFO)
    const HWFloat<8,24> &id202in_input = id23out_output;

    id202out_output[(getCycle()+21)%22] = id202in_input;
  }
  { // Node ID: 84 (NodeMul)
    const HWFloat<8,24> &id84in_a = id201out_output[getCycle()%22];
    const HWFloat<8,24> &id84in_b = id202out_output[getCycle()%22];

    id84out_result[(getCycle()+8)%9] = (mul_float(id84in_a,id84in_b));
  }
  { // Node ID: 86 (NodeMul)
    const HWFloat<8,24> &id86in_a = id142out_value;
    const HWFloat<8,24> &id86in_b = id84out_result[getCycle()%9];

    id86out_result[(getCycle()+8)%9] = (mul_float(id86in_a,id86in_b));
  }
  { // Node ID: 87 (NodeSub)
    const HWFloat<8,24> &id87in_a = id83out_result[getCycle()%12];
    const HWFloat<8,24> &id87in_b = id86out_result[getCycle()%9];

    id87out_result[(getCycle()+11)%12] = (sub_float(id87in_a,id87in_b));
  }
  { // Node ID: 141 (NodeConstantRawBits)
  }
  HWFloat<8,24> id181out_output;

  { // Node ID: 181 (NodeFIFO)
    const HWFloat<8,24> &id181in_input = id178out_output;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth0 = id247out_delay_eq_19;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth1 = id248out_delay_eq_20;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth2 = id249out_delay_eq_21;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth3 = id250out_delay_eq_22;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth4 = id251out_delay_eq_23;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth5 = id252out_delay_eq_24;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth6 = id253out_delay_eq_25;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth7 = id254out_delay_eq_26;
    const HWOffsetFix<15,0,UNSIGNED> &id181in_current_depth8 = id255out_delay_eq_27;
    const HWOffsetFix<13,0,UNSIGNED> &id181in_current_depth9 = id256out_delay_eq_28;

    long id181x_1;

    id181out_output = (id181sta_store[(id181st_store_idx)]);
    (id181sta_store[(id181st_store_idx)]) = id181in_input;
    switch(((long)((id181st_store_idx)==(id181st_store_idx_max)))) {
      case 0l:
        id181x_1 = ((id181st_store_idx)+(1l));
        break;
      case 1l:
        id181x_1 = (0l);
        break;
      default:
        id181x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id181st_store_idx) = (id181x_1);
  }
  HWFloat<8,24> id182out_output;

  { // Node ID: 182 (NodeFIFO)
    const HWFloat<8,24> &id182in_input = id180out_output;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth0 = id247out_delay_eq_19;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth1 = id248out_delay_eq_20;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth2 = id249out_delay_eq_21;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth3 = id250out_delay_eq_22;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth4 = id251out_delay_eq_23;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth5 = id252out_delay_eq_24;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth6 = id253out_delay_eq_25;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth7 = id254out_delay_eq_26;
    const HWOffsetFix<15,0,UNSIGNED> &id182in_current_depth8 = id255out_delay_eq_27;
    const HWOffsetFix<13,0,UNSIGNED> &id182in_current_depth9 = id256out_delay_eq_28;

    long id182x_1;

    id182out_output = (id182sta_store[(id182st_store_idx)]);
    (id182sta_store[(id182st_store_idx)]) = id182in_input;
    switch(((long)((id182st_store_idx)==(id182st_store_idx_max)))) {
      case 0l:
        id182x_1 = ((id182st_store_idx)+(1l));
        break;
      case 1l:
        id182x_1 = (0l);
        break;
      default:
        id182x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id182st_store_idx) = (id182x_1);
  }
  { // Node ID: 24 (NodeMul)
    const HWFloat<8,24> &id24in_a = id181out_output;
    const HWFloat<8,24> &id24in_b = id182out_output;

    id24out_result[(getCycle()+8)%9] = (mul_float(id24in_a,id24in_b));
  }
  HWFloat<8,24> id183out_output;

  { // Node ID: 183 (NodeFIFO)
    const HWFloat<8,24> &id183in_input = id24out_result[getCycle()%9];
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth0 = id228out_delay_eq_0;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth1 = id229out_delay_eq_1;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth2 = id230out_delay_eq_2;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth3 = id231out_delay_eq_3;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth4 = id232out_delay_eq_4;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth5 = id233out_delay_eq_5;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth6 = id234out_delay_eq_6;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth7 = id235out_delay_eq_7;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth8 = id236out_delay_eq_8;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth9 = id237out_delay_eq_9;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth10 = id238out_delay_eq_10;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth11 = id239out_delay_eq_11;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth12 = id240out_delay_eq_12;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth13 = id241out_delay_eq_13;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth14 = id242out_delay_eq_14;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth15 = id243out_delay_eq_15;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth16 = id244out_delay_eq_16;
    const HWOffsetFix<15,0,UNSIGNED> &id183in_current_depth17 = id245out_delay_eq_17;
    const HWOffsetFix<14,0,UNSIGNED> &id183in_current_depth18 = id246out_delay_eq_18;

    long id183x_1;

    id183out_output = (id183sta_store[(id183st_store_idx)]);
    (id183sta_store[(id183st_store_idx)]) = id183in_input;
    switch(((long)((id183st_store_idx)==(id183st_store_idx_max)))) {
      case 0l:
        id183x_1 = ((id183st_store_idx)+(1l));
        break;
      case 1l:
        id183x_1 = (0l);
        break;
      default:
        id183x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id183st_store_idx) = (id183x_1);
  }
  HWFloat<8,24> id25out_output;

  { // Node ID: 25 (NodeStreamOffset)
    const HWFloat<8,24> &id25in_input = id21out_data;

    id25out_output = id25in_input;
  }
  HWFloat<8,24> id26out_output;

  { // Node ID: 26 (NodeStreamOffset)
    const HWFloat<8,24> &id26in_input = id18out_data;

    id26out_output = id26in_input;
  }
  { // Node ID: 27 (NodeMul)
    const HWFloat<8,24> &id27in_a = id25out_output;
    const HWFloat<8,24> &id27in_b = id26out_output;

    id27out_result[(getCycle()+8)%9] = (mul_float(id27in_a,id27in_b));
  }
  { // Node ID: 203 (NodeFIFO)
    const HWFloat<8,24> &id203in_input = id27out_result[getCycle()%9];

    id203out_output[(getCycle()+156)%157] = id203in_input;
  }
  { // Node ID: 28 (NodeAdd)
    const HWFloat<8,24> &id28in_a = id183out_output;
    const HWFloat<8,24> &id28in_b = id203out_output[getCycle()%157];

    id28out_result[(getCycle()+11)%12] = (add_float(id28in_a,id28in_b));
  }
  { // Node ID: 30 (NodeMul)
    const HWFloat<8,24> &id30in_a = id141out_value;
    const HWFloat<8,24> &id30in_b = id28out_result[getCycle()%12];

    id30out_result[(getCycle()+8)%9] = (mul_float(id30in_a,id30in_b));
  }
  { // Node ID: 140 (NodeConstantRawBits)
  }
  HWFloat<8,24> id31out_output;

  { // Node ID: 31 (NodeStreamOffset)
    const HWFloat<8,24> &id31in_input = id181out_output;

    id31out_output = id31in_input;
  }
  HWFloat<8,24> id32out_output;

  { // Node ID: 32 (NodeStreamOffset)
    const HWFloat<8,24> &id32in_input = id182out_output;

    id32out_output = id32in_input;
  }
  { // Node ID: 33 (NodeMul)
    const HWFloat<8,24> &id33in_a = id31out_output;
    const HWFloat<8,24> &id33in_b = id32out_output;

    id33out_result[(getCycle()+8)%9] = (mul_float(id33in_a,id33in_b));
  }
  HWFloat<8,24> id34out_output;

  { // Node ID: 34 (NodeStreamOffset)
    const HWFloat<8,24> &id34in_input = id21out_data;

    id34out_output = id34in_input;
  }
  HWFloat<8,24> id35out_output;

  { // Node ID: 35 (NodeStreamOffset)
    const HWFloat<8,24> &id35in_input = id18out_data;

    id35out_output = id35in_input;
  }
  { // Node ID: 36 (NodeMul)
    const HWFloat<8,24> &id36in_a = id34out_output;
    const HWFloat<8,24> &id36in_b = id35out_output;

    id36out_result[(getCycle()+8)%9] = (mul_float(id36in_a,id36in_b));
  }
  { // Node ID: 204 (NodeFIFO)
    const HWFloat<8,24> &id204in_input = id36out_result[getCycle()%9];

    id204out_output[(getCycle()+105)%106] = id204in_input;
  }
  { // Node ID: 37 (NodeAdd)
    const HWFloat<8,24> &id37in_a = id33out_result[getCycle()%9];
    const HWFloat<8,24> &id37in_b = id204out_output[getCycle()%106];

    id37out_result[(getCycle()+11)%12] = (add_float(id37in_a,id37in_b));
  }
  { // Node ID: 39 (NodeMul)
    const HWFloat<8,24> &id39in_a = id140out_value;
    const HWFloat<8,24> &id39in_b = id37out_result[getCycle()%12];

    id39out_result[(getCycle()+8)%9] = (mul_float(id39in_a,id39in_b));
  }
  { // Node ID: 257 (NodeInputMappedReg)
  }
  { // Node ID: 258 (NodeInputMappedReg)
  }
  { // Node ID: 259 (NodeInputMappedReg)
  }
  { // Node ID: 260 (NodeInputMappedReg)
  }
  { // Node ID: 261 (NodeInputMappedReg)
  }
  { // Node ID: 262 (NodeInputMappedReg)
  }
  { // Node ID: 263 (NodeInputMappedReg)
  }
  { // Node ID: 264 (NodeInputMappedReg)
  }
  { // Node ID: 265 (NodeInputMappedReg)
  }
  { // Node ID: 266 (NodeInputMappedReg)
  }
  HWFloat<8,24> id226out_output;

  { // Node ID: 226 (NodeFIFO)
    const HWFloat<8,24> &id226in_input = id39out_result[getCycle()%9];
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth0 = id257out_delay_eq_29;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth1 = id258out_delay_eq_30;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth2 = id259out_delay_eq_31;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth3 = id260out_delay_eq_32;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth4 = id261out_delay_eq_33;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth5 = id262out_delay_eq_34;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth6 = id263out_delay_eq_35;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth7 = id264out_delay_eq_36;
    const HWOffsetFix<15,0,UNSIGNED> &id226in_current_depth8 = id265out_delay_eq_37;
    const HWOffsetFix<13,0,UNSIGNED> &id226in_current_depth9 = id266out_delay_eq_38;

    long id226x_1;

    id226out_output = (id226sta_store[(id226st_store_idx)]);
    (id226sta_store[(id226st_store_idx)]) = id226in_input;
    switch(((long)((id226st_store_idx)==(id226st_store_idx_max)))) {
      case 0l:
        id226x_1 = ((id226st_store_idx)+(1l));
        break;
      case 1l:
        id226x_1 = (0l);
        break;
      default:
        id226x_1 = (long(m_undefined_value.get_bits(sizeof(long)*8)));
        break;
    }
    (id226st_store_idx) = (id226x_1);
  }
  { // Node ID: 40 (NodeSub)
    const HWFloat<8,24> &id40in_a = id30out_result[getCycle()%9];
    const HWFloat<8,24> &id40in_b = id226out_output;

    id40out_result[(getCycle()+11)%12] = (sub_float(id40in_a,id40in_b));
  }
  { // Node ID: 139 (NodeConstantRawBits)
  }
  HWFloat<8,24> id41out_output;

  { // Node ID: 41 (NodeStreamOffset)
    const HWFloat<8,24> &id41in_input = id181out_output;

    id41out_output = id41in_input;
  }
  HWFloat<8,24> id42out_output;

  { // Node ID: 42 (NodeStreamOffset)
    const HWFloat<8,24> &id42in_input = id182out_output;

    id42out_output = id42in_input;
  }
  { // Node ID: 43 (NodeMul)
    const HWFloat<8,24> &id43in_a = id41out_output;
    const HWFloat<8,24> &id43in_b = id42out_output;

    id43out_result[(getCycle()+8)%9] = (mul_float(id43in_a,id43in_b));
  }
  HWFloat<8,24> id44out_output;

  { // Node ID: 44 (NodeStreamOffset)
    const HWFloat<8,24> &id44in_input = id177out_output;

    id44out_output = id44in_input;
  }
  HWFloat<8,24> id45out_output;

  { // Node ID: 45 (NodeStreamOffset)
    const HWFloat<8,24> &id45in_input = id179out_output;

    id45out_output = id45in_input;
  }
  { // Node ID: 46 (NodeMul)
    const HWFloat<8,24> &id46in_a = id44out_output;
    const HWFloat<8,24> &id46in_b = id45out_output;

    id46out_result[(getCycle()+8)%9] = (mul_float(id46in_a,id46in_b));
  }
  { // Node ID: 206 (NodeFIFO)
    const HWFloat<8,24> &id206in_input = id46out_result[getCycle()%9];

    id206out_output[(getCycle()+54)%55] = id206in_input;
  }
  { // Node ID: 47 (NodeAdd)
    const HWFloat<8,24> &id47in_a = id43out_result[getCycle()%9];
    const HWFloat<8,24> &id47in_b = id206out_output[getCycle()%55];

    id47out_result[(getCycle()+11)%12] = (add_float(id47in_a,id47in_b));
  }
  { // Node ID: 49 (NodeMul)
    const HWFloat<8,24> &id49in_a = id139out_value;
    const HWFloat<8,24> &id49in_b = id47out_result[getCycle()%12];

    id49out_result[(getCycle()+8)%9] = (mul_float(id49in_a,id49in_b));
  }
  { // Node ID: 207 (NodeFIFO)
    const HWFloat<8,24> &id207in_input = id49out_result[getCycle()%9];

    id207out_output[(getCycle()+62)%63] = id207in_input;
  }
  { // Node ID: 50 (NodeAdd)
    const HWFloat<8,24> &id50in_a = id40out_result[getCycle()%12];
    const HWFloat<8,24> &id50in_b = id207out_output[getCycle()%63];

    id50out_result[(getCycle()+11)%12] = (add_float(id50in_a,id50in_b));
  }
  { // Node ID: 138 (NodeConstantRawBits)
  }
  { // Node ID: 53 (NodeMul)
    const HWFloat<8,24> &id53in_a = id138out_value;
    const HWFloat<8,24> &id53in_b = id84out_result[getCycle()%9];

    id53out_result[(getCycle()+8)%9] = (mul_float(id53in_a,id53in_b));
  }
  { // Node ID: 54 (NodeSub)
    const HWFloat<8,24> &id54in_a = id50out_result[getCycle()%12];
    const HWFloat<8,24> &id54in_b = id53out_result[getCycle()%9];

    id54out_result[(getCycle()+11)%12] = (sub_float(id54in_a,id54in_b));
  }
  { // Node ID: 88 (NodeAdd)
    const HWFloat<8,24> &id88in_a = id87out_result[getCycle()%12];
    const HWFloat<8,24> &id88in_b = id54out_result[getCycle()%12];

    id88out_result[(getCycle()+11)%12] = (add_float(id88in_a,id88in_b));
  }
  { // Node ID: 0 (NodeInputMappedReg)
  }
  { // Node ID: 89 (NodeMul)
    const HWFloat<8,24> &id89in_a = id88out_result[getCycle()%12];
    const HWFloat<8,24> &id89in_b = id0out_dtdx2;

    id89out_result[(getCycle()+8)%9] = (mul_float(id89in_a,id89in_b));
  }
  { // Node ID: 7 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id8out_result;

  { // Node ID: 8 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_a = id7out_io_velocity_force_disabled;

    id8out_result = (not_fixed(id8in_a));
  }
  if ( (getFillLevel() >= ((id275out_ce_delay_eq_8).getValueAsLong())))
  { // Node ID: 9 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id9in_enable = id8out_result;

    (id9st_read_next_cycle) = ((id9in_enable.getValueAsBool())&(!(((getFlushLevel())>=((id268out_ce_delay_eq_1).getValueAsLong()))&(isFlushingActive()))));
    queueReadRequest(m_velocity, id9st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 90 (NodeMul)
    const HWFloat<8,24> &id90in_a = id89out_result[getCycle()%9];
    const HWFloat<8,24> &id90in_b = id9out_data;

    id90out_result[(getCycle()+8)%9] = (mul_float(id90in_a,id90in_b));
  }
  { // Node ID: 208 (NodeFIFO)
    const HWFloat<8,24> &id208in_input = id9out_data;

    id208out_output[(getCycle()+8)%9] = id208in_input;
  }
  { // Node ID: 91 (NodeMul)
    const HWFloat<8,24> &id91in_a = id90out_result[getCycle()%9];
    const HWFloat<8,24> &id91in_b = id208out_output[getCycle()%9];

    id91out_result[(getCycle()+8)%9] = (mul_float(id91in_a,id91in_b));
  }
  { // Node ID: 225 (NodeFIFO)
    const HWFloat<8,24> &id225in_input = id202out_output[getCycle()%22];

    id225out_output[(getCycle()+62)%63] = id225in_input;
  }
  { // Node ID: 92 (NodeDiv)
    const HWFloat<8,24> &id92in_a = id91out_result[getCycle()%9];
    const HWFloat<8,24> &id92in_b = id225out_output[getCycle()%63];

    id92out_result[(getCycle()+28)%29] = (div_float(id92in_a,id92in_b));
  }
  { // Node ID: 137 (NodeConstantRawBits)
  }
  { // Node ID: 10 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id11out_result;

  { // Node ID: 11 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id11in_a = id10out_io_absorb_force_disabled;

    id11out_result = (not_fixed(id11in_a));
  }
  if ( (getFillLevel() >= ((id276out_ce_delay_eq_9).getValueAsLong())))
  { // Node ID: 12 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id12in_enable = id11out_result;

    (id12st_read_next_cycle) = ((id12in_enable.getValueAsBool())&(!(((getFlushLevel())>=((id270out_ce_delay_eq_3).getValueAsLong()))&(isFlushingActive()))));
    queueReadRequest(m_absorb, id12st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 93 (NodeMul)
    const HWFloat<8,24> &id93in_a = id12out_data;
    const HWFloat<8,24> &id93in_b = id12out_data;

    id93out_result[(getCycle()+8)%9] = (mul_float(id93in_a,id93in_b));
  }
  { // Node ID: 95 (NodeSub)
    const HWFloat<8,24> &id95in_a = id137out_value;
    const HWFloat<8,24> &id95in_b = id93out_result[getCycle()%9];

    id95out_result[(getCycle()+11)%12] = (sub_float(id95in_a,id95in_b));
  }
  { // Node ID: 224 (NodeFIFO)
    const HWFloat<8,24> &id224in_input = id201out_output[getCycle()%22];

    id224out_output[(getCycle()+82)%83] = id224in_input;
  }
  { // Node ID: 96 (NodeMul)
    const HWFloat<8,24> &id96in_a = id95out_result[getCycle()%12];
    const HWFloat<8,24> &id96in_b = id224out_output[getCycle()%83];

    id96out_result[(getCycle()+8)%9] = (mul_float(id96in_a,id96in_b));
  }
  { // Node ID: 97 (NodeAdd)
    const HWFloat<8,24> &id97in_a = id92out_result[getCycle()%29];
    const HWFloat<8,24> &id97in_b = id96out_result[getCycle()%9];

    id97out_result[(getCycle()+11)%12] = (add_float(id97in_a,id97in_b));
  }
  { // Node ID: 136 (NodeConstantRawBits)
  }
  { // Node ID: 211 (NodeFIFO)
    const HWFloat<8,24> &id211in_input = id12out_data;

    id211out_output[(getCycle()+19)%20] = id211in_input;
  }
  { // Node ID: 99 (NodeSub)
    const HWFloat<8,24> &id99in_a = id136out_value;
    const HWFloat<8,24> &id99in_b = id211out_output[getCycle()%20];

    id99out_result[(getCycle()+11)%12] = (sub_float(id99in_a,id99in_b));
  }
  { // Node ID: 13 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id14out_result;

  { // Node ID: 14 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id14in_a = id13out_io_prev_force_disabled;

    id14out_result = (not_fixed(id14in_a));
  }
  if ( (getFillLevel() >= ((id277out_ce_delay_eq_10).getValueAsLong())))
  { // Node ID: 15 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id15in_enable = id14out_result;

    (id15st_read_next_cycle) = ((id15in_enable.getValueAsBool())&(!(((getFlushLevel())>=((id272out_ce_delay_eq_5).getValueAsLong()))&(isFlushingActive()))));
    queueReadRequest(m_prev, id15st_read_next_cycle.getValueAsBool());
  }
  { // Node ID: 100 (NodeMul)
    const HWFloat<8,24> &id100in_a = id99out_result[getCycle()%12];
    const HWFloat<8,24> &id100in_b = id15out_data;

    id100out_result[(getCycle()+8)%9] = (mul_float(id100in_a,id100in_b));
  }
  { // Node ID: 101 (NodeSub)
    const HWFloat<8,24> &id101in_a = id97out_result[getCycle()%12];
    const HWFloat<8,24> &id101in_b = id100out_result[getCycle()%9];

    id101out_result[(getCycle()+11)%12] = (sub_float(id101in_a,id101in_b));
  }
  { // Node ID: 135 (NodeConstantRawBits)
  }
  { // Node ID: 103 (NodeAdd)
    const HWFloat<8,24> &id103in_a = id135out_value;
    const HWFloat<8,24> &id103in_b = id211out_output[getCycle()%20];

    id103out_result[(getCycle()+11)%12] = (add_float(id103in_a,id103in_b));
  }
  { // Node ID: 213 (NodeFIFO)
    const HWFloat<8,24> &id213in_input = id103out_result[getCycle()%12];

    id213out_output[(getCycle()+19)%20] = id213in_input;
  }
  { // Node ID: 104 (NodeDiv)
    const HWFloat<8,24> &id104in_a = id101out_result[getCycle()%12];
    const HWFloat<8,24> &id104in_b = id213out_output[getCycle()%20];

    id104out_result[(getCycle()+28)%29] = (div_float(id104in_a,id104in_b));
  }
  { // Node ID: 112 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id112in_sel = id110out_result[getCycle()%2];
    const HWFloat<8,24> &id112in_option0 = id111out_value;
    const HWFloat<8,24> &id112in_option1 = id104out_result[getCycle()%29];

    HWFloat<8,24> id112x_1;

    switch((id112in_sel.getValueAsLong())) {
      case 0l:
        id112x_1 = id112in_option0;
        break;
      case 1l:
        id112x_1 = id112in_option1;
        break;
      default:
        id112x_1 = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
        break;
    }
    id112out_result[(getCycle()+1)%2] = (id112x_1);
  }
  if ( (getFillLevel() >= ((id278out_ce_delay_eq_11).getValueAsLong())) && (getFlushLevel() < ((id278out_ce_delay_eq_11).getValueAsLong())|| !isFlushingActive() ))
  { // Node ID: 117 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id117in_output_control = id115out_result;
    const HWFloat<8,24> &id117in_data = id112out_result[getCycle()%2];

    bool id117x_1;

    (id117x_1) = ((id117in_output_control.getValueAsBool())&(!(((getFlushLevel())>=((id273out_ce_delay_eq_6).getValueAsLong()))&(isFlushingActive()))));
    if((id117x_1)) {
      writeOutput(m_nxt, id117in_data);
    }
  }
  { // Node ID: 122 (NodeConstantRawBits)
  }
  { // Node ID: 134 (NodeConstantRawBits)
  }
  { // Node ID: 119 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 120 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id120in_enable = id134out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id120in_max = id119out_value;

    HWOffsetFix<49,0,UNSIGNED> id120x_1;
    HWOffsetFix<1,0,UNSIGNED> id120x_2;
    HWOffsetFix<1,0,UNSIGNED> id120x_3;
    HWOffsetFix<49,0,UNSIGNED> id120x_4t_1e_1;

    id120out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id120st_count)));
    (id120x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id120st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id120x_2) = (gte_fixed((id120x_1),id120in_max));
    (id120x_3) = (and_fixed((id120x_2),id120in_enable));
    id120out_wrap = (id120x_3);
    if((id120in_enable.getValueAsBool())) {
      if(((id120x_3).getValueAsBool())) {
        (id120st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id120x_4t_1e_1) = (id120x_1);
        (id120st_count) = (id120x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id121out_output;

  { // Node ID: 121 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id121in_input = id120out_count;

    id121out_output = id121in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 123 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id123in_load = id122out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id123in_data = id121out_output;

    bool id123x_1;

    (id123x_1) = ((id123in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id123x_1)) {
      setMappedRegValue("current_run_cycle_count", id123in_data);
    }
  }
  { // Node ID: 133 (NodeConstantRawBits)
  }
  { // Node ID: 125 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 126 (NodeCounter)
    const HWOffsetFix<1,0,UNSIGNED> &id126in_enable = id133out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id126in_max = id125out_value;

    HWOffsetFix<49,0,UNSIGNED> id126x_1;
    HWOffsetFix<1,0,UNSIGNED> id126x_2;
    HWOffsetFix<1,0,UNSIGNED> id126x_3;
    HWOffsetFix<49,0,UNSIGNED> id126x_4t_1e_1;

    id126out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id126st_count)));
    (id126x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id126st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id126x_2) = (gte_fixed((id126x_1),id126in_max));
    (id126x_3) = (and_fixed((id126x_2),id126in_enable));
    id126out_wrap = (id126x_3);
    if((id126in_enable.getValueAsBool())) {
      if(((id126x_3).getValueAsBool())) {
        (id126st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id126x_4t_1e_1) = (id126x_1);
        (id126st_count) = (id126x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 128 (NodeInputMappedReg)
  }
  { // Node ID: 132 (NodeEqInlined)
    const HWOffsetFix<48,0,UNSIGNED> &id132in_a = id126out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id132in_b = id128out_run_cycle_count;

    id132out_result[(getCycle()+1)%2] = (eq_fixed(id132in_a,id132in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 127 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id127in_start = id132out_result[getCycle()%2];

    if((id127in_start.getValueAsBool())) {
      startFlushing();
    }
  }
  { // Node ID: 267 (NodeInputMappedReg)
  }
  { // Node ID: 268 (NodeInputMappedReg)
  }
  { // Node ID: 269 (NodeInputMappedReg)
  }
  { // Node ID: 270 (NodeInputMappedReg)
  }
  { // Node ID: 271 (NodeInputMappedReg)
  }
  { // Node ID: 272 (NodeInputMappedReg)
  }
  { // Node ID: 273 (NodeInputMappedReg)
  }
  { // Node ID: 274 (NodeInputMappedReg)
  }
  { // Node ID: 275 (NodeInputMappedReg)
  }
  { // Node ID: 276 (NodeInputMappedReg)
  }
  { // Node ID: 277 (NodeInputMappedReg)
  }
  { // Node ID: 278 (NodeInputMappedReg)
  }
};

};
