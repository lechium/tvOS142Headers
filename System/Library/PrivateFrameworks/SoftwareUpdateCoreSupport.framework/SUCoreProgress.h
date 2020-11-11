/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUCoreProgress : NSObject <NSSecureCoding> {

	BOOL _isStalled;
	float _portionComplete;
	NSString* _phase;
	long long _totalWrittenBytes;
	long long _totalExpectedBytes;
	double _estimatedTimeRemaining;

}

@property (nonatomic,retain) NSString * phase;                           //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                             //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) float portionComplete;                      //@synthesize portionComplete=_portionComplete - In the implementation block
@property (assign,nonatomic) long long totalWrittenBytes;                //@synthesize totalWrittenBytes=_totalWrittenBytes - In the implementation block
@property (assign,nonatomic) long long totalExpectedBytes;               //@synthesize totalExpectedBytes=_totalExpectedBytes - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copy;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(BOOL)isStalled;
-(id)summary;
-(void)setIsStalled:(BOOL)arg1 ;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(id)initWithPhase:(id)arg1 isStalled:(BOOL)arg2 portionComplete:(float)arg3 remaining:(double)arg4 ;
-(id)initWithPhase:(id)arg1 isStalled:(BOOL)arg2 portionComplete:(float)arg3 totalWrittenBytes:(long long)arg4 totalExpectedBytes:(long long)arg5 remaining:(double)arg6 ;
-(float)portionComplete;
-(long long)totalWrittenBytes;
-(long long)totalExpectedBytes;
-(BOOL)sameProgress:(id)arg1 isStalled:(BOOL)arg2 portion:(float)arg3 remaining:(double)arg4 ;
-(void)setPortionComplete:(float)arg1 ;
-(void)setTotalWrittenBytes:(long long)arg1 ;
-(void)setTotalExpectedBytes:(long long)arg1 ;
@end
