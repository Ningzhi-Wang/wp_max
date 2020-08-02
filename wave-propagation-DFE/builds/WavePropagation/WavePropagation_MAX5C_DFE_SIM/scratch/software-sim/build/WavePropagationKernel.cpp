#include "stdsimheader.h"
#include "WavePropagationKernel.h"

namespace maxcompilersim {

WavePropagationKernel::WavePropagationKernel(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 1800339, 2, 1, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_20_0_uns_bits((HWOffsetFix<20,0,UNSIGNED>(varint_u<20>(0x00000l))))
, c_hw_fix_20_0_uns_bits_1((HWOffsetFix<20,0,UNSIGNED>(varint_u<20>(0x00001l))))
, c_hw_fix_19_0_uns_bits((HWOffsetFix<19,0,UNSIGNED>(varint_u<19>(0x00002l))))
, c_hw_fix_19_0_uns_bits_1((HWOffsetFix<19,0,UNSIGNED>(varint_u<19>(0x00003l))))
, c_hw_flt_8_24_bits((HWFloat<8,24>(varint_u<32>(0x00000000l))))
, c_hw_flt_8_24_bits_1((HWFloat<8,24>(varint_u<32>(0x3c360b61l))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_flt_8_24_bits_2((HWFloat<8,24>(varint_u<32>(0x3e19999al))))
, c_hw_flt_8_24_bits_3((HWFloat<8,24>(varint_u<32>(0x3fc00000l))))
, c_hw_flt_8_24_bits_4((HWFloat<8,24>(varint_u<32>(0x402e38e4l))))
, c_hw_flt_8_24_bits_5((HWFloat<8,24>(varint_u<32>(0x40000000l))))
, c_hw_flt_8_24_bits_6((HWFloat<8,24>(varint_u<32>(0x3f800000l))))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 114 (NodeInputMappedReg)
    registerMappedRegister("io_nxt_force_disabled", Data(1));
  }
  { // Node ID: 148 (NodeConstantRawBits)
    id148out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 227 (NodeInputMappedReg)
    registerMappedRegister("eval_stream_offset_0", Data(19));
  }
  { // Node ID: 147 (NodeConstantRawBits)
    id147out_value = (c_hw_fix_19_0_uns_bits);
  }
  { // Node ID: 146 (NodeConstantRawBits)
    id146out_value = (c_hw_fix_19_0_uns_bits_1);
  }
  { // Node ID: 111 (NodeConstantRawBits)
    id111out_value = (c_hw_flt_8_24_bits);
  }
  { // Node ID: 145 (NodeConstantRawBits)
    id145out_value = (c_hw_flt_8_24_bits_1);
  }
  { // Node ID: 19 (NodeInputMappedReg)
    registerMappedRegister("io_curr_force_disabled", Data(1));
  }
  { // Node ID: 21 (NodeInput)
     m_curr =  registerInput("curr",4,5);
  }
  { // Node ID: 228 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_0", Data(15));
  }
  { // Node ID: 229 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_1", Data(15));
  }
  { // Node ID: 230 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_2", Data(15));
  }
  { // Node ID: 231 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_3", Data(15));
  }
  { // Node ID: 232 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_4", Data(15));
  }
  { // Node ID: 233 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_5", Data(15));
  }
  { // Node ID: 234 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_6", Data(15));
  }
  { // Node ID: 235 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_7", Data(15));
  }
  { // Node ID: 236 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_8", Data(15));
  }
  { // Node ID: 237 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_9", Data(15));
  }
  { // Node ID: 238 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_10", Data(15));
  }
  { // Node ID: 239 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_11", Data(15));
  }
  { // Node ID: 240 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_12", Data(15));
  }
  { // Node ID: 241 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_13", Data(15));
  }
  { // Node ID: 242 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_14", Data(15));
  }
  { // Node ID: 243 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_15", Data(15));
  }
  { // Node ID: 244 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_16", Data(15));
  }
  { // Node ID: 245 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_17", Data(15));
  }
  { // Node ID: 246 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_18", Data(14));
  }
  { // Node ID: 247 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_19", Data(15));
  }
  { // Node ID: 248 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_20", Data(15));
  }
  { // Node ID: 249 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_21", Data(15));
  }
  { // Node ID: 250 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_22", Data(15));
  }
  { // Node ID: 251 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_23", Data(15));
  }
  { // Node ID: 252 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_24", Data(15));
  }
  { // Node ID: 253 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_25", Data(15));
  }
  { // Node ID: 254 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_26", Data(15));
  }
  { // Node ID: 255 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_27", Data(15));
  }
  { // Node ID: 256 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_28", Data(13));
  }
  { // Node ID: 16 (NodeInputMappedReg)
    registerMappedRegister("io_density_force_disabled", Data(1));
  }
  { // Node ID: 18 (NodeInput)
     m_density =  registerInput("density",3,5);
  }
  { // Node ID: 144 (NodeConstantRawBits)
    id144out_value = (c_hw_flt_8_24_bits_2);
  }
  { // Node ID: 143 (NodeConstantRawBits)
    id143out_value = (c_hw_flt_8_24_bits_3);
  }
  { // Node ID: 142 (NodeConstantRawBits)
    id142out_value = (c_hw_flt_8_24_bits_4);
  }
  { // Node ID: 141 (NodeConstantRawBits)
    id141out_value = (c_hw_flt_8_24_bits_1);
  }
  { // Node ID: 140 (NodeConstantRawBits)
    id140out_value = (c_hw_flt_8_24_bits_2);
  }
  { // Node ID: 257 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_29", Data(15));
  }
  { // Node ID: 258 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_30", Data(15));
  }
  { // Node ID: 259 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_31", Data(15));
  }
  { // Node ID: 260 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_32", Data(15));
  }
  { // Node ID: 261 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_33", Data(15));
  }
  { // Node ID: 262 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_34", Data(15));
  }
  { // Node ID: 263 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_35", Data(15));
  }
  { // Node ID: 264 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_36", Data(15));
  }
  { // Node ID: 265 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_37", Data(15));
  }
  { // Node ID: 266 (NodeInputMappedReg)
    registerMappedRegister("delay_eq_38", Data(13));
  }
  { // Node ID: 139 (NodeConstantRawBits)
    id139out_value = (c_hw_flt_8_24_bits_3);
  }
  { // Node ID: 138 (NodeConstantRawBits)
    id138out_value = (c_hw_flt_8_24_bits_4);
  }
  { // Node ID: 0 (NodeInputMappedReg)
    registerMappedRegister("dtdx2", Data(32));
  }
  { // Node ID: 7 (NodeInputMappedReg)
    registerMappedRegister("io_velocity_force_disabled", Data(1));
  }
  { // Node ID: 9 (NodeInput)
     m_velocity =  registerInput("velocity",0,5);
  }
  { // Node ID: 137 (NodeConstantRawBits)
    id137out_value = (c_hw_flt_8_24_bits_5);
  }
  { // Node ID: 10 (NodeInputMappedReg)
    registerMappedRegister("io_absorb_force_disabled", Data(1));
  }
  { // Node ID: 12 (NodeInput)
     m_absorb =  registerInput("absorb",1,5);
  }
  { // Node ID: 136 (NodeConstantRawBits)
    id136out_value = (c_hw_flt_8_24_bits_6);
  }
  { // Node ID: 13 (NodeInputMappedReg)
    registerMappedRegister("io_prev_force_disabled", Data(1));
  }
  { // Node ID: 15 (NodeInput)
     m_prev =  registerInput("prev",2,5);
  }
  { // Node ID: 135 (NodeConstantRawBits)
    id135out_value = (c_hw_flt_8_24_bits_6);
  }
  { // Node ID: 117 (NodeOutput)
    m_nxt = registerOutput("nxt",0 );
  }
  { // Node ID: 122 (NodeConstantRawBits)
    id122out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 134 (NodeConstantRawBits)
    id134out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 119 (NodeConstantRawBits)
    id119out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 123 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 133 (NodeConstantRawBits)
    id133out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 125 (NodeConstantRawBits)
    id125out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 128 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
  { // Node ID: 267 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_0", Data(21));
  }
  { // Node ID: 268 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_1", Data(21));
  }
  { // Node ID: 269 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_2", Data(21));
  }
  { // Node ID: 270 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_3", Data(21));
  }
  { // Node ID: 271 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_4", Data(21));
  }
  { // Node ID: 272 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_5", Data(21));
  }
  { // Node ID: 273 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_6", Data(21));
  }
  { // Node ID: 274 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_7", Data(21));
  }
  { // Node ID: 275 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_8", Data(21));
  }
  { // Node ID: 276 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_9", Data(21));
  }
  { // Node ID: 277 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_10", Data(21));
  }
  { // Node ID: 278 (NodeInputMappedReg)
    registerMappedRegister("ce_delay_eq_11", Data(21));
  }
}

void WavePropagationKernel::ramInitialise() {
}

void WavePropagationKernel::resetComputation() {
  resetComputationAfterFlush();
}

void WavePropagationKernel::resetComputationAfterFlush() {
  { // Node ID: 114 (NodeInputMappedReg)
    id114out_io_nxt_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_nxt_force_disabled");
  }
  { // Node ID: 227 (NodeInputMappedReg)
    id227out_eval_stream_offset_0 = getMappedRegValue<HWOffsetFix<19,0,UNSIGNED> >("eval_stream_offset_0");
  }
  { // Node ID: 3 (NodeCounter)
    const HWOffsetFix<19,0,UNSIGNED> &id3in_max = id227out_eval_stream_offset_0;

    (id3st_count) = (c_hw_fix_20_0_uns_bits);
  }
  { // Node ID: 185 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id185out_output[i] = (HWOffsetFix<19,0,UNSIGNED>(varint_u<19>(m_undefined_value.get_bits(19))));
    }
  }
  { // Node ID: 19 (NodeInputMappedReg)
    id19out_io_curr_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_curr_force_disabled");
  }
  { // Node ID: 21 (NodeInput)

    (id21st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id21st_last_read_value) = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
  }
  { // Node ID: 228 (NodeInputMappedReg)
    id228out_delay_eq_0 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_0");
  }
  { // Node ID: 229 (NodeInputMappedReg)
    id229out_delay_eq_1 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_1");
  }
  { // Node ID: 230 (NodeInputMappedReg)
    id230out_delay_eq_2 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_2");
  }
  { // Node ID: 231 (NodeInputMappedReg)
    id231out_delay_eq_3 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_3");
  }
  { // Node ID: 232 (NodeInputMappedReg)
    id232out_delay_eq_4 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_4");
  }
  { // Node ID: 233 (NodeInputMappedReg)
    id233out_delay_eq_5 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_5");
  }
  { // Node ID: 234 (NodeInputMappedReg)
    id234out_delay_eq_6 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_6");
  }
  { // Node ID: 235 (NodeInputMappedReg)
    id235out_delay_eq_7 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_7");
  }
  { // Node ID: 236 (NodeInputMappedReg)
    id236out_delay_eq_8 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_8");
  }
  { // Node ID: 237 (NodeInputMappedReg)
    id237out_delay_eq_9 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_9");
  }
  { // Node ID: 238 (NodeInputMappedReg)
    id238out_delay_eq_10 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_10");
  }
  { // Node ID: 239 (NodeInputMappedReg)
    id239out_delay_eq_11 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_11");
  }
  { // Node ID: 240 (NodeInputMappedReg)
    id240out_delay_eq_12 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_12");
  }
  { // Node ID: 241 (NodeInputMappedReg)
    id241out_delay_eq_13 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_13");
  }
  { // Node ID: 242 (NodeInputMappedReg)
    id242out_delay_eq_14 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_14");
  }
  { // Node ID: 243 (NodeInputMappedReg)
    id243out_delay_eq_15 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_15");
  }
  { // Node ID: 244 (NodeInputMappedReg)
    id244out_delay_eq_16 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_16");
  }
  { // Node ID: 245 (NodeInputMappedReg)
    id245out_delay_eq_17 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_17");
  }
  { // Node ID: 246 (NodeInputMappedReg)
    id246out_delay_eq_18 = getMappedRegValue<HWOffsetFix<14,0,UNSIGNED> >("delay_eq_18");
  }
  { // Node ID: 177 (NodeFIFO)
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

    (id177st_store_idx) = (0l);
    (id177st_store_idx_max) = (((((((((((((((((((((57l)+(id177in_current_depth0.getValueAsLong()))+(id177in_current_depth1.getValueAsLong()))+(id177in_current_depth2.getValueAsLong()))+(id177in_current_depth3.getValueAsLong()))+(id177in_current_depth4.getValueAsLong()))+(id177in_current_depth5.getValueAsLong()))+(id177in_current_depth6.getValueAsLong()))+(id177in_current_depth7.getValueAsLong()))+(id177in_current_depth8.getValueAsLong()))+(id177in_current_depth9.getValueAsLong()))+(id177in_current_depth10.getValueAsLong()))+(id177in_current_depth11.getValueAsLong()))+(id177in_current_depth12.getValueAsLong()))+(id177in_current_depth13.getValueAsLong()))+(id177in_current_depth14.getValueAsLong()))+(id177in_current_depth15.getValueAsLong()))+(id177in_current_depth16.getValueAsLong()))+(id177in_current_depth17.getValueAsLong()))+(id177in_current_depth18.getValueAsLong()))-(1l));
  }
  { // Node ID: 247 (NodeInputMappedReg)
    id247out_delay_eq_19 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_19");
  }
  { // Node ID: 248 (NodeInputMappedReg)
    id248out_delay_eq_20 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_20");
  }
  { // Node ID: 249 (NodeInputMappedReg)
    id249out_delay_eq_21 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_21");
  }
  { // Node ID: 250 (NodeInputMappedReg)
    id250out_delay_eq_22 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_22");
  }
  { // Node ID: 251 (NodeInputMappedReg)
    id251out_delay_eq_23 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_23");
  }
  { // Node ID: 252 (NodeInputMappedReg)
    id252out_delay_eq_24 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_24");
  }
  { // Node ID: 253 (NodeInputMappedReg)
    id253out_delay_eq_25 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_25");
  }
  { // Node ID: 254 (NodeInputMappedReg)
    id254out_delay_eq_26 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_26");
  }
  { // Node ID: 255 (NodeInputMappedReg)
    id255out_delay_eq_27 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_27");
  }
  { // Node ID: 256 (NodeInputMappedReg)
    id256out_delay_eq_28 = getMappedRegValue<HWOffsetFix<13,0,UNSIGNED> >("delay_eq_28");
  }
  { // Node ID: 178 (NodeFIFO)
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

    (id178st_store_idx) = (0l);
    (id178st_store_idx_max) = ((((((((((((30l)+(id178in_current_depth0.getValueAsLong()))+(id178in_current_depth1.getValueAsLong()))+(id178in_current_depth2.getValueAsLong()))+(id178in_current_depth3.getValueAsLong()))+(id178in_current_depth4.getValueAsLong()))+(id178in_current_depth5.getValueAsLong()))+(id178in_current_depth6.getValueAsLong()))+(id178in_current_depth7.getValueAsLong()))+(id178in_current_depth8.getValueAsLong()))+(id178in_current_depth9.getValueAsLong()))-(1l));
  }
  { // Node ID: 189 (NodeFIFO)

    for(int i=0; i<76; i++)
    {
      id189out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 214 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id214out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 215 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id215out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 216 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id216out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 16 (NodeInputMappedReg)
    id16out_io_density_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_density_force_disabled");
  }
  { // Node ID: 18 (NodeInput)

    (id18st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id18st_last_read_value) = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
  }
  { // Node ID: 179 (NodeFIFO)
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

    (id179st_store_idx) = (0l);
    (id179st_store_idx_max) = (((((((((((((((((((((57l)+(id179in_current_depth0.getValueAsLong()))+(id179in_current_depth1.getValueAsLong()))+(id179in_current_depth2.getValueAsLong()))+(id179in_current_depth3.getValueAsLong()))+(id179in_current_depth4.getValueAsLong()))+(id179in_current_depth5.getValueAsLong()))+(id179in_current_depth6.getValueAsLong()))+(id179in_current_depth7.getValueAsLong()))+(id179in_current_depth8.getValueAsLong()))+(id179in_current_depth9.getValueAsLong()))+(id179in_current_depth10.getValueAsLong()))+(id179in_current_depth11.getValueAsLong()))+(id179in_current_depth12.getValueAsLong()))+(id179in_current_depth13.getValueAsLong()))+(id179in_current_depth14.getValueAsLong()))+(id179in_current_depth15.getValueAsLong()))+(id179in_current_depth16.getValueAsLong()))+(id179in_current_depth17.getValueAsLong()))+(id179in_current_depth18.getValueAsLong()))-(1l));
  }
  { // Node ID: 180 (NodeFIFO)
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

    (id180st_store_idx) = (0l);
    (id180st_store_idx_max) = ((((((((((((30l)+(id180in_current_depth0.getValueAsLong()))+(id180in_current_depth1.getValueAsLong()))+(id180in_current_depth2.getValueAsLong()))+(id180in_current_depth3.getValueAsLong()))+(id180in_current_depth4.getValueAsLong()))+(id180in_current_depth5.getValueAsLong()))+(id180in_current_depth6.getValueAsLong()))+(id180in_current_depth7.getValueAsLong()))+(id180in_current_depth8.getValueAsLong()))+(id180in_current_depth9.getValueAsLong()))-(1l));
  }
  { // Node ID: 190 (NodeFIFO)

    for(int i=0; i<76; i++)
    {
      id190out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 219 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id219out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 220 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id220out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 221 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id221out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 217 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id217out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 218 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id218out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 222 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id222out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 223 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id223out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 201 (NodeFIFO)

    for(int i=0; i<22; i++)
    {
      id201out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 202 (NodeFIFO)

    for(int i=0; i<22; i++)
    {
      id202out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 181 (NodeFIFO)
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

    (id181st_store_idx) = (0l);
    (id181st_store_idx_max) = ((((((((((((30l)+(id181in_current_depth0.getValueAsLong()))+(id181in_current_depth1.getValueAsLong()))+(id181in_current_depth2.getValueAsLong()))+(id181in_current_depth3.getValueAsLong()))+(id181in_current_depth4.getValueAsLong()))+(id181in_current_depth5.getValueAsLong()))+(id181in_current_depth6.getValueAsLong()))+(id181in_current_depth7.getValueAsLong()))+(id181in_current_depth8.getValueAsLong()))+(id181in_current_depth9.getValueAsLong()))-(1l));
  }
  { // Node ID: 182 (NodeFIFO)
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

    (id182st_store_idx) = (0l);
    (id182st_store_idx_max) = ((((((((((((30l)+(id182in_current_depth0.getValueAsLong()))+(id182in_current_depth1.getValueAsLong()))+(id182in_current_depth2.getValueAsLong()))+(id182in_current_depth3.getValueAsLong()))+(id182in_current_depth4.getValueAsLong()))+(id182in_current_depth5.getValueAsLong()))+(id182in_current_depth6.getValueAsLong()))+(id182in_current_depth7.getValueAsLong()))+(id182in_current_depth8.getValueAsLong()))+(id182in_current_depth9.getValueAsLong()))-(1l));
  }
  { // Node ID: 183 (NodeFIFO)
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

    (id183st_store_idx) = (0l);
    (id183st_store_idx_max) = (((((((((((((((((((((57l)+(id183in_current_depth0.getValueAsLong()))+(id183in_current_depth1.getValueAsLong()))+(id183in_current_depth2.getValueAsLong()))+(id183in_current_depth3.getValueAsLong()))+(id183in_current_depth4.getValueAsLong()))+(id183in_current_depth5.getValueAsLong()))+(id183in_current_depth6.getValueAsLong()))+(id183in_current_depth7.getValueAsLong()))+(id183in_current_depth8.getValueAsLong()))+(id183in_current_depth9.getValueAsLong()))+(id183in_current_depth10.getValueAsLong()))+(id183in_current_depth11.getValueAsLong()))+(id183in_current_depth12.getValueAsLong()))+(id183in_current_depth13.getValueAsLong()))+(id183in_current_depth14.getValueAsLong()))+(id183in_current_depth15.getValueAsLong()))+(id183in_current_depth16.getValueAsLong()))+(id183in_current_depth17.getValueAsLong()))+(id183in_current_depth18.getValueAsLong()))-(1l));
  }
  { // Node ID: 203 (NodeFIFO)

    for(int i=0; i<157; i++)
    {
      id203out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 204 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id204out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 257 (NodeInputMappedReg)
    id257out_delay_eq_29 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_29");
  }
  { // Node ID: 258 (NodeInputMappedReg)
    id258out_delay_eq_30 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_30");
  }
  { // Node ID: 259 (NodeInputMappedReg)
    id259out_delay_eq_31 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_31");
  }
  { // Node ID: 260 (NodeInputMappedReg)
    id260out_delay_eq_32 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_32");
  }
  { // Node ID: 261 (NodeInputMappedReg)
    id261out_delay_eq_33 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_33");
  }
  { // Node ID: 262 (NodeInputMappedReg)
    id262out_delay_eq_34 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_34");
  }
  { // Node ID: 263 (NodeInputMappedReg)
    id263out_delay_eq_35 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_35");
  }
  { // Node ID: 264 (NodeInputMappedReg)
    id264out_delay_eq_36 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_36");
  }
  { // Node ID: 265 (NodeInputMappedReg)
    id265out_delay_eq_37 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_37");
  }
  { // Node ID: 266 (NodeInputMappedReg)
    id266out_delay_eq_38 = getMappedRegValue<HWOffsetFix<13,0,UNSIGNED> >("delay_eq_38");
  }
  { // Node ID: 226 (NodeFIFO)
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

    (id226st_store_idx) = (0l);
    (id226st_store_idx_max) = ((((((((((((30l)+(id226in_current_depth0.getValueAsLong()))+(id226in_current_depth1.getValueAsLong()))+(id226in_current_depth2.getValueAsLong()))+(id226in_current_depth3.getValueAsLong()))+(id226in_current_depth4.getValueAsLong()))+(id226in_current_depth5.getValueAsLong()))+(id226in_current_depth6.getValueAsLong()))+(id226in_current_depth7.getValueAsLong()))+(id226in_current_depth8.getValueAsLong()))+(id226in_current_depth9.getValueAsLong()))-(1l));
  }
  { // Node ID: 206 (NodeFIFO)

    for(int i=0; i<55; i++)
    {
      id206out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 207 (NodeFIFO)

    for(int i=0; i<63; i++)
    {
      id207out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_dtdx2 = getMappedRegValue<HWFloat<8,24> >("dtdx2");
  }
  { // Node ID: 7 (NodeInputMappedReg)
    id7out_io_velocity_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_velocity_force_disabled");
  }
  { // Node ID: 9 (NodeInput)

    (id9st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id9st_last_read_value) = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
  }
  { // Node ID: 208 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id208out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 225 (NodeFIFO)

    for(int i=0; i<63; i++)
    {
      id225out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 10 (NodeInputMappedReg)
    id10out_io_absorb_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_absorb_force_disabled");
  }
  { // Node ID: 12 (NodeInput)

    (id12st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id12st_last_read_value) = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
  }
  { // Node ID: 224 (NodeFIFO)

    for(int i=0; i<83; i++)
    {
      id224out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 211 (NodeFIFO)

    for(int i=0; i<20; i++)
    {
      id211out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 13 (NodeInputMappedReg)
    id13out_io_prev_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_prev_force_disabled");
  }
  { // Node ID: 15 (NodeInput)

    (id15st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id15st_last_read_value) = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
  }
  { // Node ID: 213 (NodeFIFO)

    for(int i=0; i<20; i++)
    {
      id213out_output[i] = (HWFloat<8,24>(varint_u<32>(m_undefined_value.get_bits(32))));
    }
  }
  { // Node ID: 120 (NodeCounter)

    (id120st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 126 (NodeCounter)

    (id126st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 128 (NodeInputMappedReg)
    id128out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
  { // Node ID: 267 (NodeInputMappedReg)
    id267out_ce_delay_eq_0 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_0");
  }
  { // Node ID: 268 (NodeInputMappedReg)
    id268out_ce_delay_eq_1 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_1");
  }
  { // Node ID: 269 (NodeInputMappedReg)
    id269out_ce_delay_eq_2 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_2");
  }
  { // Node ID: 270 (NodeInputMappedReg)
    id270out_ce_delay_eq_3 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_3");
  }
  { // Node ID: 271 (NodeInputMappedReg)
    id271out_ce_delay_eq_4 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_4");
  }
  { // Node ID: 272 (NodeInputMappedReg)
    id272out_ce_delay_eq_5 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_5");
  }
  { // Node ID: 273 (NodeInputMappedReg)
    id273out_ce_delay_eq_6 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_6");
  }
  { // Node ID: 274 (NodeInputMappedReg)
    id274out_ce_delay_eq_7 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_7");
  }
  { // Node ID: 275 (NodeInputMappedReg)
    id275out_ce_delay_eq_8 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_8");
  }
  { // Node ID: 276 (NodeInputMappedReg)
    id276out_ce_delay_eq_9 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_9");
  }
  { // Node ID: 277 (NodeInputMappedReg)
    id277out_ce_delay_eq_10 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_10");
  }
  { // Node ID: 278 (NodeInputMappedReg)
    id278out_ce_delay_eq_11 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_11");
  }
}

void WavePropagationKernel::updateState() {
  { // Node ID: 114 (NodeInputMappedReg)
    id114out_io_nxt_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_nxt_force_disabled");
  }
  { // Node ID: 227 (NodeInputMappedReg)
    id227out_eval_stream_offset_0 = getMappedRegValue<HWOffsetFix<19,0,UNSIGNED> >("eval_stream_offset_0");
  }
  { // Node ID: 19 (NodeInputMappedReg)
    id19out_io_curr_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_curr_force_disabled");
  }
  { // Node ID: 228 (NodeInputMappedReg)
    id228out_delay_eq_0 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_0");
  }
  { // Node ID: 229 (NodeInputMappedReg)
    id229out_delay_eq_1 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_1");
  }
  { // Node ID: 230 (NodeInputMappedReg)
    id230out_delay_eq_2 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_2");
  }
  { // Node ID: 231 (NodeInputMappedReg)
    id231out_delay_eq_3 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_3");
  }
  { // Node ID: 232 (NodeInputMappedReg)
    id232out_delay_eq_4 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_4");
  }
  { // Node ID: 233 (NodeInputMappedReg)
    id233out_delay_eq_5 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_5");
  }
  { // Node ID: 234 (NodeInputMappedReg)
    id234out_delay_eq_6 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_6");
  }
  { // Node ID: 235 (NodeInputMappedReg)
    id235out_delay_eq_7 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_7");
  }
  { // Node ID: 236 (NodeInputMappedReg)
    id236out_delay_eq_8 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_8");
  }
  { // Node ID: 237 (NodeInputMappedReg)
    id237out_delay_eq_9 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_9");
  }
  { // Node ID: 238 (NodeInputMappedReg)
    id238out_delay_eq_10 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_10");
  }
  { // Node ID: 239 (NodeInputMappedReg)
    id239out_delay_eq_11 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_11");
  }
  { // Node ID: 240 (NodeInputMappedReg)
    id240out_delay_eq_12 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_12");
  }
  { // Node ID: 241 (NodeInputMappedReg)
    id241out_delay_eq_13 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_13");
  }
  { // Node ID: 242 (NodeInputMappedReg)
    id242out_delay_eq_14 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_14");
  }
  { // Node ID: 243 (NodeInputMappedReg)
    id243out_delay_eq_15 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_15");
  }
  { // Node ID: 244 (NodeInputMappedReg)
    id244out_delay_eq_16 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_16");
  }
  { // Node ID: 245 (NodeInputMappedReg)
    id245out_delay_eq_17 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_17");
  }
  { // Node ID: 246 (NodeInputMappedReg)
    id246out_delay_eq_18 = getMappedRegValue<HWOffsetFix<14,0,UNSIGNED> >("delay_eq_18");
  }
  { // Node ID: 247 (NodeInputMappedReg)
    id247out_delay_eq_19 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_19");
  }
  { // Node ID: 248 (NodeInputMappedReg)
    id248out_delay_eq_20 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_20");
  }
  { // Node ID: 249 (NodeInputMappedReg)
    id249out_delay_eq_21 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_21");
  }
  { // Node ID: 250 (NodeInputMappedReg)
    id250out_delay_eq_22 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_22");
  }
  { // Node ID: 251 (NodeInputMappedReg)
    id251out_delay_eq_23 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_23");
  }
  { // Node ID: 252 (NodeInputMappedReg)
    id252out_delay_eq_24 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_24");
  }
  { // Node ID: 253 (NodeInputMappedReg)
    id253out_delay_eq_25 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_25");
  }
  { // Node ID: 254 (NodeInputMappedReg)
    id254out_delay_eq_26 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_26");
  }
  { // Node ID: 255 (NodeInputMappedReg)
    id255out_delay_eq_27 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_27");
  }
  { // Node ID: 256 (NodeInputMappedReg)
    id256out_delay_eq_28 = getMappedRegValue<HWOffsetFix<13,0,UNSIGNED> >("delay_eq_28");
  }
  { // Node ID: 16 (NodeInputMappedReg)
    id16out_io_density_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_density_force_disabled");
  }
  { // Node ID: 257 (NodeInputMappedReg)
    id257out_delay_eq_29 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_29");
  }
  { // Node ID: 258 (NodeInputMappedReg)
    id258out_delay_eq_30 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_30");
  }
  { // Node ID: 259 (NodeInputMappedReg)
    id259out_delay_eq_31 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_31");
  }
  { // Node ID: 260 (NodeInputMappedReg)
    id260out_delay_eq_32 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_32");
  }
  { // Node ID: 261 (NodeInputMappedReg)
    id261out_delay_eq_33 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_33");
  }
  { // Node ID: 262 (NodeInputMappedReg)
    id262out_delay_eq_34 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_34");
  }
  { // Node ID: 263 (NodeInputMappedReg)
    id263out_delay_eq_35 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_35");
  }
  { // Node ID: 264 (NodeInputMappedReg)
    id264out_delay_eq_36 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_36");
  }
  { // Node ID: 265 (NodeInputMappedReg)
    id265out_delay_eq_37 = getMappedRegValue<HWOffsetFix<15,0,UNSIGNED> >("delay_eq_37");
  }
  { // Node ID: 266 (NodeInputMappedReg)
    id266out_delay_eq_38 = getMappedRegValue<HWOffsetFix<13,0,UNSIGNED> >("delay_eq_38");
  }
  { // Node ID: 0 (NodeInputMappedReg)
    id0out_dtdx2 = getMappedRegValue<HWFloat<8,24> >("dtdx2");
  }
  { // Node ID: 7 (NodeInputMappedReg)
    id7out_io_velocity_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_velocity_force_disabled");
  }
  { // Node ID: 10 (NodeInputMappedReg)
    id10out_io_absorb_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_absorb_force_disabled");
  }
  { // Node ID: 13 (NodeInputMappedReg)
    id13out_io_prev_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_prev_force_disabled");
  }
  { // Node ID: 128 (NodeInputMappedReg)
    id128out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
  { // Node ID: 267 (NodeInputMappedReg)
    id267out_ce_delay_eq_0 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_0");
  }
  { // Node ID: 268 (NodeInputMappedReg)
    id268out_ce_delay_eq_1 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_1");
  }
  { // Node ID: 269 (NodeInputMappedReg)
    id269out_ce_delay_eq_2 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_2");
  }
  { // Node ID: 270 (NodeInputMappedReg)
    id270out_ce_delay_eq_3 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_3");
  }
  { // Node ID: 271 (NodeInputMappedReg)
    id271out_ce_delay_eq_4 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_4");
  }
  { // Node ID: 272 (NodeInputMappedReg)
    id272out_ce_delay_eq_5 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_5");
  }
  { // Node ID: 273 (NodeInputMappedReg)
    id273out_ce_delay_eq_6 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_6");
  }
  { // Node ID: 274 (NodeInputMappedReg)
    id274out_ce_delay_eq_7 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_7");
  }
  { // Node ID: 275 (NodeInputMappedReg)
    id275out_ce_delay_eq_8 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_8");
  }
  { // Node ID: 276 (NodeInputMappedReg)
    id276out_ce_delay_eq_9 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_9");
  }
  { // Node ID: 277 (NodeInputMappedReg)
    id277out_ce_delay_eq_10 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_10");
  }
  { // Node ID: 278 (NodeInputMappedReg)
    id278out_ce_delay_eq_11 = getMappedRegValue<HWOffsetFix<21,0,UNSIGNED> >("ce_delay_eq_11");
  }
}

void WavePropagationKernel::preExecute() {
  { // Node ID: 21 (NodeInput)
    if(((needsToReadInput(m_curr))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id21st_last_read_value) = (readInput<HWFloat<8,24> >(m_curr));
    }
    id21out_data = (id21st_last_read_value);
  }
  { // Node ID: 18 (NodeInput)
    if(((needsToReadInput(m_density))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id18st_last_read_value) = (readInput<HWFloat<8,24> >(m_density));
    }
    id18out_data = (id18st_last_read_value);
  }
  { // Node ID: 9 (NodeInput)
    if(((needsToReadInput(m_velocity))&(((getFlushLevel())<(((id267out_ce_delay_eq_0).getValueAsLong())+(5)))|(!(isFlushingActive()))))) {
      (id9st_last_read_value) = (readInput<HWFloat<8,24> >(m_velocity));
    }
    id9out_data = (id9st_last_read_value);
  }
  { // Node ID: 12 (NodeInput)
    if(((needsToReadInput(m_absorb))&(((getFlushLevel())<(((id269out_ce_delay_eq_2).getValueAsLong())+(5)))|(!(isFlushingActive()))))) {
      (id12st_last_read_value) = (readInput<HWFloat<8,24> >(m_absorb));
    }
    id12out_data = (id12st_last_read_value);
  }
  { // Node ID: 15 (NodeInput)
    if(((needsToReadInput(m_prev))&(((getFlushLevel())<(((id271out_ce_delay_eq_4).getValueAsLong())+(5)))|(!(isFlushingActive()))))) {
      (id15st_last_read_value) = (readInput<HWFloat<8,24> >(m_prev));
    }
    id15out_data = (id15st_last_read_value);
  }
}

void WavePropagationKernel::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "WavePropagationKernel: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int WavePropagationKernel::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
