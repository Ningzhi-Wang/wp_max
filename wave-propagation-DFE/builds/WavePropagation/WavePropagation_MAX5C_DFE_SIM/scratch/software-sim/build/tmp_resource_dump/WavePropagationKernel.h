#ifndef WAVEPROPAGATIONKERNEL_H_
#define WAVEPROPAGATIONKERNEL_H_

// #include "KernelManagerBlockSync.h"


namespace maxcompilersim {

class WavePropagationKernel : public KernelManagerBlockSync {
public:
  WavePropagationKernel(const std::string &instance_name);

protected:
  virtual void runComputationCycle();
  virtual void ramInitialise();
  virtual void resetComputation();
  virtual void resetComputationAfterFlush();
          void updateState();
          void preExecute();
  virtual int  getFlushLevelStart();

private:
  t_port_number m_curr;
  t_port_number m_density;
  t_port_number m_velocity;
  t_port_number m_absorb;
  t_port_number m_prev;
  t_port_number m_nxt;
  HWOffsetFix<1,0,UNSIGNED> id114out_io_nxt_force_disabled;

  HWOffsetFix<1,0,UNSIGNED> id148out_value;

  HWOffsetFix<19,0,UNSIGNED> id227out_eval_stream_offset_0;

  HWOffsetFix<19,0,UNSIGNED> id3out_count;
  HWOffsetFix<1,0,UNSIGNED> id3out_wrap;

  HWOffsetFix<20,0,UNSIGNED> id3st_count;

  HWOffsetFix<19,0,UNSIGNED> id185out_output[2];

  HWOffsetFix<19,0,UNSIGNED> id147out_value;

  HWOffsetFix<1,0,UNSIGNED> id130out_result[2];

  HWOffsetFix<19,0,UNSIGNED> id146out_value;

  HWOffsetFix<19,0,UNSIGNED> id108out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id131out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id110out_result[2];

  HWFloat<8,24> id111out_value;

  HWFloat<8,24> id145out_value;

  HWOffsetFix<1,0,UNSIGNED> id19out_io_curr_force_disabled;

  HWFloat<8,24> id21out_data;

  HWOffsetFix<1,0,UNSIGNED> id21st_read_next_cycle;
  HWFloat<8,24> id21st_last_read_value;

  HWOffsetFix<15,0,UNSIGNED> id228out_delay_eq_0;

  HWOffsetFix<15,0,UNSIGNED> id229out_delay_eq_1;

  HWOffsetFix<15,0,UNSIGNED> id230out_delay_eq_2;

  HWOffsetFix<15,0,UNSIGNED> id231out_delay_eq_3;

  HWOffsetFix<15,0,UNSIGNED> id232out_delay_eq_4;

  HWOffsetFix<15,0,UNSIGNED> id233out_delay_eq_5;

  HWOffsetFix<15,0,UNSIGNED> id234out_delay_eq_6;

  HWOffsetFix<15,0,UNSIGNED> id235out_delay_eq_7;

  HWOffsetFix<15,0,UNSIGNED> id236out_delay_eq_8;

  HWOffsetFix<15,0,UNSIGNED> id237out_delay_eq_9;

  HWOffsetFix<15,0,UNSIGNED> id238out_delay_eq_10;

  HWOffsetFix<15,0,UNSIGNED> id239out_delay_eq_11;

  HWOffsetFix<15,0,UNSIGNED> id240out_delay_eq_12;

  HWOffsetFix<15,0,UNSIGNED> id241out_delay_eq_13;

  HWOffsetFix<15,0,UNSIGNED> id242out_delay_eq_14;

  HWOffsetFix<15,0,UNSIGNED> id243out_delay_eq_15;

  HWOffsetFix<15,0,UNSIGNED> id244out_delay_eq_16;

  HWOffsetFix<15,0,UNSIGNED> id245out_delay_eq_17;

  HWOffsetFix<14,0,UNSIGNED> id246out_delay_eq_18;

  long id177st_store_idx;
  long id177st_store_idx_max;

  HWFloat<8,24> id177sta_store[600051];

  HWOffsetFix<15,0,UNSIGNED> id247out_delay_eq_19;

  HWOffsetFix<15,0,UNSIGNED> id248out_delay_eq_20;

  HWOffsetFix<15,0,UNSIGNED> id249out_delay_eq_21;

  HWOffsetFix<15,0,UNSIGNED> id250out_delay_eq_22;

  HWOffsetFix<15,0,UNSIGNED> id251out_delay_eq_23;

  HWOffsetFix<15,0,UNSIGNED> id252out_delay_eq_24;

  HWOffsetFix<15,0,UNSIGNED> id253out_delay_eq_25;

  HWOffsetFix<15,0,UNSIGNED> id254out_delay_eq_26;

  HWOffsetFix<15,0,UNSIGNED> id255out_delay_eq_27;

  HWOffsetFix<13,0,UNSIGNED> id256out_delay_eq_28;

  long id178st_store_idx;
  long id178st_store_idx_max;

  HWFloat<8,24> id178sta_store[300027];

