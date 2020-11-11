/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCTransportPluginManagerProtocol;
@class NSMutableSet, NSString, NSMutableDictionary;

@interface ACCTransportPlugin : NSObject {

	id<ACCTransportPluginManagerProtocol> _delegate;
	NSMutableSet* _activeConnectionUUIDs;
	NSString* _pluginName;
	NSMutableDictionary* _connectionPropertyChangeHandlers;
	NSMutableDictionary* _endpointPropertyChangeHandlers;

}

@property (assign,nonatomic,__weak) id<ACCTransportPluginManagerProtocol> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeConnectionUUIDs;                                //@synthesize activeConnectionUUIDs=_activeConnectionUUIDs - In the implementation block
@property (nonatomic,readonly) NSString * pluginName;                                             //@synthesize pluginName=_pluginName - In the implementation block
@property (nonatomic,readonly) NSString * pluginClassAndName; 
@property (nonatomic,retain) NSMutableDictionary * connectionPropertyChangeHandlers;              //@synthesize connectionPropertyChangeHandlers=_connectionPropertyChangeHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * endpointPropertyChangeHandlers;                //@synthesize endpointPropertyChangeHandlers=_endpointPropertyChangeHandlers - In the implementation block
-(void)dealloc;
-(id<ACCTransportPluginManagerProtocol>)delegate;
-(void)setDelegate:(id<ACCTransportPluginManagerProtocol>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)pluginClassAndName;
-(NSString *)pluginName;
-(void)authStatusDidChangeHandler:(id)arg1 ;
-(void)connectionPropertiesDidChangeHandler:(id)arg1 ;
-(void)endpointPropertiesDidChangeHandler:(id)arg1 ;
-(NSMutableSet *)activeConnectionUUIDs;
-(BOOL)destroyConnectionWithUUID:(id)arg1 ;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(BOOL)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 ;
-(NSMutableDictionary *)connectionPropertyChangeHandlers;
-(NSMutableDictionary *)endpointPropertyChangeHandlers;
-(id)createConnectionWithType:(int)arg1 andIdentifier:(id)arg2 ;
-(BOOL)setSupervisedTransportsRestricted:(BOOL)arg1 forConnectionWithUUID:(id)arg2 ;
-(BOOL)setProperties:(id)arg1 forConnectionWithUUID:(id)arg2 ;
-(BOOL)setAuthenticationStatus:(int)arg1 andCertificateData:(id)arg2 authCTA:(BOOL)arg3 forConnectionWithUUID:(id)arg4 ;
-(BOOL)routeOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 ;
-(BOOL)publishConnectionWithUUID:(id)arg1 ;
-(BOOL)setAccessoryInfo:(id)arg1 forEndpointWithUUID:(id)arg2 ;
-(BOOL)setProperties:(id)arg1 forEndpointWithUUID:(id)arg2 ;
-(BOOL)destroyEndpointWithUUID:(id)arg1 ;
-(id)allConnectionUUIDs;
-(id)allEndpointsUUIDs;
-(id)connectionUUIDForEndpointWithUUID:(id)arg1 ;
-(id)endpointUUIDsForConnectionWithUUID:(id)arg1 ;
-(int)authStatusForConnectionWithUUID:(id)arg1 authType:(int)arg2 ;
-(int)transportTypeForEndpointWithUUID:(id)arg1 ;
-(int)connectionTypeForConnectionWithUUID:(id)arg1 ;
-(id)certificateDataForConnectionWithUUID:(id)arg1 ;
-(id)certificateSerialForConnectionWithUUID:(id)arg1 ;
-(id)certificateSerialStringForConnectionWithUUID:(id)arg1 ;
-(id)certificateCapabilitiesForConnectionWithUUID:(id)arg1 ;
-(int)protocolForEndpointWithUUID:(id)arg1 ;
-(id)identifierForConnectionWithUUID:(id)arg1 ;
-(id)identifierForEndpointWithUUID:(id)arg1 ;
-(id)propertiesForConnectionWithUUID:(id)arg1 ;
-(id)propertiesForEndpointWithUUID:(id)arg1 ;
-(BOOL)processIncomingData:(id)arg1 forEndpointWithUUID:(id)arg2 ;
-(id)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(id)arg3 forConnectionWithUUID:(id)arg4 publishConnection:(BOOL)arg5 ;
-(void)setHandler:(/*^block*/id)arg1 forConnectionProperty:(id)arg2 ;
-(void)setHandler:(/*^block*/id)arg1 forEndpointProperty:(id)arg2 ;
-(void)setActiveConnectionUUIDs:(NSMutableSet *)arg1 ;
-(void)setConnectionPropertyChangeHandlers:(NSMutableDictionary *)arg1 ;
-(void)setEndpointPropertyChangeHandlers:(NSMutableDictionary *)arg1 ;
@end

