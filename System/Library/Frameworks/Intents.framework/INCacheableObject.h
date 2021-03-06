/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol INCacheableObject <NSObject>
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@required
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1;
-(NSString *)cacheIdentifier;

@end

