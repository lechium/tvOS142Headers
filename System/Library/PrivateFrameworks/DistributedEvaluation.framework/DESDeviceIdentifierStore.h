/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSMutableDictionary;

@interface DESDeviceIdentifierStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _storeURL;
	NSMutableDictionary* _deviceIdentifiers;

}

@property (nonatomic,retain) NSURL * storeURL;                                     //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deviceIdentifiers;              //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(void)initialize;
-(NSMutableDictionary *)deviceIdentifiers;
-(void)setDeviceIdentifiers:(NSMutableDictionary *)arg1 ;
-(NSURL *)storeURL;
-(void)_readIdentifierStore;
-(void)_writeIdentifierStore;
-(id)initWithStoreURL:(id)arg1 ;
-(id)identifierForBundleId:(id)arg1 ;
-(void)setStoreURL:(NSURL *)arg1 ;
@end
