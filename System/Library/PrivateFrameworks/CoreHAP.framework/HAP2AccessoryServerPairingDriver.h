/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2Cancelable.h>
#import <libobjc.A.dylib/HAP2AccessoryServerPairingDriverWorkItemInfo.h>
#import <libobjc.A.dylib/HAP2AccessoryServerPairingDriver.h>

@protocol HAP2AccessoryServerPairingDriver <NSObject>
@required
-(id)pairAccessory:(id)arg1 delegate:(id)arg2;

@end


@protocol HAP2AccessoryServerTransport, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerEncoding, HAP2AccessoryServerPairingDriverDelegate, HAP2UnpairedAccessoryServer;
@class HAP2SerializedOperationQueue, HAP2PropertyLock, HAPPairSetupSession, NSError, NSArray, HMFActivity, NSString;

@interface HAP2AccessoryServerPairingDriver : HAP2LoggingObject <HAP2Cancelable, HAP2AccessoryServerPairingDriverWorkItemInfo, HAP2AccessoryServerPairingDriver> {

	HAP2PropertyLock* _propertyLock;
	unsigned long long _authMethod;
	HAP2SerializedOperationQueue* _operationQueue;
	HAPPairSetupSession* _pairingSession;
	id<HAP2AccessoryServerTransport> _transport;
	id<HAP2AccessoryServerSecureTransportFactory> _secureTransportFactory;
	id<HAP2AccessoryServerEncoding> _encoding;
	id<HAP2AccessoryServerPairingDriverDelegate> _delegate;
	id<HAP2UnpairedAccessoryServer> _accessoryServer;
	unsigned long long _currentWorkItemIndex;
	NSError* _cancelError;
	unsigned long long _featureFlags;
	NSArray* _workItems;
	HMFActivity* _pairingActivity;

}

@property (nonatomic,readonly) unsigned long long authMethod;                                                     //@synthesize authMethod=_authMethod - In the implementation block
@property (nonatomic,retain) HAP2SerializedOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2UnpairedAccessoryServer> accessoryServer;                              //@synthesize accessoryServer=_accessoryServer - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerPairingDriverDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentWorkItemIndex;                                             //@synthesize currentWorkItemIndex=_currentWorkItemIndex - In the implementation block
@property (nonatomic,readonly) NSArray * workItems;                                                               //@synthesize workItems=_workItems - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                                                               //@synthesize cancelError=_cancelError - In the implementation block
@property (assign,nonatomic,__weak) HMFActivity * pairingActivity;                                                //@synthesize pairingActivity=_pairingActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                                   //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,retain) HAPPairSetupSession * pairingSession;                                                //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerTransport> transport;                                        //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransportFactory> secureTransportFactory;              //@synthesize secureTransportFactory=_secureTransportFactory - In the implementation block
@property (nonatomic,readonly) id<HAP2AccessoryServerEncoding> encoding;                                          //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) unsigned long long featureFlags;                                                   //@synthesize featureFlags=_featureFlags - In the implementation block
+(id)_generateWorkItemsForAuthMethod:(unsigned long long)arg1 ;
-(NSString *)description;
-(id<HAP2AccessoryServerPairingDriverDelegate>)delegate;
-(void)setDelegate:(id<HAP2AccessoryServerPairingDriverDelegate>)arg1 ;
-(HAP2SerializedOperationQueue *)operationQueue;
-(void)setOperationQueue:(HAP2SerializedOperationQueue *)arg1 ;
-(id<HAP2AccessoryServerEncoding>)encoding;
-(void)cancelWithError:(id)arg1 ;
-(NSArray *)workItems;
-(id<HAP2AccessoryServerTransport>)transport;
-(unsigned long long)featureFlags;
-(NSError *)cancelError;
-(void)setCancelError:(NSError *)arg1 ;
-(void)setPairingSession:(HAPPairSetupSession *)arg1 ;
-(HAPPairSetupSession *)pairingSession;
-(HAP2PropertyLock *)propertyLock;
-(id<HAP2AccessoryServerSecureTransportFactory>)secureTransportFactory;
-(HMFActivity *)pairingActivity;
-(unsigned long long)authMethod;
-(void)setPairingActivity:(HMFActivity *)arg1 ;
-(id<HAP2UnpairedAccessoryServer>)accessoryServer;
-(id)initWithTransport:(id)arg1 secureTransportFactory:(id)arg2 encoding:(id)arg3 featureFlags:(unsigned long long)arg4 ;
-(void)setAccessoryServer:(id<HAP2UnpairedAccessoryServer>)arg1 ;
-(void)workItem:(id)arg1 finishedWithError:(id)arg2 ;
-(id)initWithTransport:(id)arg1 secureTransportFactory:(id)arg2 encoding:(id)arg3 featureFlags:(unsigned long long)arg4 workItems:(id)arg5 ;
-(void)setCurrentWorkItemIndex:(unsigned long long)arg1 ;
-(id)currentWorkItem;
-(unsigned long long)currentWorkItemIndex;
-(void)_cancelWithError:(id)arg1 ;
-(void)_pairingFinishedWithError:(id)arg1 ;
-(id)moveToNextWorkItem;
-(id)pairAccessory:(id)arg1 delegate:(id)arg2 ;
@end

