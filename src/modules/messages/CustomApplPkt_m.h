//
// Generated file, do not edit! Created by opp_msgc 4.4 from src/modules/messages/CustomApplPkt.msg.
//

#ifndef _CUSTOMAPPLPKT_M_H_
#define _CUSTOMAPPLPKT_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0404
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "SimpleAddress.h"
// }}



/**
 * Class generated from <tt>src/modules/messages/CustomApplPkt.msg</tt> by opp_msgc.
 * <pre>
 * packet CustomApplPkt {
 *     LAddress::L3Type destAddr = LAddress::L3BROADCAST; 
 *     LAddress::L3Type srcAddr  = LAddress::L3BROADCAST; 
 *     double 									xposition; 
 *     double 									yposition; 
 *     double 							     xpositionGPS; 
 *     double										speed; 
 *     int											   id; 
 *     double 								 acceleration; 
 *     double						   leaderAcceleration; 
 *     double 								  leaderSpeed; 
 *     bool 							 beaconingEnabled; 
 * }
 * </pre>
 */
class CustomApplPkt : public ::cPacket
{
  protected:
    LAddress::L3Type destAddr_var;
    LAddress::L3Type srcAddr_var;
    double xposition_var;
    double yposition_var;
    double xpositionGPS_var;
    double speed_var;
    int id_var;
    double acceleration_var;
    double leaderAcceleration_var;
    double leaderSpeed_var;
    bool beaconingEnabled_var;
    double RTTBack_var;

  private:
    void copy(const CustomApplPkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CustomApplPkt&);

  public:
    CustomApplPkt(const char *name=NULL, int kind=0);
    CustomApplPkt(const CustomApplPkt& other);
    virtual ~CustomApplPkt();
    CustomApplPkt& operator=(const CustomApplPkt& other);
    virtual CustomApplPkt *dup() const {return new CustomApplPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual LAddress::L3Type& getDestAddr();
    virtual const LAddress::L3Type& getDestAddr() const {return const_cast<CustomApplPkt*>(this)->getDestAddr();}
    virtual void setDestAddr(const LAddress::L3Type& destAddr);
    virtual LAddress::L3Type& getSrcAddr();
    virtual const LAddress::L3Type& getSrcAddr() const {return const_cast<CustomApplPkt*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const LAddress::L3Type& srcAddr);
    virtual double getXposition() const;
    virtual void setXposition(double xposition);
    virtual double getYposition() const;
    virtual void setYposition(double yposition);
    virtual double getXpositionGPS() const;
    virtual void setXpositionGPS(double xpositionGPS);
    virtual double getSpeed() const;
    virtual void setSpeed(double speed);
    virtual int getId() const;
    virtual void setId(int id);
    virtual double getAcceleration() const;
    virtual void setAcceleration(double acceleration);
    virtual double getLeaderAcceleration() const;
    virtual void setLeaderAcceleration(double leaderAcceleration);
    virtual double getLeaderSpeed() const;
    virtual void setLeaderSpeed(double leaderSpeed);
    virtual bool getBeaconingEnabled() const;
    virtual void setBeaconingEnabled(bool beaconingEnabled);
    virtual double getRTTBack() const;
    virtual void setRTTBack(double speed);
};

inline void doPacking(cCommBuffer *b, CustomApplPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, CustomApplPkt& obj) {obj.parsimUnpack(b);}


#endif // _CUSTOMAPPLPKT_M_H_