  HWFloat<8,24> id189out_output[76];

  HWFloat<8,24> id214out_output[2];

  HWFloat<8,24> id215out_output[5];

  HWFloat<8,24> id216out_output[2];

  HWOffsetFix<1,0,UNSIGNED> id16out_io_density_force_disabled;

  HWFloat<8,24> id18out_data;

  HWOffsetFix<1,0,UNSIGNED> id18st_read_next_cycle;
  HWFloat<8,24> id18st_last_read_value;

  long id179st_store_idx;
  long id179st_store_idx_max;

  HWFloat<8,24> id179sta_store[600051];

  long id180st_store_idx;
  long id180st_store_idx_max;

  HWFloat<8,24> id180sta_store[300027];

  HWFloat<8,24> id190out_output[76];

  HWFloat<8,24> id219out_output[2];

  HWFloat<8,24> id220out_output[5];

  HWFloat<8,24> id221out_output[2];

  HWFloat<8,24> id57out_result[9];

  HWFloat<8,24> id60out_result[9];

  HWFloat<8,24> id61out_result[12];

  HWFloat<8,24> id63out_result[9];

  HWFloat<8,24> id144out_value;

  HWFloat<8,24> id66out_result[9];

  HWFloat<8,24> id69out_result[9];

  HWFloat<8,24> id70out_result[12];

  HWFloat<8,24> id72out_result[9];

  HWFloat<8,24> id73out_result[12];

  HWFloat<8,24> id143out_value;

  HWFloat<8,24> id217out_output[8];

  HWFloat<8,24> id218out_output[3];

  HWFloat<8,24> id222out_output[8];

  HWFloat<8,24> id223out_output[3];

  HWFloat<8,24> id76out_result[9];

  HWFloat<8,24> id79out_result[9];

  HWFloat<8,24> id80out_result[12];

  HWFloat<8,24> id82out_result[9];

  HWFloat<8,24> id83out_result[12];

  HWFloat<8,24> id142out_value;

  HWFloat<8,24> id201out_output[22];

  HWFloat<8,24> id202out_output[22];

  HWFloat<8,24> id84out_result[9];

  HWFloat<8,24> id86out_result[9];

  HWFloat<8,24> id87out_result[12];

  HWFloat<8,24> id141out_value;

  long id181st_store_idx;
  long id181st_store_idx_max;

  HWFloat<8,24> id181sta_store[300027];

  long id182st_store_idx;
  long id182st_store_idx_max;

  HWFloat<8,24> id182sta_store[300027];

  HWFloat<8,24> id24out_result[9];

  long id183st_store_idx;
  long id183st_store_idx_max;

  HWFloat<8,24> id183sta_store[600051];

  HWFloat<8,24> id27out_result[9];

  HWFloat<8,24> id203out_output[157];

  HWFloat<8,24> id28out_result[12];

  HWFloat<8,24> id30out_result[9];

  HWFloat<8,24> id140out_value;

  HWFloat<8,24> id33out_result[9];

  HWFloat<8,24> id36out_result[9];

  HWFloat<8,24> id204out_output[106];

  HWFloat<8,24> id37out_result[12];

  HWFloat<8,24> id39out_result[9];

  HWOffsetFix<15,0,UNSIGNED> id257out_delay_eq_29;

  HWOffsetFix<15,0,UNSIGNED> id258out_delay_eq_30;

  HWOffsetFix<15,0,UNSIGNED> id259out_delay_eq_31;

  HWOffsetFix<15,0,UNSIGNED> id260out_delay_eq_32;

  HWOffsetFix<15,0,UNSIGNED> id261out_delay_eq_33;

  HWOffsetFix<15,0,UNSIGNED> id262out_delay_eq_34;

  HWOffsetFix<15,0,UNSIGNED> id263out_delay_eq_35;

  HWOffsetFix<15,0,UNSIGNED> id264out_delay_eq_36;

  HWOffsetFix<15,0,UNSIGNED> id265out_delay_eq_37;

  HWOffsetFix<13,0,UNSIGNED> id266out_delay_eq_38;

  long id226st_store_idx;
  long id226st_store_idx_max;

  HWFloat<8,24> id226sta_store[300051];

  HWFloat<8,24> id40out_result[12];

  HWFloat<8,24> id139out_value;

  HWFloat<8,24> id43out_result[9];

  HWFloat<8,24> id46out_result[9];

  HWFloat<8,24> id206out_output[55];

  HWFloat<8,24> id47out_result[12];

  HWFloat<8,24> id49out_result[9];

  HWFloat<8,24> id207out_output[63];

  HWFloat<8,24> id50out_result[12];

  HWFloat<8,24> id138out_value;

  HWFloat<8,24> id53out_result[9];

  HWFloat<8,24> id54out_result[12];

  HWFloat<8,24> id88out_result[12];

  HWFloat<8,24> id0out_dtdx2;

  HWFloat<8,24> id89out_result[9];

  HWOffsetFix<1,0,UNSIGNED> id7out_io_velocity_force_disabled;

  HWFloat<8,24> id9out_data;

