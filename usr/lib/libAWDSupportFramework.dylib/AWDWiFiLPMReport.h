/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiLPMReport : PBCodable <NSCopying> {

	unsigned long long _associatedDuration;
	unsigned long long _associatedSleepDuration;
	unsigned long long _beaconReceivedInLpas;
	unsigned long long _beaconsEarlyTerminatedInLpas;
	unsigned long long _beaconsMissedInLpas;
	unsigned long long _beaconsScheduledInLpas;
	unsigned long long _lpasPowerBudgetRemaining;
	unsigned long long _lpasPowerPeriodRemaining;
	unsigned long long _phyOffDuration;
	unsigned long long _powerConsumedInSelfManagedLPASMode;
	unsigned long long _powerConsumptionDueToAWDLRx;
	unsigned long long _powerConsumptionDueToAWDLTx;
	unsigned long long _powerConsumptionDueToAssocScan;
	unsigned long long _powerConsumptionDueToEPNOScan;
	unsigned long long _powerConsumptionDueToFRTS;
	unsigned long long _powerConsumptionDueToMac;
	unsigned long long _powerConsumptionDueToRF;
	unsigned long long _powerConsumptionDueToRoamScan;
	unsigned long long _powerConsumptionDueToRx;
	unsigned long long _powerConsumptionDueToTx;
	unsigned long long _powerConsumptionDueToUserScan;
	unsigned long long _receiveDuration;
	unsigned long long _roamDuration;
	unsigned long long _sleepDuration;
	unsigned long long _timestamp;
	unsigned long long _totalLPASDuration;
	unsigned long long _totalLpasPowerBudget;
	unsigned long long _totalLpasPowerMonitoringPeriod;
	unsigned long long _totalTimeForBugetExpiry;
	unsigned long long _transmitDuration;
	SCD_Struct_AW26 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedDuration; 
@property (assign,nonatomic) unsigned long long associatedDuration;                              //@synthesize associatedDuration=_associatedDuration - In the implementation block
@property (assign,nonatomic) BOOL hasSleepDuration; 
@property (assign,nonatomic) unsigned long long sleepDuration;                                   //@synthesize sleepDuration=_sleepDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRoamDuration; 
@property (assign,nonatomic) unsigned long long roamDuration;                                    //@synthesize roamDuration=_roamDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPhyOffDuration; 
@property (assign,nonatomic) unsigned long long phyOffDuration;                                  //@synthesize phyOffDuration=_phyOffDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTransmitDuration; 
@property (assign,nonatomic) unsigned long long transmitDuration;                                //@synthesize transmitDuration=_transmitDuration - In the implementation block
@property (assign,nonatomic) BOOL hasReceiveDuration; 
@property (assign,nonatomic) unsigned long long receiveDuration;                                 //@synthesize receiveDuration=_receiveDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLPASDuration; 
@property (assign,nonatomic) unsigned long long totalLPASDuration;                               //@synthesize totalLPASDuration=_totalLPASDuration - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumedInSelfManagedLPASMode; 
@property (assign,nonatomic) unsigned long long powerConsumedInSelfManagedLPASMode;              //@synthesize powerConsumedInSelfManagedLPASMode=_powerConsumedInSelfManagedLPASMode - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToMac; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToMac;                        //@synthesize powerConsumptionDueToMac=_powerConsumptionDueToMac - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToRF; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToRF;                         //@synthesize powerConsumptionDueToRF=_powerConsumptionDueToRF - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToUserScan; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToUserScan;                   //@synthesize powerConsumptionDueToUserScan=_powerConsumptionDueToUserScan - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToRoamScan; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToRoamScan;                   //@synthesize powerConsumptionDueToRoamScan=_powerConsumptionDueToRoamScan - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToAssocScan; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToAssocScan;                  //@synthesize powerConsumptionDueToAssocScan=_powerConsumptionDueToAssocScan - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToEPNOScan; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToEPNOScan;                   //@synthesize powerConsumptionDueToEPNOScan=_powerConsumptionDueToEPNOScan - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToTx; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToTx;                         //@synthesize powerConsumptionDueToTx=_powerConsumptionDueToTx - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToRx; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToRx;                         //@synthesize powerConsumptionDueToRx=_powerConsumptionDueToRx - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToFRTS; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToFRTS;                       //@synthesize powerConsumptionDueToFRTS=_powerConsumptionDueToFRTS - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToAWDLTx; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToAWDLTx;                     //@synthesize powerConsumptionDueToAWDLTx=_powerConsumptionDueToAWDLTx - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConsumptionDueToAWDLRx; 
@property (assign,nonatomic) unsigned long long powerConsumptionDueToAWDLRx;                     //@synthesize powerConsumptionDueToAWDLRx=_powerConsumptionDueToAWDLRx - In the implementation block
@property (assign,nonatomic) BOOL hasBeaconReceivedInLpas; 
@property (assign,nonatomic) unsigned long long beaconReceivedInLpas;                            //@synthesize beaconReceivedInLpas=_beaconReceivedInLpas - In the implementation block
@property (assign,nonatomic) BOOL hasBeaconsMissedInLpas; 
@property (assign,nonatomic) unsigned long long beaconsMissedInLpas;                             //@synthesize beaconsMissedInLpas=_beaconsMissedInLpas - In the implementation block
@property (assign,nonatomic) BOOL hasBeaconsEarlyTerminatedInLpas; 
@property (assign,nonatomic) unsigned long long beaconsEarlyTerminatedInLpas;                    //@synthesize beaconsEarlyTerminatedInLpas=_beaconsEarlyTerminatedInLpas - In the implementation block
@property (assign,nonatomic) BOOL hasBeaconsScheduledInLpas; 
@property (assign,nonatomic) unsigned long long beaconsScheduledInLpas;                          //@synthesize beaconsScheduledInLpas=_beaconsScheduledInLpas - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLpasPowerBudget; 
@property (assign,nonatomic) unsigned long long totalLpasPowerBudget;                            //@synthesize totalLpasPowerBudget=_totalLpasPowerBudget - In the implementation block
@property (assign,nonatomic) BOOL hasLpasPowerBudgetRemaining; 
@property (assign,nonatomic) unsigned long long lpasPowerBudgetRemaining;                        //@synthesize lpasPowerBudgetRemaining=_lpasPowerBudgetRemaining - In the implementation block
@property (assign,nonatomic) BOOL hasTotalLpasPowerMonitoringPeriod; 
@property (assign,nonatomic) unsigned long long totalLpasPowerMonitoringPeriod;                  //@synthesize totalLpasPowerMonitoringPeriod=_totalLpasPowerMonitoringPeriod - In the implementation block
@property (assign,nonatomic) BOOL hasLpasPowerPeriodRemaining; 
@property (assign,nonatomic) unsigned long long lpasPowerPeriodRemaining;                        //@synthesize lpasPowerPeriodRemaining=_lpasPowerPeriodRemaining - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedSleepDuration; 
@property (assign,nonatomic) unsigned long long associatedSleepDuration;                         //@synthesize associatedSleepDuration=_associatedSleepDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTimeForBugetExpiry; 
@property (assign,nonatomic) unsigned long long totalTimeForBugetExpiry;                         //@synthesize totalTimeForBugetExpiry=_totalTimeForBugetExpiry - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setAssociatedDuration:(unsigned long long)arg1 ;
-(void)setHasAssociatedDuration:(BOOL)arg1 ;
-(BOOL)hasAssociatedDuration;
-(void)setSleepDuration:(unsigned long long)arg1 ;
-(void)setHasSleepDuration:(BOOL)arg1 ;
-(BOOL)hasSleepDuration;
-(void)setRoamDuration:(unsigned long long)arg1 ;
-(void)setHasRoamDuration:(BOOL)arg1 ;
-(BOOL)hasRoamDuration;
-(void)setPhyOffDuration:(unsigned long long)arg1 ;
-(void)setHasPhyOffDuration:(BOOL)arg1 ;
-(BOOL)hasPhyOffDuration;
-(void)setTransmitDuration:(unsigned long long)arg1 ;
-(void)setHasTransmitDuration:(BOOL)arg1 ;
-(BOOL)hasTransmitDuration;
-(void)setReceiveDuration:(unsigned long long)arg1 ;
-(void)setHasReceiveDuration:(BOOL)arg1 ;
-(BOOL)hasReceiveDuration;
-(void)setTotalLPASDuration:(unsigned long long)arg1 ;
-(void)setHasTotalLPASDuration:(BOOL)arg1 ;
-(BOOL)hasTotalLPASDuration;
-(void)setPowerConsumedInSelfManagedLPASMode:(unsigned long long)arg1 ;
-(void)setHasPowerConsumedInSelfManagedLPASMode:(BOOL)arg1 ;
-(BOOL)hasPowerConsumedInSelfManagedLPASMode;
-(void)setPowerConsumptionDueToMac:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToMac:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToMac;
-(void)setPowerConsumptionDueToRF:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToRF:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToRF;
-(void)setPowerConsumptionDueToUserScan:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToUserScan:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToUserScan;
-(void)setPowerConsumptionDueToRoamScan:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToRoamScan:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToRoamScan;
-(void)setPowerConsumptionDueToAssocScan:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToAssocScan:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToAssocScan;
-(void)setPowerConsumptionDueToEPNOScan:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToEPNOScan:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToEPNOScan;
-(void)setPowerConsumptionDueToTx:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToTx:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToTx;
-(void)setPowerConsumptionDueToRx:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToRx:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToRx;
-(void)setPowerConsumptionDueToFRTS:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToFRTS:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToFRTS;
-(void)setPowerConsumptionDueToAWDLTx:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToAWDLTx:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToAWDLTx;
-(void)setPowerConsumptionDueToAWDLRx:(unsigned long long)arg1 ;
-(void)setHasPowerConsumptionDueToAWDLRx:(BOOL)arg1 ;
-(BOOL)hasPowerConsumptionDueToAWDLRx;
-(void)setBeaconReceivedInLpas:(unsigned long long)arg1 ;
-(void)setHasBeaconReceivedInLpas:(BOOL)arg1 ;
-(BOOL)hasBeaconReceivedInLpas;
-(void)setBeaconsMissedInLpas:(unsigned long long)arg1 ;
-(void)setHasBeaconsMissedInLpas:(BOOL)arg1 ;
-(BOOL)hasBeaconsMissedInLpas;
-(void)setBeaconsEarlyTerminatedInLpas:(unsigned long long)arg1 ;
-(void)setHasBeaconsEarlyTerminatedInLpas:(BOOL)arg1 ;
-(BOOL)hasBeaconsEarlyTerminatedInLpas;
-(void)setBeaconsScheduledInLpas:(unsigned long long)arg1 ;
-(void)setHasBeaconsScheduledInLpas:(BOOL)arg1 ;
-(BOOL)hasBeaconsScheduledInLpas;
-(void)setTotalLpasPowerBudget:(unsigned long long)arg1 ;
-(void)setHasTotalLpasPowerBudget:(BOOL)arg1 ;
-(BOOL)hasTotalLpasPowerBudget;
-(void)setLpasPowerBudgetRemaining:(unsigned long long)arg1 ;
-(void)setHasLpasPowerBudgetRemaining:(BOOL)arg1 ;
-(BOOL)hasLpasPowerBudgetRemaining;
-(void)setTotalLpasPowerMonitoringPeriod:(unsigned long long)arg1 ;
-(void)setHasTotalLpasPowerMonitoringPeriod:(BOOL)arg1 ;
-(BOOL)hasTotalLpasPowerMonitoringPeriod;
-(void)setLpasPowerPeriodRemaining:(unsigned long long)arg1 ;
-(void)setHasLpasPowerPeriodRemaining:(BOOL)arg1 ;
-(BOOL)hasLpasPowerPeriodRemaining;
-(void)setAssociatedSleepDuration:(unsigned long long)arg1 ;
-(void)setHasAssociatedSleepDuration:(BOOL)arg1 ;
-(BOOL)hasAssociatedSleepDuration;
-(void)setTotalTimeForBugetExpiry:(unsigned long long)arg1 ;
-(void)setHasTotalTimeForBugetExpiry:(BOOL)arg1 ;
-(BOOL)hasTotalTimeForBugetExpiry;
-(unsigned long long)associatedDuration;
-(unsigned long long)sleepDuration;
-(unsigned long long)roamDuration;
-(unsigned long long)phyOffDuration;
-(unsigned long long)transmitDuration;
-(unsigned long long)receiveDuration;
-(unsigned long long)totalLPASDuration;
-(unsigned long long)powerConsumedInSelfManagedLPASMode;
-(unsigned long long)powerConsumptionDueToMac;
-(unsigned long long)powerConsumptionDueToRF;
-(unsigned long long)powerConsumptionDueToUserScan;
-(unsigned long long)powerConsumptionDueToRoamScan;
-(unsigned long long)powerConsumptionDueToAssocScan;
-(unsigned long long)powerConsumptionDueToEPNOScan;
-(unsigned long long)powerConsumptionDueToTx;
-(unsigned long long)powerConsumptionDueToRx;
-(unsigned long long)powerConsumptionDueToFRTS;
-(unsigned long long)powerConsumptionDueToAWDLTx;
-(unsigned long long)powerConsumptionDueToAWDLRx;
-(unsigned long long)beaconReceivedInLpas;
-(unsigned long long)beaconsMissedInLpas;
-(unsigned long long)beaconsEarlyTerminatedInLpas;
-(unsigned long long)beaconsScheduledInLpas;
-(unsigned long long)totalLpasPowerBudget;
-(unsigned long long)lpasPowerBudgetRemaining;
-(unsigned long long)totalLpasPowerMonitoringPeriod;
-(unsigned long long)lpasPowerPeriodRemaining;
-(unsigned long long)associatedSleepDuration;
-(unsigned long long)totalTimeForBugetExpiry;
@end

