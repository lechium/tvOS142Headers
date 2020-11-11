/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MechanismBase/MechanismBase.h>

@class NSNumber;

@interface MechanismKofNReorganizer : MechanismBase {

	/*^block*/id _apply;
	long long _min;
	long long _max;
	NSNumber* _k;

}

@property (nonatomic,readonly) long long min;               //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) long long max;               //@synthesize max=_max - In the implementation block
@property (k,nonatomic,readonly) NSNumber * k;              //@synthesize k=_k - In the implementation block
-(long long)max;
-(long long)min;
-(NSNumber *)k;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithMin:(long long)arg1 max:(long long)arg2 k:(id)arg3 request:(id)arg4 apply:(/*^block*/id)arg5 ;
-(id)reorganizeMechanisms:(id)arg1 k:(long long)arg2 error:(id*)arg3 ;
@end

