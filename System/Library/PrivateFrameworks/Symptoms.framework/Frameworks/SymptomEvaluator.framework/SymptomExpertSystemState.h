/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SymptomExpertSystemState : ExpertSystemStateCore {

	NSObject*<OS_dispatch_source> _strobe;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> strobe;              //@synthesize strobe=_strobe - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(NSObject*<OS_dispatch_source>)strobe;
-(void)setStrobe:(NSObject*<OS_dispatch_source>)arg1 ;
@end

