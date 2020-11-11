/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerDiscovery.h>

@protocol HAP2AccessoryServerDiscoveryDelegate, OS_dispatch_queue;
@class CUBonjourBrowser, NSString, NSObject, HAP2PropertyLock;

@interface HAP2AccessoryServerDiscoveryBonjourLegacy : HAP2LoggingObject <HAP2AccessoryServerDiscovery> {

	BOOL _discovering;
	id<HAP2AccessoryServerDiscoveryDelegate> _delegate;
	CUBonjourBrowser* _browser;
	NSString* _type;
	NSString* _domain;
	NSObject*<OS_dispatch_queue> _workQueue;
	HAP2PropertyLock* _propertyLock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                     //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,getter=isDiscovering,nonatomic) BOOL discovering;                                 //@synthesize discovering=_discovering - In the implementation block
@property (nonatomic,readonly) CUBonjourBrowser * browser;                                          //@synthesize browser=_browser - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (nonatomic,readonly) NSString * type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                                   //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDiscoveryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(id<HAP2AccessoryServerDiscoveryDelegate>)delegate;
-(void)setDelegate:(id<HAP2AccessoryServerDiscoveryDelegate>)arg1 ;
-(NSString *)type;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)isDiscovering;
-(HAP2PropertyLock *)propertyLock;
-(CUBonjourBrowser *)browser;
-(void)setBrowser:(CUBonjourBrowser *)arg1 ;
-(void)_startDiscovering;
-(void)_stopDiscovering;
-(void)startDiscovering;
-(void)stopDiscovering;
-(void)setDiscovering:(BOOL)arg1 ;
-(id)initWithServiceType:(id)arg1 domain:(id)arg2 ;
-(void)_reconfirmAccessory:(id)arg1 ;
-(void)_startBrowser;
-(void)_stopBrowser;
-(void)_handleDeviceFoundOrChanged:(id)arg1 ;
-(void)_handleDeviceLost:(id)arg1 ;
-(void)_handleBrowserStopped:(id)arg1 ;
-(void)reconfirmAccessory:(id)arg1 ;
-(id)initWithLocalDomainAndServiceType:(id)arg1 ;
@end

