#include "stdsimheader.h"

using namespace maxcompilersim;

namespace maxcompilersim {
// Templated Types used in the kernel
template class HWOffsetFix<19,0,UNSIGNED>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<21,0,UNSIGNED>;
template class HWFloat<8,24>;
template class HWOffsetFix<14,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<13,0,UNSIGNED>;
template class HWOffsetFix<15,0,UNSIGNED>;
template class HWOffsetFix<20,0,UNSIGNED>;
template class HWOffsetFix<1,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<20,0,UNSIGNED>add_fixed <20,0,UNSIGNED,TRUNCATE,20,0,UNSIGNED,20,0,UNSIGNED, false>(const HWOffsetFix<20,0,UNSIGNED> &a, const HWOffsetFix<20,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWFloat<8,24>sub_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWFloat<8,24>add_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWOffsetFix<20,0,UNSIGNED> cast_fixed2fixed<20,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<19,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>gt_fixed<>(const HWOffsetFix<19,0,UNSIGNED> &a, const HWOffsetFix<19,0,UNSIGNED> &b );
template HWFloat<8,24> KernelManagerBlockSync::readInput< HWFloat<8,24> >(const t_port_number port_number);
template HWOffsetFix<19,0,UNSIGNED>sub_fixed <19,0,UNSIGNED,TONEAREVEN,19,0,UNSIGNED,19,0,UNSIGNED, false>(const HWOffsetFix<19,0,UNSIGNED> &a, const HWOffsetFix<19,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<19,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<19,0,UNSIGNED> >(const std::string &name);
template void KernelManagerBlockSync::writeOutput< HWFloat<8,24> >(const t_port_number port_number, const HWFloat<8,24> &value);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<19,0,UNSIGNED> &a, const HWOffsetFix<19,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWFloat<8,24> KernelManagerBlockSync::getMappedRegValue< HWFloat<8,24> >(const std::string &name);
template HWOffsetFix<19,0,UNSIGNED> cast_fixed2fixed<19,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<20,0,UNSIGNED> &a);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);
template HWFloat<8,24>mul_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<20,0,UNSIGNED> &a, const HWOffsetFix<20,0,UNSIGNED> &b );
template HWOffsetFix<13,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<13,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWOffsetFix<21,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<21,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<14,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<14,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<15,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<15,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWFloat<8,24>div_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );


// Additional Code

} // End of maxcompilersim namespace
