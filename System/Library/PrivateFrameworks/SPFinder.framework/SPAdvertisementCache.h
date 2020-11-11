/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPFinder/SPAdvertisementCaching.h>
#import <SPFinder/SPBeaconPayloadCaching.h>

@protocol SPAdvertisementCacheXPCProtocol, OS_dispatch_queue;
@class FMXPCServiceDescription, FMXPCSession, NSObject, NSString;

@interface SPAdvertisementCache : NSObject <SPAdvertisementCaching, SPBeaconPayloadCaching> {

	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPAdvertisementCacheXPCProtocol> _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPAdvertisementCacheXPCProtocol> proxy;                 //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(FMXPCSession *)session;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setProxy:(id<SPAdvertisementCacheXPCProtocol>)arg1 ;
-(id<SPAdvertisementCacheXPCProtocol>)proxy;
-(FMXPCServiceDescription *)serviceDescription;
-(id)remoteInterface;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)saveAdvertisements:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markAdvertisementsProcessed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)advertisementsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveBeaconPayloads:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)clearCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)markRecordsProcessed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markBeaconPayloadsProcessed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mockingEnabled:(BOOL)arg1 ;
@end

