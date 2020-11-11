/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>

@class NSString, WPDaemonServer, NSSet, NSIndexSet;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate> {

	BOOL _isHomePod;
	BOOL _restricted;
	BOOL _testMode;
	long long _state;
	NSString* _name;
	WPDaemonServer* _server;
	NSSet* _cbManagers;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (__weak) WPDaemonServer * server;                             //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isHomePod;                          //@synthesize isHomePod=_isHomePod - In the implementation block
@property (assign,nonatomic) BOOL restricted;                           //@synthesize restricted=_restricted - In the implementation block
@property (assign,nonatomic) BOOL testMode;                             //@synthesize testMode=_testMode - In the implementation block
@property (nonatomic,retain) NSSet * cbManagers;                        //@synthesize cbManagers=_cbManagers - In the implementation block
@property (nonatomic,readonly) BOOL isInternalBuild; 
@property (nonatomic,readonly) NSIndexSet * scanWhiteList; 
@property (nonatomic,readonly) NSIndexSet * advWhiteList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isInternalBuild;
+(id)scanWhiteList;
+(id)advWhiteList;
+(id)wpStateAsString:(long long)arg1 ;
+(id)cbStateAsString:(long long)arg1 ;
+(void)initializeAdvBlackList:(id)arg1 AdvWhiteList:(id)arg2 ScanBlackList:(id)arg3 ScanWhiteList:(id)arg4 ;
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cleanup;
-(WPDaemonServer *)server;
-(void)setServer:(WPDaemonServer *)arg1 ;
-(BOOL)isHomePod;
-(void)update;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)setTestMode:(BOOL)arg1 ;
-(BOOL)testMode;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(BOOL)isInternalBuild;
-(BOOL)restricted;
-(void)setRestricted:(BOOL)arg1 ;
-(NSSet *)cbManagers;
-(void)setCbManagers:(NSSet *)arg1 ;
-(NSIndexSet *)scanWhiteList;
-(NSIndexSet *)advWhiteList;
-(id)generateStateDump;
-(void)cbManagerDidUpdateState:(id)arg1 ;
-(id)initWithServer:(id)arg1 Name:(id)arg2 ;
-(void)updateState:(long long)arg1 Restricted:(BOOL)arg2 ;
-(BOOL)isScanWhitelistedForType:(unsigned char)arg1 ;
-(BOOL)isAdvertisingWhitelistedForType:(unsigned char)arg1 ;
@end

