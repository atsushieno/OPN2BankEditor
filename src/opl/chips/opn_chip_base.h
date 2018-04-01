#ifndef ONP_CHIP_BASE_H
#define ONP_CHIP_BASE_H

#include <stdint.h>
#include <stddef.h>

class OPNChipBase
{
protected:
    uint32_t m_rate;
    uint32_t m_clock;
public:
    OPNChipBase();
    OPNChipBase(const OPNChipBase &c);
    virtual ~OPNChipBase();

    virtual void setRate(uint32_t rate, uint32_t clock);
    virtual void reset() = 0;
    virtual void reset(uint32_t rate, uint32_t clock);
    virtual void writeReg(uint32_t port, uint16_t addr, uint8_t data) = 0;
    virtual int generate(int16_t *output, size_t frames) = 0;
};

#endif // ONP_CHIP_BASE_H