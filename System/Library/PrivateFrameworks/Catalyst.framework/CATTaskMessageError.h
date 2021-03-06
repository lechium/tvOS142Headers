/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskMessage.h>

@class NSError;

@interface CATTaskMessageError : CATTaskMessage {

	NSError* _taskError;

}

@property (nonatomic,retain) NSError * taskError;              //@synthesize taskError=_taskError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)taskError;
-(id)initWithTaskUUID:(id)arg1 taskError:(id)arg2 ;
-(void)setTaskError:(NSError *)arg1 ;
@end

