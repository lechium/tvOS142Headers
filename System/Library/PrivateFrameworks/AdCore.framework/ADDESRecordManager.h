/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADDESRecordManager : ADSingleton {

	NSMutableDictionary* _desRecords;

}

@property (nonatomic,retain) NSMutableDictionary * desRecords;              //@synthesize desRecords=_desRecords - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)recordForRequestID:(id)arg1 ;
-(void)updateAdData:(id)arg1 forRequestID:(id)arg2 ;
-(void)addTapForRequestID:(id)arg1 ;
-(void)addImpressionForRequestID:(id)arg1 ;
-(NSMutableDictionary *)desRecords;
-(void)setDesRecords:(NSMutableDictionary *)arg1 ;
@end

