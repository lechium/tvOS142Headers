/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject;

@interface VCPInternetReachability : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	SCNetworkReachabilityRef _reachability;
	BOOL _hasWifiOrEthernetConnection;

}

@property (nonatomic,readonly) BOOL hasWifiOrEthernetConnection;              //@synthesize hasWifiOrEthernetConnection=_hasWifiOrEthernetConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)hasWifiOrEthernetConnection;
-(void)setReachabilityForFlags:(unsigned)arg1 update:(BOOL)arg2 ;
@end

