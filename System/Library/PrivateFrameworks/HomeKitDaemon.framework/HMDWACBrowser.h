/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDWACScannerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDWACScanner, HMDWACBrowserDelegate;
@class NSObject, NSMutableDictionary, HMFMessageDispatcher, NSString;

@interface HMDWACBrowser : NSObject <HMDWACScannerDelegate, HMFLogging> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<HMDWACScanner> _wacScanner;
	NSMutableDictionary* _unassociatedAccessories;
	HMFMessageDispatcher* _messageDispatcher;
	BOOL _scanIsActive;
	id<HMDWACBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDWACBrowserDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign) BOOL scanIsActive;                                                 //@synthesize scanIsActive=_scanIsActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDWACBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMDWACBrowserDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanner:(id)arg1 didAddDevice:(id)arg2 ;
-(void)scanner:(id)arg1 didRemoveDevice:(id)arg2 ;
-(void)scanner:(id)arg1 didUpdateDevice:(id)arg2 ;
-(void)scanner:(id)arg1 didError:(id)arg2 ;
-(void)scannerDidStop:(id)arg1 ;
-(BOOL)scanIsActive;
-(void)setScanIsActive:(BOOL)arg1 ;
-(id)initWithWACScanner:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)startBrowsingForAccessories;
-(void)startBrowsingForAirPlayWACAccessoriesWithBrowser:(id)arg1 ;
-(void)stopBrowsingForAccessories;
-(void)requestBackoff;
-(void)clearBackoff;
@end

