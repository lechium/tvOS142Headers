/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HAPAirPlayAccessoryBrowserDelegate.h>
#import <libobjc.A.dylib/HMDWACScanner.h>

@protocol HMDWACScanner
@required
-(void)resume;
-(void)start;
-(void)stop;
-(void)setDelegate:(id)arg1 queue:(id)arg2;
-(void)backoff;
-(void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1;

@end


@protocol OS_dispatch_queue, HMDWACScannerDelegate;
@class NSObject, CUWiFiScanner, NSString;

@interface HMDWACScanner : NSObject <HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HMDWACScanner> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CUWiFiScanner* _wifiScanner;
	id<HMDWACScannerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDWACScannerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id<HMDWACScannerDelegate>)delegate;
-(void)setDelegate:(id<HMDWACScannerDelegate>)arg1 ;
-(void)resume;
-(void)start;
-(void)stop;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)backoff;
-(void)wacBrowser:(id)arg1 didFindAirPlayDevice:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didUpdateAirPlayDevice:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didRemoveAirPlayDevice:(id)arg2 ;
-(void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1 ;
@end

