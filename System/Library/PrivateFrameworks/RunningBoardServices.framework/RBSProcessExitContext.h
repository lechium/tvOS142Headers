/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, RBSProcessExitStatus, RBSTerminateContext, NSString;

@interface RBSProcessExitContext : NSObject <RBSXPCSecureCoding, NSSecureCoding> {

	int _legacyCode;
	NSDate* _timestamp;
	long long _type;
	RBSProcessExitStatus* _status;
	RBSTerminateContext* _terminationContext;

}

@property (assign,nonatomic) long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) RBSProcessExitStatus * status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) RBSTerminateContext * terminationContext;              //@synthesize terminationContext=_terminationContext - In the implementation block
@property (nonatomic,readonly) int legacyCode;                                      //@synthesize legacyCode=_legacyCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)exitContextForNamespace:(unsigned)arg1 code:(unsigned long long)arg2 wait4Status:(int)arg3 ;
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(RBSProcessExitStatus *)status;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setStatus:(RBSProcessExitStatus *)arg1 ;
-(void)setTerminationContext:(RBSTerminateContext *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(int)legacyCode;
-(RBSTerminateContext *)terminationContext;
@end
