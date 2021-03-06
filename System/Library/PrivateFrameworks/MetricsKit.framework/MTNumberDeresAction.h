/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTTreatmentAction.h>

@class NSNumber;

@interface MTNumberDeresAction : MTTreatmentAction {

	NSNumber* _precision;

}

@property (nonatomic,retain) NSNumber * precision;              //@synthesize precision=_precision - In the implementation block
-(NSNumber *)precision;
-(void)setPrecision:(NSNumber *)arg1 ;
-(id)initWithField:(id)arg1 configDictionary:(id)arg2 ;
-(id)performAction:(id)arg1 context:(id)arg2 ;
@end