  HWOffsetFix<1,0,UNSIGNED> id9st_read_next_cycle;
  HWFloat<8,24> id9st_last_read_value;

  HWFloat<8,24> id90out_result[9];

  HWFloat<8,24> id208out_output[9];

  HWFloat<8,24> id91out_result[9];

  HWFloat<8,24> id225out_output[63];

  HWFloat<8,24> id92out_result[29];

  HWFloat<8,24> id137out_value;

  HWOffsetFix<1,0,UNSIGNED> id10out_io_absorb_force_disabled;

  HWFloat<8,24> id12out_data;

  HWOffsetFix<1,0,UNSIGNED> id12st_read_next_cycle;
  HWFloat<8,24> id12st_last_read_value;

  HWFloat<8,24> id93out_result[9];

  HWFloat<8,24> id95out_result[12];

  HWFloat<8,24> id224out_output[83];

  HWFloat<8,24> id96out_result[9];

  HWFloat<8,24> id97out_result[12];

  HWFloat<8,24> id136out_value;

  HWFloat<8,24> id211out_output[20];

  HWFloat<8,24> id99out_result[12];

  HWOffsetFix<1,0,UNSIGNED> id13out_io_prev_force_disabled;

  HWFloat<8,24> id15out_data;

  HWOffsetFix<1,0,UNSIGNED> id15st_read_next_cycle;
  HWFloat<8,24> id15st_last_read_value;

  HWFloat<8,24> id100out_result[9];

  HWFloat<8,24> id101out_result[12];

  HWFloat<8,24> id135out_value;

  HWFloat<8,24> id103out_result[12];

  HWFloat<8,24> id213out_output[20];

  HWFloat<8,24> id104out_result[29];

  HWFloat<8,24> id112out_result[2];

  HWOffsetFix<1,0,UNSIGNED> id122out_value;

  HWOffsetFix<1,0,UNSIGNED> id134out_value;

  HWOffsetFix<49,0,UNSIGNED> id119out_value;

  HWOffsetFix<48,0,UNSIGNED> id120out_count;
  HWOffsetFix<1,0,UNSIGNED> id120out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id120st_count;

  HWOffsetFix<1,0,UNSIGNED> id133out_value;

  HWOffsetFix<49,0,UNSIGNED> id125out_value;

  HWOffsetFix<48,0,UNSIGNED> id126out_count;
  HWOffsetFix<1,0,UNSIGNED> id126out_wrap;

  HWOffsetFix<49,0,UNSIGNED> id126st_count;

  HWOffsetFix<48,0,UNSIGNED> id128out_run_cycle_count;

  HWOffsetFix<1,0,UNSIGNED> id132out_result[2];

  HWOffsetFix<21,0,UNSIGNED> id267out_ce_delay_eq_0;

  HWOffsetFix<21,0,UNSIGNED> id268out_ce_delay_eq_1;

  HWOffsetFix<21,0,UNSIGNED> id269out_ce_delay_eq_2;

  HWOffsetFix<21,0,UNSIGNED> id270out_ce_delay_eq_3;

  HWOffsetFix<21,0,UNSIGNED> id271out_ce_delay_eq_4;

  HWOffsetFix<21,0,UNSIGNED> id272out_ce_delay_eq_5;

  HWOffsetFix<21,0,UNSIGNED> id273out_ce_delay_eq_6;

  HWOffsetFix<21,0,UNSIGNED> id274out_ce_delay_eq_7;

  HWOffsetFix<21,0,UNSIGNED> id275out_ce_delay_eq_8;

  HWOffsetFix<21,0,UNSIGNED> id276out_ce_delay_eq_9;

  HWOffsetFix<21,0,UNSIGNED> id277out_ce_delay_eq_10;

  HWOffsetFix<21,0,UNSIGNED> id278out_ce_delay_eq_11;

  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits;
  const HWOffsetFix<20,0,UNSIGNED> c_hw_fix_20_0_uns_bits;
  const HWOffsetFix<20,0,UNSIGNED> c_hw_fix_20_0_uns_bits_1;
  const HWOffsetFix<19,0,UNSIGNED> c_hw_fix_19_0_uns_bits;
  const HWOffsetFix<19,0,UNSIGNED> c_hw_fix_19_0_uns_bits_1;
  const HWFloat<8,24> c_hw_flt_8_24_bits;
  const HWFloat<8,24> c_hw_flt_8_24_bits_1;
  const HWOffsetFix<1,0,UNSIGNED> c_hw_fix_1_0_uns_bits_1;
  const HWFloat<8,24> c_hw_flt_8_24_bits_2;
  const HWFloat<8,24> c_hw_flt_8_24_bits_3;
  const HWFloat<8,24> c_hw_flt_8_24_bits_4;
  const HWFloat<8,24> c_hw_flt_8_24_bits_5;
  const HWFloat<8,24> c_hw_flt_8_24_bits_6;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_1;
  const HWOffsetFix<49,0,UNSIGNED> c_hw_fix_49_0_uns_bits_2;

  void execute0();
};

}

#endif /* WAVEPROPAGATIONKERNEL_H_ */
