/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NetworkStateRecord : NSObject <NSSecureCoding> {

	long long _stateAge;
	long long _stateDayOfWeek;
	long long _stateSlotId;
	long long _stateLength;
	NSString* _stateBeginningNetworkId;
	NSString* _stateEndingNetworkId;
	long long _stateType;
	long long _stateLabelAssigned;

}

@property (readonly) long long stateAge;                              //@synthesize stateAge=_stateAge - In the implementation block
@property (readonly) long long stateDayOfWeek;                        //@synthesize stateDayOfWeek=_stateDayOfWeek - In the implementation block
@property (readonly) long long stateSlotId;                           //@synthesize stateSlotId=_stateSlotId - In the implementation block
@property (readonly) long long stateLength;                           //@synthesize stateLength=_stateLength - In the implementation block
@property (readonly) NSString * stateBeginningNetworkId;              //@synthesize stateBeginningNetworkId=_stateBeginningNetworkId - In the implementation block
@property (readonly) NSString * stateEndingNetworkId;                 //@synthesize stateEndingNetworkId=_stateEndingNetworkId - In the implementation block
@property (readonly) long long stateType;                             //@synthesize stateType=_stateType - In the implementation block
@property (readonly) long long stateLabelAssigned;                    //@synthesize stateLabelAssigned=_stateLabelAssigned - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)stateType;
-(long long)stateAge;
-(long long)stateDayOfWeek;
-(long long)stateSlotId;
-(long long)stateLength;
-(NSString *)stateBeginningNetworkId;
-(NSString *)stateEndingNetworkId;
-(long long)stateLabelAssigned;
-(id)initWithAge:(long long)arg1 dayOfWeek:(long long)arg2 slotId:(long long)arg3 stateLength:(long long)arg4 beginningNetworkId:(id)arg5 endingNetworkId:(id)arg6 stateType:(long long)arg7 label:(long long)arg8 ;
-(void)assignDayOfWeek:(long long)arg1 ;
-(void)assignLabel:(long long)arg1 ;
@end

